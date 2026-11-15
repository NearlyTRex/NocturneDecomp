// Name: core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047b230
// Address: 0047b230
// Address Range: [[0047b230, 0047b24b]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047b230(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047b230(CDynamite *this_ptr)

{
  if (0.0 < this_ptr->fuse_timer) {
    return 1;
  }
  return 0;
}
