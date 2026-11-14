// Name: core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_004926b0
// Address: 004926b0
// Address Range: [[004926b0, 004926c6]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0(CDynamite *this_ptr)

{
  return (uint)(ABS(this_ptr->fuse_timer) == 0.0);
}
