// Name: engine_palette.cpp_CFont_ctor_FUN_00509b90
// Address: 00509b90
// Address Range: [[00509b90, 00509ba4]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00509b90(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00509b90(CFont *this_ptr)

{
  this_ptr->queued_text_count = 0;
  this_ptr->vtable = (CFont_vtable *)g_ARRAY_PTR_005e2f74;
  return this_ptr;
}
