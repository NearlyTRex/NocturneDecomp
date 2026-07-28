// Name: core_ladder.cpp_FUN_004c45a0
// Address: 004c45a0
// Address Range: [[004c45a0, 004c46a4]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004c45a0(CDemonActor *param_1)

#include "nocturne.h"

void core_ladder_cpp_FUN_004c45a0(CDemonActor *param_1)

{
  CVector3f *pCVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  byte local_dc [48];
  byte local_ac [48];
  CMatrix3x4f local_7c;
  float local_4c [12];
  float local_1c;
  float local_18;
  float local_14;
  CVector3f local_10;
  
  bVar5 = 0;
  if (param_1[2].orient.vec.z == 0.0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_dc,&param_1[2].orient_matrix,param_1[2].orient_matrix.m + 1);
  iVar2 = *(int *)((int)&param_1[2].orient + 8);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (local_ac,iVar2 + 0x20,iVar2 + 0x30);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_dc,local_ac);
  pfVar3 = local_4c;
  pCVar4 = &local_7c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  local_1c = local_7c.m[0].z;
  local_18 = local_7c.m[1].z;
  local_14 = local_7c.m[2].z;
  (param_1->location).position.x = local_7c.m[0].z;
  (param_1->location).position.y = local_7c.m[1].z;
  (param_1->location).position.z = local_7c.m[2].z;
  pCVar1 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_7c,&local_10);
  if ((CVector3f *)&param_1->orient != pCVar1) {
    (param_1->orient).vec.x = pCVar1->x;
    (param_1->orient).vec.y = pCVar1->y;
    (param_1->orient).vec.z = pCVar1->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  return;
}
