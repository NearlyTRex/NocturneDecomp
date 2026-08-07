// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
// Address: 00552e00
// Address Range: [[00552e00, 0055318e]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(int width,int height,int bits_per_pixel)

{
  int iVar1;
  void *pvVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DDSURFACEDESC DStack_84;
  DDSCAPS DStack_18;
  int iStack_14;
  
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
    (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
    g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
  }
  if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
    (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
    g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_BitsPerPixel = bits_per_pixel;
  g_WindowWidth = width;
  _DAT_02ddf56c = 0;
  g_WindowHeight = height;
  if (g_BackBuffer != (void *)0x0) {
    free(g_BackBuffer);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    free(g_SoftwareFrameBuffer);
    g_SoftwareZBuffer = (void *)0x0;
  }
  g_BackBuffer = malloc
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowHeight * g_WindowWidth);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       malloc(g_WindowWidth * g_WindowHeight * 4 + 0x40);
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 239;
    core_main_c_displayErrorAndQuit_FUN_004c8440("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
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
    _DAT_02ddf56c = 1;
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
      iVar6 = g_BitsPerPixel >> 0x1f;
      iVar1 = g_BitsPerPixel + iVar6 * -8;
      iStack_14 = g_WindowWidth * 4;
      iVar7 = 0;
      iVar4 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar4) =
             (void *)(g_WindowWidth * iVar5 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3) +
                     (int)pvVar2);
        *(int *)((int)g_ZBufferScanlineArray + iVar4) = (int)g_SoftwareZBuffer + iVar7;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + iStack_14;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar8);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401e30(0,0,width + -1,height + -1);
    iVar8 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005537e0();
    do {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      iVar8 = iVar8 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    } while (iVar8 < 3);
    return 1;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 471;
  core_main_c_displayErrorAndQuit_FUN_004c8440("setScreenResolution - Create back buffer failed!");
  return 0;
}
