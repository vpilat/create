/*Copyright 2017 Bang & Olufsen A/S

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/

#pragma once
#include <cstdint>

const int MaxReadSize = 1024 * 2;

typedef struct SigmaReadResponse
{
	uint16_t addr;
	uint16_t length;
	uint8_t data[MaxReadSize];
} SigmaReadResponse;

const uint8_t SigmaCommandReadCode = 0x0A;
const uint8_t SigmaCommandWriteCode = 0x09;
const uint8_t SigmaCommandEepromCode = 0xF0;

const unsigned int SigmaCommandHeaderSize = 14;

const uint16_t SigmaServerPortNumber = 8086;