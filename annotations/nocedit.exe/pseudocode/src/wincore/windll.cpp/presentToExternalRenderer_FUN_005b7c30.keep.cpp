// Name: wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
// Address: 005b7c30
// MANUAL RECONSTRUCTION
// Copies back buffer to screen buffer array (scanline by scanline) and
// presents via external renderer API. Copy is rep movsd + rep movsb.

#include "nocturne.h"

void __cdecl wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(int skip_buffer_copy)
{
    if (g_UseExternalRenderer == 0) {
        return;
    }
    if ((skip_buffer_copy == 0) && (g_ExternalFrameLocked == 0)) {
        uint row_bytes = (uint)(g_WindowWidth * g_BitsPerPixel) >> 3;
        byte *src = (byte *)g_ScreenBufferArray[0];
        wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
        wincore_windll_cpp_lockFrame_FUN_005b7210();
        for (int y = 0; y < g_WindowHeight; y++) {
            byte *dst = (byte *)g_ScreenBufferArray[y];
            memcpy(dst, src, row_bytes);
            src += row_bytes;
        }
        wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
        wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
    }
    g_ExternalFrameLocked = 0;
    (*g_APIDLL_toggle)();
    return;
}
