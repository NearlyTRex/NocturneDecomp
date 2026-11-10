// Name: core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0
// Address: 0047a1a0
// Address Range: [[0047a1a0, 0047a1bb]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(CDynamite *this_ptr)

{
  if (0.0 < this_ptr->fuse_timer) {
    return 1;
  }
  return 0;
}
