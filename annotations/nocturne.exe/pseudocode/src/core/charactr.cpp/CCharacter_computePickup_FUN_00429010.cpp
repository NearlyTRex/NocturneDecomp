// Name: core_charactr.cpp_CCharacter_computePickup_FUN_00429010
// Address: 00429010
// Address Range: [[00429010, 0042916b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00429010(CCharacter *this_ptr,int hand_index,float blend_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00429010(CCharacter *this_ptr,int hand_index,float blend_time)

{
  int iVar1;
  SCarryHand *pSVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float local_160 [12];
  uint local_130 [12];
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  uint local_a0 [12];
  uint local_70 [12];
  uint local_40 [12];
  
  bVar7 = 0;
  pSVar2 = this_ptr->carry_hands + hand_index;
  if (pSVar2->bone_index < 0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\charactr.cpp";
    g_INT_01cc4804 = 0xc14;
    core_main_c_FUN_004c8440("CCharacter::computePickup - invalid bone!");
  }
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (&local_100,&(pSVar2->carry_actor->location).position,&(pSVar2->carry_actor->orient).vec
            );
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_d0,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_d0,&local_100);
  puVar3 = local_130;
  puVar5 = local_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            ((this_ptr->model).bone_transform.bone_world_matrices + pSVar2->bone_index,local_a0);
  puVar3 = local_40;
  puVar5 = local_70;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_0055bd00(local_70);
  pfVar4 = local_160;
  pCVar6 = &pSVar2->initial_carry_transform;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + (uint)bVar7 * -8 + 4);
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
