// Name: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
// Address: 00518130
// Address Range: [[00518130, 00518177]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(int param_1)

{
  if (*(int *)(param_1 + 0x2a6c) != 0) {
    return *(uint *)(param_1 + 0x2a6c);
  }
  _DAT_01cc4800 = "..\\core\\skeleton.cpp";
  _DAT_01cc4804 = 0x2e6;
  FUN_004c8440("Tried to do something with the skeleton, but skeleton ptr not set!");
  return *(uint *)(param_1 + 0x2a6c);
}
