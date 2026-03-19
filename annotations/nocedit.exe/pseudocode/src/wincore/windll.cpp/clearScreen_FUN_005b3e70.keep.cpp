// Name: wincore_windll.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
// MANUAL RECONSTRUCTION
// Clears the entire screen buffer by filling each scanline with g_ClearColor.
// Original uses 8-byte writes (movq-style) to fill 32 bytes per iteration.

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearScreen_FUN_005b3e70(void)
{
    uint bytes_per_row;
    int y;

    if (g_UseExternalRenderer != 0) {
        wincore_windll_cpp_clear_FUN_005b7a30();
        return;
    }

    y = 0;
    do {
        g_ClearColor = g_SelectedClearColor;
        byte *dest = (byte *)g_ScreenBufferArray[y];
        bytes_per_row = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
        while (bytes_per_row > 0x1f) {
            *(double *)dest = g_ClearColor;
            *(double *)(dest + 8) = g_ClearColor;
            *(double *)(dest + 16) = g_ClearColor;
            *(double *)(dest + 24) = g_ClearColor;
            dest = dest + 32;
            bytes_per_row = bytes_per_row - 0x20;
        }
        y = y + 1;
    } while (y < g_WindowHeight);
    return;
}
