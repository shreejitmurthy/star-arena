/* star_arena.h - v0.1.0
   A single-header arena allocator for C/C++.

   USAGE:
        See the README.md for all features.

   LICENSE:
       See end of file for license information.
*/

#ifndef STAR_ARENA_H
#define STAR_ARENA_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

void star_zen();

#define STAR_ARENA_IMPLEMENTATION
void star_zen() {
    printf("Who's ready to get technical and reliable?\n");
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* STAR_ARENA_H */

/*
    Revision history:
        0.1.0  (2026-11-02)  First push.
*/

/*
    MIT License

    Copyright (c) 2026 Shreejit Murthy

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
    SOFTWARE.
 */
