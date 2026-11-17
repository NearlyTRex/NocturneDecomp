// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
// Address: 00563c40
// Address Range: [[00563c40, 00563c87]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel *this_ptr)

{
  if (this_ptr->skeleton_ptr != (CSkeleton *)0x0) {
    return this_ptr->skeleton_ptr;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\skeleton.cpp";
  g_INT_01d1d404 = 0x2ff;
  core_main_c_displayErrorAndQuit_FUN_005030e0("Tried to do something with the skeleton, but skeleton ptr not set!");
  return this_ptr->skeleton_ptr;
}
