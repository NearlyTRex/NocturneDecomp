// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30
// Address: 00428e30
// Address Range: [[00428e30, 0042911f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00428e30(CCharacter *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  SCarryHand *pSVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1034 [9];
  CMatrix3x4f *apCStackY_1010 [848];
  CMatrix3x4f *in_stack_fffffd38;
  uint auStack_28c [12];
  uint auStack_25c [12];
  uint auStack_22c [12];
  uint auStack_1fc [12];
  uint auStack_1cc [12];
  uint auStack_19c [12];
  uint auStack_16c [9];
  uint local_148 [12];
  uint local_118 [3];
  uint auStack_10c [12];
  byte auStack_dc [48];
  uint auStack_ac [12];
  uint auStack_7c [12];
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
  
  bVar7 = 0;
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
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                  (&local_18->carry_offset,local_20 + local_18->bone_index);
        puVar5 = local_148;
      }
      puVar6 = local_118;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (pSVar3->blend_factor < 1.0) {
        fVar2 = pSVar3->blend_speed * delta_time + pSVar3->blend_factor;
        pSVar3->blend_factor = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_00592830(pSVar3->bone_index * 0x30 + iStack_14);
          puVar5 = auStack_1cc;
          puVar6 = auStack_25c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_10c,auStack_25c);
          puVar5 = (uint *)&stack0xfffffd44;
          puVar6 = auStack_28c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_00593770
                    (&pSVar3->initial_carry_transform,auStack_28c,pSVar3->blend_factor);
          puVar5 = auStack_7c;
          puVar6 = auStack_22c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                    (auStack_22c,pSVar3->bone_index * 0x30 + iStack_14);
          puVar5 = auStack_1fc;
          puVar6 = auStack_10c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
        }
        else {
          pSVar3->blend_factor = 1.0;
        }
      }
      core_xform_cpp_FUN_00591c10(auStack_dc,local_1c,local_18);
      in_stack_fffffd38 = (CMatrix3x4f *)0x428f65;
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_10c,auStack_dc);
      puVar5 = auStack_ac;
      puVar6 = auStack_19c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_FUN_00592720(auStack_19c);
      local_4c = afStack_38[1];
      local_48[(uint)bVar7 * -2] = afStack_38[(uint)bVar7 * -2 + 2];
      local_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
      pCVar1 = pSVar3->carry_actor;
      (pCVar1->location).position.x = local_4c;
      (pCVar1->location).position.y = local_48[0];
      (pCVar1->location).position.z = local_48[1];
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0(auStack_19c);
      local_40 = local_28;
      (&pCStack_3c)[(uint)bVar7 * -2] = (CLocation *)(&local_24)[(uint)bVar7 * -2];
      afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
           (float)(&local_20)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
      pCVar1 = pSVar3->carry_actor;
      if (&pCVar1->orient != (UOrientationVector *)&local_40) {
        (pCVar1->orient).vec.x = (float)local_40;
        (pCVar1->orient).vec.y = (float)pCStack_3c;
        (pCVar1->orient).vec.z = afStack_38[0];
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(pSVar3->carry_actor);
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  } while (local_1c < 2);
  return;
}
