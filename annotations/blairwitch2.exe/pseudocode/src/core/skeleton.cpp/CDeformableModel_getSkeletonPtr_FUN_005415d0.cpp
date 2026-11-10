// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
// Address: 005415d0
// Address Range: [[005415d0, 00541617]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel *this_ptr)

{
  if (this_ptr->skeleton_ptr != (CSkeleton *)0x0) {
    return this_ptr->skeleton_ptr;
  }
  _DAT_01d046a0 = "..\\core\\skeleton.cpp";
  _DAT_01d046a4 = 0x2f5;
  core_main_c_FUN_004e4500("Tried to do something with the skeleton, but skeleton ptr not set!");
  return this_ptr->skeleton_ptr;
}
