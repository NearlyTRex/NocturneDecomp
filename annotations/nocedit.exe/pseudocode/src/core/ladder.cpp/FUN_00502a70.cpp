// Name: core_ladder.cpp_FUN_00502a70
// Address: 00502a70
// Address Range: [[00502a70, 00502b74]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502a70()

#include "nocturne.h"

/* Signature: byte actors_other_ladder.cpp_FUN_00502a70(uint param_1) */

void core_ladder_cpp_FUN_00502a70(void)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  CMatrix3x4f *unaff_ESI;
  float *pfVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  CMatrix3x4f local_dc;
  CMatrix3x4f local_ac;
  CVector3f local_7c;
  float local_70;
  float local_60;
  float local_50;
  float local_4c [12];
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if (in_stack_00000004[2].orient.pitch == 0.0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_dc,(CVector3f *)&in_stack_00000004[2].orient.bank,
             (CVector3f *)&in_stack_00000004[2].orient_matrix.m[0].y);
  fVar1 = in_stack_00000004[2].orient.pitch;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_ac,(CVector3f *)((int)fVar1 + 0x20),(CVector3f *)((int)fVar1 + 0x30));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_dc,&local_ac,unaff_ESI);
  pfVar4 = local_4c;
  pCVar2 = &local_7c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar2->x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar2 = (CVector3f *)((int)pCVar2 + ((uint)bVar5 * -2 + 1) * 4);
  }
  local_1c = local_70;
  local_18 = local_60;
  local_14 = local_50;
  (in_stack_00000004->location).position.x = local_70;
  (in_stack_00000004->location).position.y = local_60;
  (in_stack_00000004->location).position.z = local_50;
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     (&local_7c,(CMatrix3x3f *)&stack0xfffffff0);
  if (&in_stack_00000004->orient != (COrientation *)pCVar2) {
    (in_stack_00000004->orient).pitch = pCVar2->x;
    (in_stack_00000004->orient).bank = pCVar2->y;
    (in_stack_00000004->orient).heading = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}
