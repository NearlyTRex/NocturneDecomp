// Name: core_game.cpp_FUN_004c48b0
// Address: 004c48b0
// Address Range: [[004c48b0, 004c49ed]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004c48b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004c48b0(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01d22b4c;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)&DAT_01d22bec);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c,"@cursor" + 1,0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 1,"upwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 2,"downwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 3,"leftwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 4,"rightwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 5,"crosshairsgreen",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 6,"crosshairsred",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c + 7,&DAT_005c3cac,0x10,0x10);
  _DAT_01d22c10 = 0;
  _DAT_01d22c14 = 0x10;
  _DAT_01d22bf8 = 0;
  _DAT_01d22bfc = 0x10;
  _DAT_01d22bec = 8;
  _DAT_01d22c0c = 8;
  _DAT_01d22bf0 = 8;
  _DAT_01d22bf4 = 8;
  _DAT_01d22c18 = 8;
  _DAT_01d22c1c = 8;
  _DAT_01d22c00 = 8;
  _DAT_01d22c20 = 8;
  _DAT_01d22c04 = 8;
  _DAT_01d22c24 = 8;
  _DAT_01d22c08 = 8;
  _DAT_01d22c28 = 8;
  return;
}
