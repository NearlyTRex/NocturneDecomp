// Name: core_skeleton.cpp_FUN_00541000
// Address: 00541000
// Address Range: [[00541000, 00541019]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00541000(CSkeleton *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00541000(CSkeleton *this_ptr)

{
  return (*(int *)&this_ptr->field_0x1d1f8 * 0x10 + 0x18) * *(int *)&this_ptr->field_0x1e00c;
}
