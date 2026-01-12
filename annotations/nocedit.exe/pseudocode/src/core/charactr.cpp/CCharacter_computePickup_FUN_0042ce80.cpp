// Name: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// Address: 0042ce80
// Address Range: [[0042ce80, 0042cfdb]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr)

{
  int iVar1;
  SCarryHand *pSVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  int *piVar4;
  CMatrix3x4f *pCVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffe98;
  int aiStack_15c [12];
  float afStack_12c [11];
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  float afStack_3c [11];
  
  bVar7 = 0;
  pSVar2 = this_ptr->carry_hands + in_stack_00000008;
  if (*(int *)pSVar2->field0_0x0 < 0) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xc00;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&(pSVar2->carry_actor->location).position,
             (CVector3f *)&pSVar2->carry_actor->orient);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_d0,&(this_ptr->base_actor).location.position,
             (CVector3f *)&(this_ptr->base_actor).orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_d0,&local_100,in_stack_fffffe98);
  pfVar3 = afStack_12c;
  pCVar5 = &local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)pSVar2->field0_0x0,
             &local_a0,in_stack_fffffe98);
  pfVar3 = afStack_3c;
  pCVar5 = &local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005f6210(&local_70,in_stack_fffffe98);
  piVar4 = aiStack_15c;
  pcVar6 = pSVar2->field2_0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(int *)pcVar6 = *piVar4;
    piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if (0.0 < in_stack_0000000c) {
    pSVar2->field2_0xc[0x34] = '\0';
    pSVar2->field2_0xc[0x35] = '\0';
    pSVar2->field2_0xc[0x36] = '\0';
    pSVar2->field2_0xc[0x37] = '\0';
    *(float *)(pSVar2->field2_0xc + 0x30) = 1.0 / in_stack_0000000c;
    return;
  }
  pSVar2->field2_0xc[0x34] = '\0';
  pSVar2->field2_0xc[0x35] = '\0';
  pSVar2->field2_0xc[0x36] = -0x80;
  pSVar2->field2_0xc[0x37] = '?';
  pSVar2->field2_0xc[0x30] = '\0';
  pSVar2->field2_0xc[0x31] = '\0';
  pSVar2->field2_0xc[0x32] = '\0';
  pSVar2->field2_0xc[0x33] = '\0';
  return;
}
