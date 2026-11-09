// Name: core_skeleton.cpp_FUN_00563c40
// Address: 00563c40
// Address Range: [[00563c40, 00563c87]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_FUN_00563c40(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * __cdecl core_skeleton_cpp_FUN_00563c40(CDeformableModel *this_ptr)

{
  if (*(int *)&this_ptr->field_0x35ac != 0) {
    return *(CSkeleton **)&this_ptr->field_0x35ac;
  }
  _DAT_01d1d400 = "..\\core\\skeleton.cpp";
  _DAT_01d1d404 = 0x2ff;
  core_main_c_FUN_005030e0("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(CSkeleton **)&this_ptr->field_0x35ac;
}
