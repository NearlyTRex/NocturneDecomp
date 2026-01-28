// Name: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// Address: 0042ce80
// Address Range: [[0042ce80, 0042cfdb]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(CCharacter *this_ptr)

{
  int iVar1;
  SCarryHand *pSVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;
  
  bVar6 = 0;
  pSVar2 = this_ptr->carry_hands + in_stack_00000008;
  if (*(int *)pSVar2->unk1 < 0) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xc00;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&(pSVar2->carry_actor->location).position,
             (CVector3f *)&pSVar2->carry_actor->orient);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_d0,&(this_ptr->base).location.position,(CVector3f *)&(this_ptr->base).orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_d0,&local_100,&local_130);
  pCVar3 = &local_130;
  pCVar4 = &local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((this_ptr->model).bone_transform.bone_world_matrices + *(int *)pSVar2->unk1,&local_a0,
             &local_40);
  pCVar3 = &local_40;
  pCVar4 = &local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005f6210(&local_70,&local_160);
  pCVar3 = &local_160;
  pcVar5 = pSVar2->unk2;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(float *)pcVar5 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  if (0.0 < in_stack_0000000c) {
    pSVar2->unk2[0x34] = '\0';
    pSVar2->unk2[0x35] = '\0';
    pSVar2->unk2[0x36] = '\0';
    pSVar2->unk2[0x37] = '\0';
    *(float *)(pSVar2->unk2 + 0x30) = 1.0 / in_stack_0000000c;
    return;
  }
  pSVar2->unk2[0x34] = '\0';
  pSVar2->unk2[0x35] = '\0';
  pSVar2->unk2[0x36] = -0x80;
  pSVar2->unk2[0x37] = '?';
  pSVar2->unk2[0x30] = '\0';
  pSVar2->unk2[0x31] = '\0';
  pSVar2->unk2[0x32] = '\0';
  pSVar2->unk2[0x33] = '\0';
  return;
}
