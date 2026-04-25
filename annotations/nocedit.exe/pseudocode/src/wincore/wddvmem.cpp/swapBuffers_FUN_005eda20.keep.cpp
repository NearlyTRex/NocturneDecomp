// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
// MANUAL RECONSTRUCTION
// Copies the back buffer to the display surface and flips.
// Three code paths: external renderer, software rendering (32->24 bpp
// conversion via g_ScreenBufferArray), and DirectDraw Lock/memcpy/Unlock.
// The MMX in the original is only in the DirectDraw path's inner copy loop
// (32 bytes per iteration via movq).

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)
{
    HRESULT hr;

#if NOCTURNE_AUTHENTIC_WINDOWS
    if (g_WindowActive == 0) {
        goto done;
    }
#endif

    if (g_UseExternalRenderer != 0) {
        wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(0);
        g_RenderingInProgress = 0;
        wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
        return;
    }

    if (g_RenderingInProgress != 0) {
        goto flip;
    }

    if (g_UseSoftwareRendering != 0) {
        // Software rendering path: copy back buffer to screen device
        // with 32-bit BGRA -> 24-bit BGR conversion per pixel
        byte *src = (byte *)g_BackBuffer;
        g_UseSoftwareRendering = 0;
        wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
        for (int y = 0; y < g_WindowHeight; y++) {
            byte *scanline = (byte *)g_ScreenBufferArray[y];
            for (int x = 0; x < g_WindowWidth; x++) {
                scanline[0] = src[0];
                scanline[1] = src[1];
                scanline[2] = src[2];
                scanline += 3;
                src += 4;
            }
        }
        wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
        g_UseSoftwareRendering = 1;
    }
    else {
        // DirectDraw Lock path: copy back buffer directly to locked surface
        int bytes_per_pixel = (g_BitsPerPixel + 7) / 8;
        int row_bytes = g_WindowWidth * bytes_per_pixel;
        DDSURFACEDESC surf_desc;

        memset(&surf_desc, 0, 0x6c);
        surf_desc.dwSize = 0x6c;

        hr = (*g_DirectDrawSurface->vtable->Lock)
                    (g_DirectDrawSurface, (RECT *)0x0, &surf_desc, 1, (void *)0x0);
        if (hr != 0 || surf_desc.lpSurface == (LPVOID)0x0) {
            goto done;
        }

        byte *src_row = (byte *)g_BackBuffer;
        byte *dst_row = (byte *)surf_desc.lpSurface;
        for (int y = 0; y < g_WindowHeight; y++) {
            memcpy(dst_row, src_row, row_bytes);
            src_row += row_bytes;
            dst_row += surf_desc.dwPitchOrLinearSize.lPitch;
        }

        hr = (*g_DirectDrawSurface->vtable->Unlock)
                    (g_DirectDrawSurface, (void *)0x0);
        if (hr != 0) {
            g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
            g_CurrentLineNumber = 0x36e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to unlock front buffer");
            g_RenderingInProgress = 0;
            wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
            return;
        }
        goto done;
    }

flip:
    // Flip the DirectDraw surface
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
        hr = (*g_DirectDrawSurface->vtable->Flip)
                    (g_DirectDrawSurface, (IDirectDrawSurface *)0x0, 1);
        if (hr != 0 && hr == SYSTEM_DDERR_SURFACELOST) {
            wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
        }
    }

done:
    g_RenderingInProgress = 0;
    wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
    return;
}
