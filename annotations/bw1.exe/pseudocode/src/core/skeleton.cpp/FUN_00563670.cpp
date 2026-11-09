// Name: core_skeleton.cpp_FUN_00563670
// Address: 00563670
// Address Range: [[00563670, 00563689]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_FUN_00563670(CSkeleton *this_ptr)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_FUN_00563670(CSkeleton *this_ptr)

{
  return (*(int *)&this_ptr->field_0x1de78 * 0x10 + 0x18) * *(int *)&this_ptr->field_0x1ec8c;
}
