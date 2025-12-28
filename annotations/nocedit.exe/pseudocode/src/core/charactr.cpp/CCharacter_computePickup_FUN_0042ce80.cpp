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
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffea0;
  CMatrix3x4f *in_stack_fffffea4;
  CMatrix3x4f *in_stack_fffffea8;
  int aiStack_14c [10];
  uint auStack_124 [9];
  byte local_100 [52];
  byte auStack_cc [52];
  uint uStack_98;
  CMatrix3x4f CStack_94;
  uint uStack_64;
  CMatrix3x4f CStack_60;
  uint auStack_30 [8];
  
  bVar7 = 0;
  pSVar2 = this_ptr->carry_hands + in_stack_00000008;
  if (*(int *)pSVar2->field0_0x0 < 0) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xc00;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            ((CMatrix3x4f *)local_100,&(pSVar2->carry_actor->location).position,
             (CVector3f *)&pSVar2->carry_actor->orient);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_cc,&(this_ptr->base_actor).location.position,
             (CVector3f *)&(this_ptr->base_actor).orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_cc + 4),(CMatrix3x4f *)(local_100 + 8),in_stack_fffffea0);
  puVar3 = auStack_124;
  puVar5 = &uStack_98;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)pSVar2->field0_0x0,
             &CStack_94,in_stack_fffffea4);
  puVar3 = auStack_30;
  puVar5 = &uStack_64;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_005f6210(&CStack_60,in_stack_fffffea8);
  piVar4 = aiStack_14c;
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
