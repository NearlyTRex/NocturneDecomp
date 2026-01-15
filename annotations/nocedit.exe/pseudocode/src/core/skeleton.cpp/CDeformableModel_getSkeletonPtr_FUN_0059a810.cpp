// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
// Address: 0059a810
// Address Range: [[0059a810, 0059a857]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel * this_ptr)

#include "nocturne.h"

CSkeleton * __cdecl
core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(CDeformableModel *this_ptr)

{
  if (this_ptr->skeleton_ptr != (CSkeleton *)0x0) {
    return this_ptr->skeleton_ptr;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x2e6;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Tried to do something with the skeleton, but skeleton ptr not set!");
  return this_ptr->skeleton_ptr;
}
