// Name: core_game.cpp_loadCursorBitmaps_FUN_004c48b0
// Address: 004c48b0
// Address Range: [[004c48b0, 004c49ed]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_loadCursorBitmaps_FUN_004c48b0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_loadCursorBitmaps_FUN_004c48b0(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01d22b4c;
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != (CAlphaBitmap *)g_INT_ARRAY_01d22bec);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_01d22b4c,"cursor",0x10,0x10);
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
            (CAlphaBitmap_ARRAY_01d22b4c + 7,"dot",0x10,0x10);
  g_INT_ARRAY_01d22bec[9] = 0;
  g_INT_ARRAY_01d22bec[10] = 0x10;
  g_INT_ARRAY_01d22bec[3] = 0;
  g_INT_ARRAY_01d22bec[4] = 0x10;
  g_INT_ARRAY_01d22bec[0] = 8;
  g_INT_ARRAY_01d22bec[8] = 8;
  g_INT_ARRAY_01d22bec[1] = 8;
  g_INT_ARRAY_01d22bec[2] = 8;
  g_INT_ARRAY_01d22bec[0xb] = 8;
  g_INT_ARRAY_01d22bec[0xc] = 8;
  g_INT_ARRAY_01d22bec[5] = 8;
  g_INT_ARRAY_01d22bec[0xd] = 8;
  g_INT_ARRAY_01d22bec[6] = 8;
  g_INT_ARRAY_01d22bec[0xe] = 8;
  g_INT_ARRAY_01d22bec[7] = 8;
  g_INT_ARRAY_01d22bec[0xf] = 8;
  return;
}
