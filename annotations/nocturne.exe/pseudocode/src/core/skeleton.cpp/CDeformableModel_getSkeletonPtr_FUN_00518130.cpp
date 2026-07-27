// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
// Address Range: [[00518130, 00518177]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(int param_1)

#include "nocturne.h"

uint __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(int param_1)

{
  if (*(int *)(param_1 + 0x2a6c) != 0) {
    return *(uint *)(param_1 + 0x2a6c);
  }
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x2e6;
  core_main_c_FUN_004c8440("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(uint *)(param_1 + 0x2a6c);
}
