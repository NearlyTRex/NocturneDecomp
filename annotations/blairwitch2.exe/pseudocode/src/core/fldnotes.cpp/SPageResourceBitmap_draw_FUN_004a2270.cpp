// Name: core_fldnotes.cpp_SPageResourceBitmap_draw_FUN_004a2270
// Address: 004a2270
// Address Range: [[004a2270, 004a228c]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_SPageResourceBitmap_draw_FUN_004a2270(SPageResourceBitmap *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_SPageResourceBitmap_draw_FUN_004a2270(SPageResourceBitmap *this_ptr)

{
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (&this_ptr->bitmap,(this_ptr->base).x,(this_ptr->base).y,0xffff);
  return;
}
