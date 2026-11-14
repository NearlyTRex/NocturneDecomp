// Name: core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0
// Address: 00428bd0
// Address Range: [[00428bd0, 00428d52]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter *this_ptr,int param_2,float param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter *this_ptr,int param_2,float param_3,int *param_4)

{
  int iVar1;
  SCarryHand *pSVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float local_160 [12];
  CMatrix3x4f local_130;
  CMatrix3x4f local_100;
  CMatrix3x4f local_d0;
  CMatrix3x4f local_a0;
  CMatrix3x4f local_70;
  float local_40 [12];
  
  bVar6 = 0;
  pSVar2 = this_ptr->carry_hands + param_2;
  if (pSVar2->bone_index < 0) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0xe32;
    core_main_c_FUN_004e4500("CCharacter::computePickup - invalid hand!  Character is %s, hand is %d",this_ptr,param_2);
  }
  core_xform_cpp_FUN_00591ad0
            (&local_d0,&(pSVar2->carry_actor->location).position,&(pSVar2->carry_actor->orient).vec)
  ;
  core_xform_cpp_FUN_00591c10(&local_a0,&(this_ptr->base).location,&(this_ptr->base).orient);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&local_a0,&local_d0,&local_100);
  pCVar3 = &local_100;
  pCVar5 = &local_130;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            ((this_ptr->model).bone_transform.bone_model_matrices + pSVar2->bone_index,&local_130,
             &local_70);
  pCVar3 = &local_70;
  pfVar4 = local_160;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  core_xform_cpp_inverse_FUN_00592830(local_160);
  pfVar4 = local_40;
  pCVar3 = &pSVar2->initial_carry_transform;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
  }
  if (param_3 <= 0.0) {
    pSVar2->blend_factor = 1.0;
    pSVar2->blend_speed = 0.0;
  }
  else {
    pSVar2->blend_factor = 0.0;
    pSVar2->blend_speed = 1.0 / param_3;
  }
  if (param_4 == (int *)0x0) {
    pSVar2->has_carry_offset = 0;
    return;
  }
  pSVar2->has_carry_offset = 1;
  pCVar3 = &pSVar2->carry_offset;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = (float)*param_4;
    param_4 = param_4 + (uint)bVar6 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + (uint)bVar6 * -8 + 4);
  }
  return;
}
