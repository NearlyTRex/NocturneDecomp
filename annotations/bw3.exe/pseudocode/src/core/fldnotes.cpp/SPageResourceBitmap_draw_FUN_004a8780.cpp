// Name: core_fldnotes.cpp_SPageResourceBitmap_draw_FUN_004a8780
// Address: 004a8780
// Address Range: [[004a8780, 004a879c]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceBitmap_draw_FUN_004a8780(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceBitmap_draw_FUN_004a8780(SPageResourceBitmap *this_ptr)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&this_ptr->bitmap,(this_ptr->base).x,(this_ptr->base).y,0xffff);
  return;
}
