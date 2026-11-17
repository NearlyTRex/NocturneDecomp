// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_00579bb0
// Address: 00579bb0
// Address Range: [[00579bb0, 0057a0d1]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(int width,int height,int bits_per_pixel)

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
  
  if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
    g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce8);
    g_IDirectDrawSurface_PTR_02d0bce8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02d0bce4 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce4);
    g_IDirectDrawSurface_PTR_02d0bce4 = (IDirectDrawSurface *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_INT_005fba20 = bits_per_pixel;
  g_INT_02d0bd08 = bits_per_pixel;
  g_INT_005fba18 = width;
  g_INT_02d0bd0c = 0;
  g_INT_005fba1c = height;
  g_INT_02d0bd10 = 0;
  g_INT_02d0bd00 = width;
  g_INT_02d0bcfc = 0;
  g_INT_02d0bd04 = height;
  if (g_PTR_0060b010 != (byte *)0x0) {
    debugFree(g_PTR_0060b010);
    g_PTR_0060b010 = (byte *)0x0;
  }
  if (g_PTR_02d0bcf0 != (byte *)0x0) {
    debugFree(g_PTR_02d0bcf0);
    g_PTR_0072ffac = (byte *)0x0;
  }
  g_PTR_0060b010 =
       malloc
                 (((int)((g_INT_005fba20 + (g_INT_005fba20 >> 0x1f) * -8) -
                        (uint)((g_INT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_005fba18 * g_INT_005fba1c);
  if (g_PTR_0060b010 == (byte *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0xed;
    core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02d0bcf0 = malloc(g_INT_005fba18 * g_INT_005fba1c * 4 + 0x40);
  if (g_PTR_02d0bcf0 == (byte *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0xf2;
    core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_PTR_0072ffac = (byte *)((uint)(g_PTR_02d0bcf0 + 0x10) & 0xfffffff0);
  HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->SetDisplayMode)
                    (g_IDirectDraw_PTR_02d0bce0,width,height,bits_per_pixel);
  if ((HVar1 != 0) && (height < 0x1e0)) {
    g_INT_02d0bd00 = 0x280;
    g_INT_02d0bd0c = (0x280 - width) / 2;
    g_INT_02d0bd10 = (0x1e0 - height) / 2;
    g_INT_02d0bd04 = 0x1e0;
    HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->SetDisplayMode)
                      (g_IDirectDraw_PTR_02d0bce0,0x280,0x1e0,bits_per_pixel);
  }
  if (HVar1 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->SetDisplayMode)
                      (g_IDirectDraw_PTR_02d0bce0,g_INT_02d0bd00,g_INT_02d0bd04,0x18);
    if (HVar1 != 0) {
      return 0;
    }
    g_INT_02d0bd08 = 0x18;
    g_INT_02d0bcfc = 1;
  }
  memset(&DStack_f0,0,0x6c);
  DStack_f0.dwSize = 0x6c;
  DStack_f0.ddsCaps.dwCaps = 0x6218;
  DStack_f0.dwBackBufferCount = 2;
  DStack_f0.dwFlags = 0x21;
  HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->CreateSurface)
                    (g_IDirectDraw_PTR_02d0bce0,&DStack_f0,&g_IDirectDrawSurface_PTR_02d0bce4,
                     (IUnknown *)0x0);
  if (HVar1 != 0) {
    DStack_f0.dwBackBufferCount = 1;
    HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->CreateSurface)
                      (g_IDirectDraw_PTR_02d0bce0,&DStack_f0,&g_IDirectDrawSurface_PTR_02d0bce4,
                       (IUnknown *)0x0);
    if (HVar1 != 0) {
      DStack_f0.ddsCaps.dwCaps = 0xa18;
      HVar1 = (*g_IDirectDraw_PTR_02d0bce0->vtable->CreateSurface)
                        (g_IDirectDraw_PTR_02d0bce0,&DStack_f0,&g_IDirectDrawSurface_PTR_02d0bce4,
                         (IUnknown *)0x0);
      if (HVar1 != 0) {
        return 0;
      }
    }
  }
  memset(&DStack_18,0,4);
  DStack_18.dwCaps = 4;
  HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->GetAttachedSurface)
                    (g_IDirectDrawSurface_PTR_02d0bce4,&DStack_18,&g_IDirectDrawSurface_PTR_02d0bce8
                    );
  if (HVar1 == 0) {
    iVar5 = 0;
    if (0 < g_INT_005fba1c) {
      iVar2 = g_INT_005fba20 >> 0x1f;
      iVar6 = g_INT_005fba20 + iVar2 * -8;
      iStack_14 = g_INT_005fba18 * 4;
      iVar3 = 0;
      iVar4 = 0;
      do {
        *(byte **)((int)g_ARRAY_PTR_01c5faec + iVar4) =
             g_PTR_0060b010 + g_INT_005fba18 * iVar5 * ((int)(iVar6 - (uint)(iVar2 << 2 < 0)) >> 3);
        iVar5 = iVar5 + 1;
        *(byte **)((int)g_UINT_PTR_ARRAY_01c60dac + iVar4) = g_PTR_0072ffac + iVar3;
        iVar3 = iVar3 + iStack_14;
        iVar4 = iVar4 + 4;
      } while (iVar5 < g_INT_005fba1c);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401810(0,0,width + -1,height + -1);
    iVar5 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_0057a770();
    do {
      memset(&DStack_84,0,0x6c);
      DStack_84.dwSize = 0x6c;
      HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Lock)
                        (g_IDirectDrawSurface_PTR_02d0bce8,(RECT *)0x0,&DStack_84,1,(void *)0x0);
      if (HVar1 != 0) {
        g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
        g_INT_01d71de4 = 0x1ec;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Clear of back buffer failed");
      }
      iVar6 = 0;
      dest = DStack_84.lpSurface;
      if (0 < g_INT_02d0bd04) {
        do {
          iVar4 = g_INT_02d0bd00 * g_INT_02d0bd08 >> 0x1f;
          memset
                    (dest,0,(int)((g_INT_02d0bd00 * g_INT_02d0bd08 + iVar4 * -8) -
                                 (uint)(iVar4 << 2 < 0)) >> 3);
          iVar6 = iVar6 + 1;
          dest = (LPVOID)((int)dest + DStack_84.dwPitchOrLinearSize.lPitch);
        } while (iVar6 < g_INT_02d0bd04);
      }
      HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Unlock)
                        (g_IDirectDrawSurface_PTR_02d0bce8,(void *)0x0);
      if (HVar1 != 0) {
        g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
        g_INT_01d71de4 = 0x1f6;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Unlock of back buffer clear failed");
      }
      g_INT_02d0bcf4 = 1;
      iVar5 = iVar5 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    } while (iVar5 < 3);
    return 1;
  }
  g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
  g_INT_01d71de4 = 0x1d1;
  core_main_c_displayErrorAndQuit_FUN_004e4330("setScreenResolution - Create back buffer failed!");
  return 0;
}
