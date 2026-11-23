// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_005ac300
// Address: 005ac300
// Address Range: [[005ac300, 005ac821]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(int width,int height,int bits_per_pixel)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID dest;
  int iVar6;
  DDSURFACEDESC DStack_f0;
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
  g_INT_0061b4a0 = bits_per_pixel;
  g_INT_02c99328 = bits_per_pixel;
  g_INT_0061b498 = width;
  g_INT_02c9932c = 0;
  g_INT_0061b49c = height;
  g_INT_02c99330 = 0;
  g_INT_02c99320 = width;
  g_INT_02c9931c = 0;
  g_INT_02c99324 = height;
  if (g_PTR_00629010 != (byte *)0x0) {
    debugFree(g_PTR_00629010);
    g_PTR_00629010 = (byte *)0x0;
  }
  if (g_PTR_02c99310 != (byte *)0x0) {
    debugFree(g_PTR_02c99310);
    g_SoftwareZBuffer = (byte *)0x0;
  }
  g_PTR_00629010 =
       malloc
                 (((int)((g_INT_0061b4a0 + (g_INT_0061b4a0 >> 0x1f) * -8) -
                        (uint)((g_INT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_0061b498 * g_INT_0061b49c);
  if (g_PTR_00629010 == (byte *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 237;
    core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02c99310 = malloc(g_INT_0061b498 * g_INT_0061b49c * 4 + 0x40);
  if (g_PTR_02c99310 == (byte *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 242;
    core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02c99310 + 0x10) & 0xfffffff0);
  HVar1 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                    (g_DirectDrawObject,width,height,bits_per_pixel);
  if ((HVar1 != 0) && (height < 0x1e0)) {
    g_INT_02c99320 = 0x280;
    g_INT_02c9932c = (0x280 - width) / 2;
    g_INT_02c99330 = (0x1e0 - height) / 2;
    g_INT_02c99324 = 0x1e0;
    HVar1 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                      (g_DirectDrawObject,0x280,0x1e0,bits_per_pixel);
  }
  if (HVar1 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar1 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                      (g_DirectDrawObject,g_INT_02c99320,g_INT_02c99324,0x18);
    if (HVar1 != 0) {
      return 0;
    }
    g_INT_02c99328 = 0x18;
    g_INT_02c9931c = 1;
  }
  memset(&DStack_f0,0,0x6c);
  DStack_f0.dwSize = 0x6c;
  DStack_f0.ddsCaps.dwCaps = 0x6218;
  DStack_f0.dwBackBufferCount = 2;
  DStack_f0.dwFlags = 0x21;
  HVar1 = (*g_DirectDrawObject->vtable->CreateSurface)
                    (g_DirectDrawObject,&DStack_f0,&g_DirectDrawSurface,(IUnknown *)0x0);
  if (HVar1 != 0) {
    DStack_f0.dwBackBufferCount = 1;
    HVar1 = (*g_DirectDrawObject->vtable->CreateSurface)
                      (g_DirectDrawObject,&DStack_f0,&g_DirectDrawSurface,(IUnknown *)0x0);
    if (HVar1 != 0) {
      DStack_f0.ddsCaps.dwCaps = 0xa18;
      HVar1 = (*g_DirectDrawObject->vtable->CreateSurface)
                        (g_DirectDrawObject,&DStack_f0,&g_DirectDrawSurface,(IUnknown *)0x0);
      if (HVar1 != 0) {
        return 0;
      }
    }
  }
  memset(&DStack_18,0,4);
  DStack_18.dwCaps = 4;
  HVar1 = (*g_DirectDrawSurface->vtable->GetAttachedSurface)
                    (g_DirectDrawSurface,&DStack_18,&g_SoftwareRenderSurface);
  if (HVar1 == 0) {
    iVar5 = 0;
    if (0 < g_INT_0061b49c) {
      iVar2 = g_INT_0061b4a0 >> 0x1f;
      iVar6 = g_INT_0061b4a0 + iVar2 * -8;
      iStack_14 = g_INT_0061b498 * 4;
      iVar3 = 0;
      iVar4 = 0;
      do {
        *(byte **)((int)g_ScreenBufferArray + iVar4) =
             g_PTR_00629010 + g_INT_0061b498 * iVar5 * ((int)(iVar6 - (uint)(iVar2 << 2 < 0)) >> 3);
        iVar5 = iVar5 + 1;
        *(byte **)((int)g_ZBufferScanlineArray + iVar4) = g_SoftwareZBuffer + iVar3;
        iVar3 = iVar3 + iStack_14;
        iVar4 = iVar4 + 4;
      } while (iVar5 < g_INT_0061b49c);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401810(0,0,width + -1,height + -1);
    iVar5 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005acec0();
    do {
      memset(&DStack_84,0,0x6c);
      DStack_84.dwSize = 0x6c;
      HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                        (g_SoftwareRenderSurface,(RECT *)0x0,&DStack_84,1,(void *)0x0);
      if (HVar1 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 492;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Clear of back buffer failed");
      }
      iVar6 = 0;
      dest = DStack_84.lpSurface;
      if (0 < g_INT_02c99324) {
        do {
          iVar4 = g_INT_02c99320 * g_INT_02c99328 >> 0x1f;
          memset
                    (dest,0,(int)((g_INT_02c99320 * g_INT_02c99328 + iVar4 * -8) -
                                 (uint)(iVar4 << 2 < 0)) >> 3);
          iVar6 = iVar6 + 1;
          dest = (LPVOID)((int)dest + DStack_84.dwPitchOrLinearSize.lPitch);
        } while (iVar6 < g_INT_02c99324);
      }
      HVar1 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
      if (HVar1 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 502;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Unlock of back buffer clear failed");
      }
      g_FlipPending = 1;
      iVar5 = iVar5 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    } while (iVar5 < 3);
    return 1;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 465;
  core_main_c_displayErrorAndQuit_FUN_005030e0("setScreenResolution - Create back buffer failed!");
  return 0;
}
