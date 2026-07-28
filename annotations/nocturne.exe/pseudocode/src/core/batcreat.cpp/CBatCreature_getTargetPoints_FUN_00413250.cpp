// Name: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00413250
// Address: 00413250
// Address Range: [[00413250, 0041329f]]
// Convention: unknown
// Signature: undefined4 core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(int param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00413250(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_14;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_14,DAT_0076459c);
  if (param_2 == pCVar1) {
    return 1;
  }
  param_2->x = pCVar1->x;
  param_2->y = pCVar1->y;
  param_2->z = pCVar1->z;
  return 1;
}
