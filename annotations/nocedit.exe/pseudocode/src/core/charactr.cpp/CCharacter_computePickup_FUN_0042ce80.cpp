// Name: core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
// Address: 0042ce80
// Address Range: [[0042ce80, 0042cfdb]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80 (CCharacter *this_ptr,int hand_index,float blend_time)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80
          (CCharacter *this_ptr,int hand_index,float blend_time)

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
    g_CurrentLineNumber = 0xc00;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
            (&local_100,&(pSVar2->carry_actor->location).position,&(pSVar2->carry_actor->orient).vec
            );
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_d0,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_d0,&local_100,&local_130);
  pCVar3 = &local_130;
  pCVar4 = &local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((this_ptr->model).bone_transform.bone_world_matrices + pSVar2->bone_index,&local_a0,
             &local_40);
  pCVar3 = &local_40;
  pCVar4 = &local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  core_xform_cpp_inverse_FUN_005f6210(&local_70,&local_160);
  pCVar3 = &local_160;
  pCVar4 = &pSVar2->initial_carry_transform;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
  }
  if (0.0 < blend_time) {
    pSVar2->blend_factor = 0.0;
    pSVar2->blend_speed = 1.0 / blend_time;
    return;
  }
  pSVar2->blend_factor = 1.0;
  pSVar2->blend_speed = 0.0;
  return;
}
