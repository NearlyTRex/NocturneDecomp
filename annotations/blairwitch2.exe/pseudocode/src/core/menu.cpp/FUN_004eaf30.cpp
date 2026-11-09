// Name: core_menu.cpp_FUN_004eaf30
// Address: 004eaf30
// Address Range: [[004eaf30, 004eb0d2]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_FUN_004eaf30(int x_center,int y_top,int height_half)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_FUN_004eaf30(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_30 [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  this_ptr = DAT_0060b280;
  if (0x140 < x_center) {
    x_center = 0x280 - (x_center + -0x140);
  }
  if (0 < height_half * 2) {
    iVar2 = (x_center + -0x10) * 0x10000;
    *(int *)(*(int *)DAT_0060b280 + 0x10) = iVar2;
    *(int *)(*(int *)this_ptr + 0x14) = y_top << 0x10;
    iVar1 = (x_center + 0x10) * 0x10000;
    *(int *)(*(int *)this_ptr + 0x40) = iVar1;
    *(int *)(*(int *)this_ptr + 0x44) = y_top << 0x10;
    *(int *)(*(int *)this_ptr + 0x70) = iVar1;
    iVar1 = (y_top + height_half * -2) * 0x10000;
    *(int *)(*(int *)this_ptr + 0x74) = iVar1;
    *(int *)(*(int *)this_ptr + 0xa0) = iVar2;
    *(int *)(*(int *)this_ptr + 0xa4) = iVar1;
    *(uint *)(*(int *)this_ptr + 0x18) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0x1c) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x48) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x4c) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x78) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x7c) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0xa8) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0xac) = 0x80000;
    local_2c = 4;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_18 = 0;
    local_10 = 2;
    local_c = 3;
    local_14 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,
               (SMRGLTextureBasic *)
               (&DAT_00617fc8 +
               (((int)((_DAT_01d06134 + (_DAT_01d06134 >> 0x1f) * -0x10000) -
                      (uint)((_DAT_01d06134 >> 0x1f) << 0xf < 0)) >> 0x10) + x_center & 7U) * 0x18))
    ;
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(DAT_0060b280,local_30,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  }
  return;
}
