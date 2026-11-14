// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10
// Address: 00431d10
// Address Range: [[00431d10, 00431fff]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00431d10(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00431d10(CCharacter *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  SCarryHand *pSVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  CMatrix3x4f *pCVar7;
  uint *puVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  float afStackY_1034 [9];
  CMatrix3x4f *apCStackY_1010 [848];
  CMatrix3x4f *in_stack_fffffd38;
  CMatrix3x4f CStack_2bc;
  float afStack_28c [12];
  CMatrix3x4f CStack_25c;
  CMatrix3x4f CStack_22c;
  CMatrix3x4f CStack_1fc;
  float afStack_1cc [12];
  float afStack_19c [12];
  uint auStack_16c [9];
  CMatrix3x4f local_148;
  uint local_118 [3];
  CMatrix3x4f CStack_10c;
  CMatrix3x4f CStack_dc;
  CMatrix3x4f CStack_ac;
  float afStack_7c [12];
  float local_4c;
  float local_48 [2];
  CLocation *local_40;
  CLocation *pCStack_3c;
  float afStack_38 [4];
  CLocation *local_28;
  UOrientationVector *local_24;
  CMatrix3x4f *local_20;
  int local_1c;
  SCarryHand *local_18;
  int iStack_14;
  
  bVar10 = 0;
  local_24 = &(this_ptr->base).orient;
  local_28 = &(this_ptr->base).location;
  local_20 = (this_ptr->model).bone_transform.bone_model_matrices;
  local_18 = this_ptr->carry_hands;
  local_1c = 0;
  do {
    pSVar3 = local_18;
    if (local_18->carry_actor != (CDemonActor *)0x0) {
      if (local_18->has_carry_offset == 0) {
        (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                  (this_ptr,local_1c,in_stack_fffffd38);
        puVar5 = auStack_16c;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                  (&local_18->carry_offset,local_20 + local_18->bone_index,
                   (CMatrix3x4f *)(auStack_16c + 9));
        puVar5 = auStack_16c + 9;
      }
      puVar8 = local_118;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      if (pSVar3->blend_factor < 1.0) {
        fVar2 = pSVar3->blend_speed * delta_time + pSVar3->blend_factor;
        pSVar3->blend_factor = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_00584560(pSVar3->bone_index * 0x30 + iStack_14);
          pfVar6 = afStack_1cc;
          pCVar7 = &CStack_25c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar7->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_10c,&CStack_25c,&CStack_2bc);
          pCVar7 = &CStack_2bc;
          pfVar6 = afStack_28c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar6 = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005854a0
                    (&pSVar3->initial_carry_transform,afStack_28c,pSVar3->blend_factor);
          pfVar6 = afStack_7c;
          pCVar7 = &CStack_22c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar7->m[0].w = *pfVar6;
            pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
                    (&CStack_22c,(CMatrix3x4f *)(pSVar3->bone_index * 0x30 + iStack_14),&CStack_1fc)
          ;
          pCVar7 = &CStack_1fc;
          pCVar9 = &CStack_10c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar9->m[0].w = pCVar7->m[0].w;
            pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
            pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
          }
        }
        else {
          pSVar3->blend_factor = 1.0;
        }
      }
      core_xform_cpp_FUN_00583940(&CStack_dc,local_1c,local_18);
      in_stack_fffffd38 = (CMatrix3x4f *)0x431e45;
      core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_10c,&CStack_dc,&CStack_ac);
      pCVar7 = &CStack_ac;
      pfVar6 = afStack_19c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = pCVar7->m[0].w;
        pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
        pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
      }
      core_xform_cpp_FUN_00584450(afStack_19c);
      local_4c = afStack_38[1];
      local_48[(uint)bVar10 * -2] = afStack_38[(uint)bVar10 * -2 + 2];
      local_48[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_38[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
      pCVar1 = pSVar3->carry_actor;
      (pCVar1->location).position.x = local_4c;
      (pCVar1->location).position.y = local_48[0];
      (pCVar1->location).position.z = local_48[1];
      core_xform_cpp_matrixToEulerAngles_FUN_00583b10(afStack_19c);
      local_40 = local_28;
      (&pCStack_3c)[(uint)bVar10 * -2] = (CLocation *)(&local_24)[(uint)bVar10 * -2];
      afStack_38[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
           (float)(&local_20)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
      pCVar1 = pSVar3->carry_actor;
      if (&pCVar1->orient != (UOrientationVector *)&local_40) {
        (pCVar1->orient).vec.x = (float)local_40;
        (pCVar1->orient).vec.y = (float)pCStack_3c;
        (pCVar1->orient).vec.z = afStack_38[0];
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(pSVar3->carry_actor);
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  } while (local_1c < 2);
  return;
}
