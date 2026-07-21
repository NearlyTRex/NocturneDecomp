// Name: core_level.cpp_CLevelLoader_show_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c59d4]]
// Convention: __cdecl
// Signature: int __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

int __cdecl core_level_cpp_CLevelLoader_show_FUN_004c5640(uint *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  byte local_58 [20];
  byte local_44 [20];
  byte local_30 [20];
  byte local_1c [20];
  
  param_1[2] = 0;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[0x44] = param_3;
  param_1[1] = param_2;
  if (param_3 == 0) {
    wincore_windll_cpp_clearScreen_FUN_0052ee70();
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
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650(0x1cc3290,"moon.kfm");
  iVar1 = engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005baca4);
  if ((param_4 == -1) && (param_1[0x44] == 0)) {
    param_4 = rand();
    iVar1 = param_4 / 3;
    param_4 = param_4 % 3;
  }
  if (param_4 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(local_44);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_44,"load1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(local_44,0,0,0xffff);
    param_1[0x45] = 0x78;
    param_1[0x46] = 0x82;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x44] = 1;
    param_1[0x49] = 0x82;
    param_1[0x4a] = 200;
    param_1[0x4b] = 0xf4;
    iVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(local_44,0);
  }
  if (param_4 == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(local_30);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_30,"load2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(local_30,0,0,0xffff);
    param_1[0x45] = 0x1e4;
    param_1[0x46] = 0x42;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x49] = 0x82;
    param_1[0x4a] = 0xbd;
    param_1[0x4b] = 0xff;
    param_1[0x44] = 1;
    iVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(local_30,0);
  }
  if (param_4 == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(local_1c);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_1c,"load3",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(local_1c,0,0,0xffff);
    param_1[0x45] = 0x9f;
    param_1[0x46] = 1;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x44] = 1;
    param_1[0x49] = 0x9e;
    param_1[0x4a] = 0xe1;
    param_1[0x4b] = 0xff;
    iVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(local_1c,0);
  }
  if (param_4 != 3) {
    return iVar1;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040e320(local_58);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(local_58,"load4",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(local_58,0,0,0xffff);
  param_1[0x45] = 0x17b;
  param_1[0x46] = 0x44;
  param_1[0x47] = 0x5a;
  param_1[0x48] = 0x5a;
  param_1[0x44] = 1;
  param_1[0x49] = 0x6b;
  param_1[0x4a] = 0x9a;
  param_1[0x4b] = 0xff;
  iVar1 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040e340(local_58,0);
  return iVar1;
}
