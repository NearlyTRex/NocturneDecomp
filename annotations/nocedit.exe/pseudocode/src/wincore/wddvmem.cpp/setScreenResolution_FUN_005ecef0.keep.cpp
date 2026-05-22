// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
// Address: 005ecef0
// MANUAL RECONSTRUCTION
// Address Range: [[005ecef0, 005ed29e]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width,int height,int bits_per_pixel)

{
  void *pvVar2;
  HRESULT HVar3;
  int iVar5;
  int iVar7;
  int iVar8;
  DDSURFACEDESC DStack_84;
  DDSCAPS DStack_18;
  int iStack_14;
  int backbuffer_guard;

#if NOCTURNE_AUTHENTIC_WINDOWS
  backbuffer_guard = 0;
#else
  backbuffer_guard = NOCTURNE_BACKBUFFER_GUARD_BYTES;
#endif
  if (g_DirectDrawUnknown != (IUnknown *)0x0 && g_DirectDrawUnknown->vtable != (IUnknown_vtable *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0 && g_SoftwareRenderSurface->vtable != (IDirectDrawSurface_vtable *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0 && g_DirectDrawSurface->vtable != (IDirectDrawSurface_vtable *)0x0) {
    (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
    g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_BitsPerPixel = bits_per_pixel;
  g_WindowWidth = width;
  g_UseSoftwareRendering = 0;
  g_WindowHeight = height;
  if (g_BackBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
    g_SoftwareZBuffer = (void *)0x0;
  }
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowHeight * g_WindowWidth + backbuffer_guard,
                            "..\\wincore\\wddvmem.cpp",0xe9);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       shape_memdbg_cpp_debugMalloc_FUN_0050f250
                 (g_WindowWidth * g_WindowHeight * 4 + 0x40,"..\\wincore\\wddvmem.cpp",0xee);
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)(((uintptr_t)g_SoftwareFrameBuffer + 0x10) & ~(uintptr_t)0xf);
  HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                    (g_DirectDrawObject,width,height,bits_per_pixel);
  if (HVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)(g_DirectDrawObject,width,height,0x18);
    if (HVar3 != 0) {
      return 0;
    }
    g_UseSoftwareRendering = 1;
  }
  memset(&DStack_84,0,0x6c);
  DStack_84.dwSize = 0x6c;
  DStack_84.dwFlags = 0x21;
  DStack_84.ddsCaps.dwCaps = 0x6218;
  DStack_84.dwBackBufferCount = 2;
  HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                    (g_DirectDrawObject,&DStack_84,&g_DirectDrawSurface,(IUnknown *)0x0);
  if (HVar3 != 0) {
    DStack_84.dwBackBufferCount = 1;
    HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                      (g_DirectDrawObject,&DStack_84,&g_DirectDrawSurface,(IUnknown *)0x0);
    if (HVar3 != 0) {
      DStack_84.ddsCaps.dwCaps = 0xa18;
      HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                        (g_DirectDrawObject,&DStack_84,&g_DirectDrawSurface,(IUnknown *)0x0);
      if (HVar3 != 0) {
        return 0;
      }
    }
  }
  memset(&DStack_18,0,4);
  DStack_18.dwCaps = 4;
  HVar3 = (*g_DirectDrawSurface->vtable->GetAttachedSurface)
                    (g_DirectDrawSurface,&DStack_18,&g_SoftwareRenderSurface);
  pvVar2 = g_BackBuffer;
  iVar8 = g_WindowHeight;
  if (HVar3 == 0) {
    iVar5 = 0;
    if (0 < g_WindowHeight) {
      iStack_14 = g_WindowWidth * 4;
      iVar7 = 0;
      do {
        g_ScreenBufferArray[iVar5] =
             (char *)pvVar2 + g_WindowWidth * iVar5 * (g_BitsPerPixel / 8);
        g_ZBufferScanlineArray[iVar5] = (uint *)((char *)g_SoftwareZBuffer + iVar7);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + iStack_14;
      } while (iVar5 < iVar8);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401800(0,0,width + -1,height + -1);
    iVar8 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
    do {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar8 = iVar8 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (iVar8 < 3);
    return 1;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 0x1d7;
  core_main_c_displayErrorAndQuit_FUN_00506f10("setScreenResolution - Create back buffer failed!");
  return 0;
}
