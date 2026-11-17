// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_00588a50
// Address: 00588a50
// Address Range: [[00588a50, 00588dde]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(int width,int height,int bits_per_pixel)

{
  int iVar1;
  byte *puVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DDSURFACEDESC DStack_84;
  DDSCAPS DStack_18;
  int iStack_14;
  
  if (g_IUnknown_PTR_02661aec != (IUnknown *)0x0) {
    (*g_IUnknown_PTR_02661aec->vtable->Release)(g_IUnknown_PTR_02661aec);
    g_IUnknown_PTR_02661aec = (IUnknown *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02661ae8 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae8);
    g_IDirectDrawSurface_PTR_02661ae8 = (IDirectDrawSurface *)0x0;
  }
  if (g_IDirectDrawSurface_PTR_02661ae4 != (IDirectDrawSurface *)0x0) {
    (*g_IDirectDrawSurface_PTR_02661ae4->vtable->Release)
              ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae4);
    g_IDirectDrawSurface_PTR_02661ae4 = (IDirectDrawSurface *)0x0;
  }
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_INT_006141c0 = bits_per_pixel;
  g_INT_006141b8 = width;
  g_INT_02661afc = 0;
  g_INT_006141bc = height;
  if (g_PTR_00622010 != (byte *)0x0) {
    debugFree(g_PTR_00622010);
    g_PTR_00622010 = (byte *)0x0;
  }
  if (g_PTR_02661af0 != (byte *)0x0) {
    debugFree(g_PTR_02661af0);
    g_PTR_0070c62c = (byte *)0x0;
  }
  g_PTR_00622010 =
       malloc
                 (((int)((g_INT_006141c0 + (g_INT_006141c0 >> 0x1f) * -8) -
                        (uint)((g_INT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_006141bc * g_INT_006141b8);
  if (g_PTR_00622010 == (byte *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0xea;
    core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02661af0 = malloc(g_INT_006141b8 * g_INT_006141bc * 4 + 0x40);
  if (g_PTR_02661af0 == (byte *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0xef;
    core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_PTR_0070c62c = (byte *)((uint)(g_PTR_02661af0 + 0x10) & 0xfffffff0);
  HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->SetDisplayMode)
                    (g_IDirectDraw_PTR_02661ae0,width,height,bits_per_pixel);
  if (HVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->SetDisplayMode)
                      (g_IDirectDraw_PTR_02661ae0,width,height,0x18);
    if (HVar3 != 0) {
      return 0;
    }
    g_INT_02661afc = 1;
  }
  memset(&DStack_84,0,0x6c);
  DStack_84.dwSize = 0x6c;
  DStack_84.dwFlags = 0x21;
  DStack_84.ddsCaps.dwCaps = 0x6218;
  DStack_84.dwBackBufferCount = 2;
  HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->CreateSurface)
                    (g_IDirectDraw_PTR_02661ae0,&DStack_84,&g_IDirectDrawSurface_PTR_02661ae4,
                     (IUnknown *)0x0);
  if (HVar3 != 0) {
    DStack_84.dwBackBufferCount = 1;
    HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->CreateSurface)
                      (g_IDirectDraw_PTR_02661ae0,&DStack_84,&g_IDirectDrawSurface_PTR_02661ae4,
                       (IUnknown *)0x0);
    if (HVar3 != 0) {
      DStack_84.ddsCaps.dwCaps = 0xa18;
      HVar3 = (*g_IDirectDraw_PTR_02661ae0->vtable->CreateSurface)
                        (g_IDirectDraw_PTR_02661ae0,&DStack_84,&g_IDirectDrawSurface_PTR_02661ae4,
                         (IUnknown *)0x0);
      if (HVar3 != 0) {
        return 0;
      }
    }
  }
  memset(&DStack_18,0,4);
  DStack_18.dwCaps = 4;
  HVar3 = (*g_IDirectDrawSurface_PTR_02661ae4->vtable->GetAttachedSurface)
                    (g_IDirectDrawSurface_PTR_02661ae4,&DStack_18,&g_IDirectDrawSurface_PTR_02661ae8
                    );
  puVar2 = g_PTR_00622010;
  iVar8 = g_INT_006141bc;
  if (HVar3 == 0) {
    iVar5 = 0;
    if (0 < g_INT_006141bc) {
      iVar6 = g_INT_006141c0 >> 0x1f;
      iVar1 = g_INT_006141c0 + iVar6 * -8;
      iStack_14 = g_INT_006141b8 * 4;
      iVar7 = 0;
      iVar4 = 0;
      do {
        *(byte **)((int)g_ARRAY_PTR_01c2a38c + iVar4) =
             puVar2 + g_INT_006141b8 * iVar5 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3);
        *(byte **)((int)g_UINT_PTR_ARRAY_01c2b64c + iVar4) = g_PTR_0070c62c + iVar7;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + iStack_14;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar8);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401810(0,0,width + -1,height + -1);
    iVar8 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_00589430();
    do {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      iVar8 = iVar8 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    } while (iVar8 < 3);
    return 1;
  }
  g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
  g_INT_01d046a4 = 0x1bd;
  core_main_c_displayErrorAndQuit_FUN_004e4500("setScreenResolution - Create back buffer failed!");
  return 0;
}
