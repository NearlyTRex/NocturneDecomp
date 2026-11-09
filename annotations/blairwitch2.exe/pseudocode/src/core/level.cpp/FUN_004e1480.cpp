// Name: core_level.cpp_FUN_004e1480
// Address: 004e1480
// Address Range: [[004e1480, 004e15f5]]
// Convention: unknown
// Signature: void core_level_cpp_FUN_004e1480(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void core_level_cpp_FUN_004e1480(uint *param_1,uint param_2,int param_3)

{
  CAlphaBitmap local_18;
  
  param_1[2] = 0;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[0x44] = param_3;
  param_1[1] = param_2;
  if (param_3 == 0) {
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0x280;
    param_1[0x48] = 0x1e0;
  }
  else {
    param_1[0x46] = 0;
    param_1[0x47] = 0xc0;
    param_1[0x48] = 0xc0;
    param_1[0x45] = 0x1bf;
  }
  param_1[0x49] = 0xff;
  param_1[0x4a] = 0xff;
  param_1[0x4b] = 0xff;
  core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0(&g_LoadingMoonModel,"moon.kfm");
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00617e14);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_18);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&local_18,"loadscreen",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&local_18,0,0,0xffff);
  param_1[0x45] = 0x18;
  param_1[0x46] = 0x195;
  param_1[0x47] = 0x3c;
  param_1[0x48] = 0x3c;
  param_1[0x44] = 1;
  param_1[0x49] = 0xd7;
  param_1[0x4a] = 0xdc;
  param_1[0x4b] = 0xe0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_18,0);
  return;
}
