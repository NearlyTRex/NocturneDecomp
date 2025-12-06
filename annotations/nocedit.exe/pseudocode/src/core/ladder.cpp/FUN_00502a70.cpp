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
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CDemonActor *in_stack_00000004;
  CMatrix3x4f *in_stack_ffffff24;
  byte auStack_d4 [48];
  CMatrix3x4f CStack_a4;
  uint uStack_74;
  CVector3f local_70;
  float fStack_64;
  float fStack_54;
  float fStack_44;
  uint auStack_40 [12];
  float local_10;
  float fStack_c;
  float fStack_8;
  
  bVar6 = 0;
  if (in_stack_00000004[2].orient.pitch == 0.0) {
    return;
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xffffff24,(CVector3f *)&in_stack_00000004[2].orient.bank,
             (CVector3f *)&in_stack_00000004[2].orient_matrix.m[0].y);
  fVar1 = in_stack_00000004[2].orient.pitch;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)(auStack_d4 + 0x2c),(CVector3f *)((int)fVar1 + 0x20),
             (CVector3f *)((int)fVar1 + 0x30));
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_d4,&CStack_a4,in_stack_ffffff24);
  puVar4 = auStack_40;
  puVar5 = &uStack_74;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  local_10 = fStack_64;
  fStack_c = fStack_54;
  fStack_8 = fStack_44;
  (in_stack_00000004->location).position.x = fStack_64;
  (in_stack_00000004->location).position.y = fStack_54;
  (in_stack_00000004->location).position.z = fStack_44;
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     (&local_70,(CMatrix3x3f *)&stack0xfffffffc);
  if (&in_stack_00000004->orient != (COrientation *)pCVar2) {
    (in_stack_00000004->orient).pitch = pCVar2->x;
    (in_stack_00000004->orient).bank = pCVar2->y;
    (in_stack_00000004->orient).heading = pCVar2->z;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  return;
}
