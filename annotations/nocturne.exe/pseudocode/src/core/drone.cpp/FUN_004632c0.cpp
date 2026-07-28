// Name: core_drone.cpp_FUN_004632c0
// Address: 004632c0
// Address Range: [[004632c0, 00463308]]
// Convention: unknown
// Signature: undefined4 core_drone_cpp_FUN_004632c0(int param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_drone_cpp_FUN_004632c0(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_10,0);
  if (param_2 == pCVar1) {
    return 1;
  }
  param_2->x = pCVar1->x;
  param_2->y = pCVar1->y;
  param_2->z = pCVar1->z;
  return 1;
}
