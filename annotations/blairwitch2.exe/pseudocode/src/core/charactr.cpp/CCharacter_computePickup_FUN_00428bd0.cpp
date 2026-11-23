// Name: core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0
// Address: 00428bd0
// Address Range: [[00428bd0, 00428d52]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter *this_ptr,int hand_index,float blend_time,CMatrix3x4f *carry_offset)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter *this_ptr,int hand_index,float blend_time,CMatrix3x4f *carry_offset)

{
  int iVar1;
  SCarryHand *pSVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_160;
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  CMatrix3x4f local_40;
  
  bVar5 = 0;
  pSVar2 = this_ptr->carry_hands + hand_index;
  if (pSVar2->bone_index < 0) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 3634;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CCharacter::computePickup - invalid hand!  Character is %s, hand is %d");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_00591ad0
            (&local_d0,&(pSVar2->carry_actor->location).position,&(pSVar2->carry_actor->orient).vec)
  ;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
            (&local_a0,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_a0,&local_d0,&local_100);
  pCVar3 = &local_100;
  pCVar4 = &local_130;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            ((this_ptr->model).bone_transform.bone_model_matrices + pSVar2->bone_index,&local_130,
             &local_70);
  pCVar3 = &local_70;
  pCVar4 = &local_160;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_00592830(&local_160,&local_40);
  pCVar3 = &local_40;
  pCVar4 = &pSVar2->initial_carry_transform;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
  }
  if (blend_time <= 0.0) {
    pSVar2->blend_factor = 1.0;
    pSVar2->blend_speed = 0.0;
  }
  else {
    pSVar2->blend_factor = 0.0;
    pSVar2->blend_speed = 1.0 / blend_time;
  }
  if (carry_offset == (CMatrix3x4f *)0x0) {
    pSVar2->has_carry_offset = 0;
    return;
  }
  pSVar2->has_carry_offset = 1;
  pCVar3 = &pSVar2->carry_offset;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = carry_offset->m[0].w;
    carry_offset = (CMatrix3x4f *)((int)carry_offset + ((uint)bVar5 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return;
}
