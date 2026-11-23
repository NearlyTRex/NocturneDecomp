// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
// Address: 005415d0
// Address Range: [[005415d0, 00541617]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel *this_ptr)

{
  if (this_ptr->skeleton_ptr != (CSkeleton *)0x0) {
    return this_ptr->skeleton_ptr;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 757;
  core_main_c_displayErrorAndQuit_FUN_004e4500("Tried to do something with the skeleton, but skeleton ptr not set!");
  return this_ptr->skeleton_ptr;
}
