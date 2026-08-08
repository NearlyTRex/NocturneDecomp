// Name: engine_special.cpp_clearScreen_FUN_005b3e70
// Address: 005b3e70
// MANUAL RECONSTRUCTION
// Address Range: [[005b3e70, 005b3ed3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void)
{
    uint bytes_per_row;
    int y;

    if (g_UseExternalRenderer != 0) {
        engine_special_cpp_clear_FUN_005b7a30();
        return;
    }

    y = 0;
    do {
        double fill_value = g_BufferFillZeroQword;
        byte *dest = (byte *)g_ScreenBufferArray[y];
        bytes_per_row = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
        do {
            *(double *)dest = fill_value;
            *(double *)(dest + 8) = fill_value;
            *(double *)(dest + 16) = fill_value;
            *(double *)(dest + 24) = fill_value;
            dest = dest + 32;
            bytes_per_row = bytes_per_row - 0x20;
        } while ((int)bytes_per_row > 0);
        g_BufferFillFpuPopST0 = fill_value;
        y = y + 1;
    } while (y < g_WindowHeight);
    return;
}
