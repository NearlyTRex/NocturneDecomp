// Name: core_level.cpp_FUN_004dfc50
// Address: 004dfc50
// Address Range: [[004dfc50, 004dfffc]]
// Convention: unknown
// Signature: CAlphaBitmap * core_level_cpp_FUN_004dfc50(undefined4 *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

CAlphaBitmap * core_level_cpp_FUN_004dfc50(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  CAlphaBitmap *pCVar2;
  CAlphaBitmap local_58;
  CAlphaBitmap local_44;
  CAlphaBitmap local_30;
  CAlphaBitmap local_1c;
  
  param_1[1] = 0xc;
  param_1[2] = 0;
  param_1[3] = 1;
  *param_1 = 0;
  param_1[0x44] = param_3;
  if (param_3 == 0) {
    engine_special_cpp_clearScreen_FUN_00560d70();
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
  iVar1 = rand();
  pCVar2 = (CAlphaBitmap *)(iVar1 / 4);
  iVar1 = iVar1 % 4;
  if (iVar1 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_58);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_58,"load_0",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_demon",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_58,0,0,0xffff);
    param_1[0x45] = 0x78;
    param_1[0x46] = 0x82;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x44] = 1;
    param_1[0x49] = 0x82;
    param_1[0x4a] = 200;
    param_1[0x4b] = 0xf4;
    pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_58,0);
  }
  if (iVar1 == 1) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_44);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_44,"load_1",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_cross",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_44,0,0,0xffff);
    param_1[0x45] = 0x1e4;
    param_1[0x46] = 0x42;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x49] = 0x82;
    param_1[0x4a] = 0xbd;
    param_1[0x4b] = 0xff;
    param_1[0x44] = 1;
    pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_44,0);
  }
  if (iVar1 == 2) {
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_30);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_30,"load_2",0x280,0x1e0);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d70be8,"L_stick",0x80,0x80);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_30,0,0,0xffff);
    param_1[0x45] = 0x9f;
    param_1[0x46] = 1;
    param_1[0x47] = 0x5a;
    param_1[0x48] = 0x5a;
    param_1[0x44] = 1;
    param_1[0x49] = 0x9e;
    param_1[0x4a] = 0xe1;
    param_1[0x4b] = 0xff;
    pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_30,0);
  }
  if (iVar1 != 3) {
    return pCVar2;
  }
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_1c);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_1c,"load_3",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d70be8,"L_shaman",0x80,0x80);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&local_1c,0,0,0xffff);
  param_1[0x45] = 0x17b;
  param_1[0x46] = 0x44;
  param_1[0x47] = 0x5a;
  param_1[0x48] = 0x5a;
  param_1[0x44] = 1;
  param_1[0x49] = 0x6b;
  param_1[0x4a] = 0x9a;
  param_1[0x4b] = 0xff;
  pCVar2 = engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_1c,0);
  return pCVar2;
}
