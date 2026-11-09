// Name: core_fire.cpp_FUN_004a4130
// Address: 004a4130
// Address Range: [[004a4130, 004a41c5]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a4130(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_fire_cpp_FUN_004a4130(uint param_1,int param_2)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  SMRGLTextureBasic *texture_00;
  
  texture_00 = (SMRGLTextureBasic *)&DAT_005fd8f4;
  iVar1 = 0;
  do {
    if (param_2 == 1) {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture_00);
    }
    if (param_2 == 2) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd984 + iVar1);
LAB_004a4158:
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    }
    else {
      if (param_2 == 3) {
        texture = (SMRGLTextureBasic *)(&DAT_005fda14 + iVar1);
        goto LAB_004a4158;
      }
      if (param_2 == 4) {
        texture = (SMRGLTextureBasic *)(&DAT_005fdaa4 + iVar1);
        goto LAB_004a4158;
      }
      if (param_2 == 5) {
        texture = (SMRGLTextureBasic *)(&DAT_005fdb34 + iVar1);
        goto LAB_004a4158;
      }
    }
    iVar1 = iVar1 + 0x18;
    texture_00 = texture_00 + 0x18;
    if (iVar1 == 0x90) {
      return;
    }
  } while( true );
}
