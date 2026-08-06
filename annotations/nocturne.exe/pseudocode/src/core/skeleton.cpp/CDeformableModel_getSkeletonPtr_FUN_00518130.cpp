// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
// Address Range: [[00518130, 00518177]]
// Convention: __cdecl
// Signature: CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr)

{
  if (this_ptr->skeleton_ptr != (CSkeleton *)0x0) {
    return this_ptr->skeleton_ptr;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 742;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Tried to do something with the skeleton, but skeleton ptr not set!");
  return this_ptr->skeleton_ptr;
}
