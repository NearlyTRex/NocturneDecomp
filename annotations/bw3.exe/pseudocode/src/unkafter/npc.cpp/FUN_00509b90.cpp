// Name: unkafter_npc.cpp_FUN_00509b90
// Address: 00509b90
// Address Range: [[00509b90, 00509ba4]]
// Convention: __cdecl
// Signature: CFont * __cdecl unkafter_npc_cpp_FUN_00509b90(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl unkafter_npc_cpp_FUN_00509b90(CFont *this_ptr)

{
  *(uint *)this_ptr = 0;
  *(byte ***)(this_ptr + 0x6a44) = &PTR_engine_palette_cpp_FUN_00509bb0_005e2f74;
  return this_ptr;
}
