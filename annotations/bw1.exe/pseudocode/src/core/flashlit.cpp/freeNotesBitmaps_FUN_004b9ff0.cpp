// Name: core_flashlit.cpp_freeNotesBitmaps_FUN_004b9ff0
// Address: 004b9ff0
// Address Range: [[004b9ff0, 004ba0ad]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_freeNotesBitmaps_FUN_004b9ff0(void)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_freeNotesBitmaps_FUN_004b9ff0(void)

{
  CAlphaBitmap *this_ptr;
  
  this_ptr = CAlphaBitmap_ARRAY_01cc7ba8;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr);
    this_ptr = this_ptr + 1;
  } while (this_ptr != &CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
  g_INT_0061d310 = -1;
  g_INT_0061d2e0 = 1;
  g_INT_01cc7f1c = 0;
  g_CHAR_01cc7f38 = '\0';
  g_INT_01cc8000 = 0;
  return;
}
