// Name: core_game.cpp_loadCursorBitmaps_FUN_004dc040
// Address: 004dc040
// Address Range: [[004dc040, 004dc17d]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_loadCursorBitmaps_FUN_004dc040(void)

#include "nocturne.h"

void __cdecl core_game_cpp_loadCursorBitmaps_FUN_004dc040(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01cd0b44;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)g_INT_ARRAY_01cd0be4);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (CAlphaBitmap_ARRAY_01cd0b44,"cursor",0x10,0x10);
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
            (CAlphaBitmap_ARRAY_01cd0b44 + 7,"dot",0x10,0x10);
  g_INT_ARRAY_01cd0be4[9] = 0;
  g_INT_ARRAY_01cd0be4[10] = 0x10;
  g_INT_ARRAY_01cd0be4[3] = 0;
  g_INT_ARRAY_01cd0be4[4] = 0x10;
  g_INT_ARRAY_01cd0be4[0] = 8;
  g_INT_ARRAY_01cd0be4[8] = 8;
  g_INT_ARRAY_01cd0be4[1] = 8;
  g_INT_ARRAY_01cd0be4[2] = 8;
  g_INT_ARRAY_01cd0be4[0xb] = 8;
  g_INT_ARRAY_01cd0be4[0xc] = 8;
  g_INT_ARRAY_01cd0be4[5] = 8;
  g_INT_ARRAY_01cd0be4[0xd] = 8;
  g_INT_ARRAY_01cd0be4[6] = 8;
  g_INT_ARRAY_01cd0be4[0xe] = 8;
  g_INT_ARRAY_01cd0be4[7] = 8;
  g_INT_ARRAY_01cd0be4[0xf] = 8;
  return;
}
