// Name: core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90
// Address: 0049cf90
// Address Range: [[0049cf90, 0049cfa6]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_0049cf90(CDynamite *this_ptr)

{
  return (uint)(ABS(this_ptr->fuse_timer) == 0.0);
}
