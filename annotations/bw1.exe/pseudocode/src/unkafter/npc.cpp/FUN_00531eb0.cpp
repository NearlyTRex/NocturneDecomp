// Name: unkafter_npc.cpp_FUN_00531eb0
// Address: 00531eb0
// Address Range: [[00531eb0, 00531ec4]]
// Convention: __cdecl
// Signature: CFont * __cdecl unkafter_npc_cpp_FUN_00531eb0(CFont *this_ptr)

#include "nocturne.h"

CFont * __cdecl unkafter_npc_cpp_FUN_00531eb0(CFont *this_ptr)

{
  *(uint *)this_ptr = 0;
  *(byte ***)(this_ptr + 0x6a44) = &PTR_engine_palette_cpp_FUN_00531ed0_006045b0;
  return this_ptr;
}
