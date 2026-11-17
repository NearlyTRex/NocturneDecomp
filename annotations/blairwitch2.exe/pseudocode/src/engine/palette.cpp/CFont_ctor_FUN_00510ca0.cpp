// Name: engine_palette.cpp_CFont_ctor_FUN_00510ca0
// Address: 00510ca0
// Address Range: [[00510ca0, 00510cb4]]
// Convention: __cdecl
// Signature: CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00510ca0(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl engine_palette_cpp_CFont_ctor_FUN_00510ca0(CFont *this_ptr)

{
  this_ptr->queued_text_count = 0;
  this_ptr->vtable = (CFont_vtable *)g_ARRAY_PTR_005fa8bc;
  return this_ptr;
}
