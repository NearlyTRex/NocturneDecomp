// Name: core_werewolf.cpp_CWerewolf_getTargetPoints_FUN_00557c70
// Address: 00557c70
// Address Range: [[00557c70, 00557cbe]]
// Convention: unknown
// Signature: undefined4 core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_00557c70(int param_1,CVector3f *param_2)

#include "nocturne.h"

uint core_werewolf_cpp_CWerewolf_getTargetPoints_FUN_00557c70(int param_1,CVector3f *param_2)

{
  CVector3f *pCVar1;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     ((CDeformableModelInstance *)(param_1 + 0x150),&local_10,
                      *(int *)(param_1 + 0xbd28));
  if (param_2 == pCVar1) {
    return 1;
  }
  param_2->x = pCVar1->x;
  param_2->y = pCVar1->y;
  param_2->z = pCVar1->z;
  return 1;
}
