// Name: core_npc.cpp_FUN_00509b90
// Address: 00509b90
// Address Range: [[00509b90, 00509ba4]]
// Convention: __cdecl
// Signature: CFont * __cdecl core_npc_cpp_FUN_00509b90(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl core_npc_cpp_FUN_00509b90(CFont *this_ptr)

{
  this_ptr->queued_text_count = 0;
  this_ptr->vtable = (CFont_vtable *)&PTR_engine_palette_cpp_FUN_00509bb0_005e2f74;
  return this_ptr;
}
