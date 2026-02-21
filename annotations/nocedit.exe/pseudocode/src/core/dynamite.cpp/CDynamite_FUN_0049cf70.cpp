// Name: core_dynamite.cpp_CDynamite_FUN_0049cf70
// Address: 0049cf70
// Address Range: [[0049cf70, 0049cf8b]]
// Convention: __cdecl
// Signature: int __cdecl core_dynamite_cpp_CDynamite_FUN_0049cf70(CDynamite *this_ptr)

#include "nocturne.h"

int __cdecl core_dynamite_cpp_CDynamite_FUN_0049cf70(CDynamite *this_ptr)

{
  if (0.0 < this_ptr->fuse_timer) {
    return 1;
  }
  return 0;
}
