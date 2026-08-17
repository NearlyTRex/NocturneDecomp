// Name: core_dynamite.cpp_CDynamite_isFuseLit_FUN_0046ed80
// Address: 0046ed80
// Address Range: [[0046ed80, 0046ed9b]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0046ed80(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0046ed80(CDynamite *this_ptr)

{
  if (0.0 < this_ptr->fuse_timer) {
    return 1;
  }
  return 0;
}
