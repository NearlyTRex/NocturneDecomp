// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_004e76d0
// Address: 004e76d0
// Address Range: [[004e76d0, 004e785b]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004e76d0(int x_center,int y_top,int height_half)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_menu_cpp_renderAudioSpectrumBar_FUN_004e76d0(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  SMRGLHeaderPrimitive aSStack_2c [4];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  this_ptr = DAT_005f2afc;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    *(int *)(*(int *)DAT_005f2afc + 0x10) = iVar1;
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
    uStack_28 = 4;
    uStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_14 = 0;
    uStack_c = 2;
    uStack_8 = 3;
    uStack_10 = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,
               (SMRGLTextureBasic *)
               ((((int)((_DAT_01d737e0 + (_DAT_01d737e0 >> 0x1f) * -0x10000) -
                       (uint)((_DAT_01d737e0 >> 0x1f) << 0xf < 0)) >> 0x10) + x_center & 7U) * 0x18
               + 0x6003b8));
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
              (DAT_005f2afc,aSStack_2c,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  }
  return;
}
