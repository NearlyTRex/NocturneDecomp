// Name: core_skeleton.cpp_FUN_00548210
// Address: 00548210
// Address Range: [[00548210, 00548229]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00548210(CSkeleton *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00548210(CSkeleton *this_ptr)

{
  return (*(int *)&this_ptr->field_0x1de78 * 0x10 + 0x18) * *(int *)&this_ptr->field_0x1ec8c;
}
