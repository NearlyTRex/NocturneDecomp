// Name: core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_0047a1c0
// Address: 0047a1c0
// Address Range: [[0047a1c0, 0047a1d6]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0047a1c0(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0047a1c0(CDynamite *this_ptr)

{
  return (uint)(ABS(this_ptr->fuse_timer) == 0.0);
}
