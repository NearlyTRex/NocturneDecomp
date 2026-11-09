// Name: core_dynamite.cpp_FUN_0047a1c0
// Address: 0047a1c0
// Address Range: [[0047a1c0, 0047a1d6]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_FUN_0047a1c0(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_FUN_0047a1c0(CDynamite *this_ptr)

{
  return (uint)((*(uint *)&this_ptr->field_0x6d4 & 0x7fffffff) == 0);
}
