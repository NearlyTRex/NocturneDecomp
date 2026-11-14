// Name: core_npc.cpp_FUN_00531eb0
// Address: 00531eb0
// Address Range: [[00531eb0, 00531ec4]]
// Convention: __cdecl
// Signature: CFont * __cdecl core_npc_cpp_FUN_00531eb0(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl core_npc_cpp_FUN_00531eb0(CFont *this_ptr)

{
  this_ptr->queued_text_count = 0;
  this_ptr->vtable = (CFont_vtable *)&PTR_engine_palette_cpp_FUN_00531ed0_006045b0;
  return this_ptr;
}
