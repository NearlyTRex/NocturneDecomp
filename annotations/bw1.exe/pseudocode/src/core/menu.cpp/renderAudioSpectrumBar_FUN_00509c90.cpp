// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_00509c90
// Address: 00509c90
// Address Range: [[00509c90, 00509e1b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_00509c90(int x_center,int y_top,int height_half)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_00509c90(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive local_2c [4];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  this_ptr = DAT_00612560;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    *(int *)(*(int *)DAT_00612560 + 0x10) = iVar1;
    *(int *)(*(int *)this_ptr + 0x14) = y_top << 0x10;
    iVar2 = (x_center + 0x10) * 0x10000;
    *(int *)(*(int *)this_ptr + 0x40) = iVar2;
    *(int *)(*(int *)this_ptr + 0x44) = y_top << 0x10;
    *(int *)(*(int *)this_ptr + 0x70) = iVar2;
    iVar2 = (y_top + height_half * -2) * 0x10000;
    *(int *)(*(int *)this_ptr + 0x74) = iVar2;
    *(int *)(*(int *)this_ptr + 0xa0) = iVar1;
    *(int *)(*(int *)this_ptr + 0xa4) = iVar2;
    *(uint *)(*(int *)this_ptr + 0x18) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0x1c) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x48) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x4c) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x78) = 0xf80000;
    *(uint *)(*(int *)this_ptr + 0x7c) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0xa8) = 0x80000;
    *(uint *)(*(int *)this_ptr + 0xac) = 0x80000;
    local_28 = 4;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_14 = 0;
    local_c = 2;
    local_8 = 3;
    local_10 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,
               (SMRGLTextureBasic *)
               (&DAT_0061f4b0 +
               (((int)((_DAT_01d1ee98 + (_DAT_01d1ee98 >> 0x1f) * -0x10000) -
                      (uint)((_DAT_01d1ee98 >> 0x1f) << 0xf < 0)) >> 0x10) + x_center & 7U) * 0x18))
    ;
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  }
  return;
}
