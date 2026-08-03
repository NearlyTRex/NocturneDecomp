// Name: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_004ca240
// Address: 004ca240
// Address Range: [[004ca240, 004ca2e1]]
// Convention: unknown
// Signature: void core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_004ca240(int param_1,SIntersectXZCylinder *param_2)

#include "nocturne.h"

void core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_004ca240(int param_1,SIntersectXZCylinder *param_2)

{
  CKeyFramedModel *pCVar1;
  int *piVar2;
  CBoundingBox3D local_24;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                     ((CKeyFramedModelInstance *)(param_1 + 0x150));
  local_24.min.x = (pCVar1->bounds).min.x;
  local_24.min.y = (pCVar1->bounds).min.y;
  local_24.min.z = (pCVar1->bounds).min.z;
  local_24.max.x = (pCVar1->bounds).max.x;
  local_24.max.y = (pCVar1->bounds).max.y;
  piVar2 = (int *)(param_1 + 0x5e8);
  local_24.max.z = (pCVar1->bounds).max.z;
  do {
    while (*piVar2 != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
                (g_CDemonSet_PTR_005be368,param_2,&local_24,(CVector3f *)(piVar2 + 3),
                 (CMatrix3x3f *)(piVar2 + 9));
      piVar2 = piVar2 + 0x19;
      if (piVar2 == (int *)(param_1 + 0xa98)) {
        return;
      }
    }
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(param_1 + 0xa98));
  return;
}
