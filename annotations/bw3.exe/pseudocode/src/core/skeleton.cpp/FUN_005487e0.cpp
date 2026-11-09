// Name: core_skeleton.cpp_FUN_005487e0
// Address: 005487e0
// Address Range: [[005487e0, 00548827]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_FUN_005487e0(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * __cdecl core_skeleton_cpp_FUN_005487e0(CDeformableModel *this_ptr)

{
  if (*(int *)&this_ptr->field_0x35ac != 0) {
    return *(CSkeleton **)&this_ptr->field_0x35ac;
  }
  _DAT_01d71de0 = "..\\core\\skeleton.cpp";
  _DAT_01d71de4 = 0x2f6;
  core_main_c_FUN_004e4330("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(CSkeleton **)&this_ptr->field_0x35ac;
}
