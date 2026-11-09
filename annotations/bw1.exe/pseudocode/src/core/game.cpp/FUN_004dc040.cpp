// Name: core_game.cpp_FUN_004dc040
// Address: 004dc040
// Address Range: [[004dc040, 004dc17d]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004dc040(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004dc040(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01cd0b44;
  do {
    engine_alphabit_cpp_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)&DAT_01cd0be4);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44,"@cursor" + 1,0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 1,"upwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 2,"downwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 3,"leftwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 4,"rightwhite",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 5,"crosshairsgreen",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 6,"crosshairsred",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44 + 7,&DAT_005e36a0,0x10,0x10);
  _DAT_01cd0c08 = 0;
  _DAT_01cd0c0c = 0x10;
  _DAT_01cd0bf0 = 0;
  _DAT_01cd0bf4 = 0x10;
  _DAT_01cd0be4 = 8;
  _DAT_01cd0c04 = 8;
  _DAT_01cd0be8 = 8;
  _DAT_01cd0bec = 8;
  _DAT_01cd0c10 = 8;
  _DAT_01cd0c14 = 8;
  _DAT_01cd0bf8 = 8;
  _DAT_01cd0c18 = 8;
  _DAT_01cd0bfc = 8;
  _DAT_01cd0c1c = 8;
  _DAT_01cd0c00 = 8;
  _DAT_01cd0c20 = 8;
  return;
}
