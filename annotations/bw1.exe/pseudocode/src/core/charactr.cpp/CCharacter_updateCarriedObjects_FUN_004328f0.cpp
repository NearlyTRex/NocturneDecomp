// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0
// Address: 004328f0
// Address Range: [[004328f0, 00432bdf]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
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
  CMatrix3x4f CStack_dc;
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
  CVector3f *local_1c;
  CVector3f *local_18;
  int iStack_14;
  
  bVar7 = 0;
  local_24 = &(this_ptr->base).orient;
  local_28 = &(this_ptr->base).location;
  local_20 = (this_ptr->model).bone_transform.bone_model_matrices;
  local_18 = (CVector3f *)this_ptr->carry_hands;
  local_1c = (CVector3f *)0x0;
  do {
    pCVar3 = local_18;
    if ((CDemonActor *)local_18->z != (CDemonActor *)0x0) {
      if (local_18[5].z == 0.0) {
        (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                  (this_ptr,(int)local_1c,in_stack_fffffd38);
        puVar5 = auStack_16c;
      }
      else {
        core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_18 + 6,local_20 + (int)local_18->x);
        puVar5 = local_148;
      }
      puVar6 = local_118;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (pCVar3[5].y < 1.0) {
        fVar2 = pCVar3[5].x * delta_time + pCVar3[5].y;
        pCVar3[5].y = fVar2;
        if (fVar2 <= 1.0) {
          core_xform_cpp_inverse_FUN_005b6380((int)pCVar3->x * 0x30 + iStack_14);
          puVar5 = auStack_1cc;
          puVar6 = auStack_25c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_10c,auStack_25c);
          puVar5 = (uint *)&stack0xfffffd44;
          puVar6 = auStack_28c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005b72c0(pCVar3 + 1,auStack_28c,pCVar3[5].y);
          puVar5 = auStack_7c;
          puVar6 = auStack_22c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                    (auStack_22c,(int)pCVar3->x * 0x30 + iStack_14);
          puVar5 = auStack_1fc;
          puVar6 = auStack_10c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
        }
        else {
          pCVar3[5].y = 1.0;
        }
      }
      core_xform_cpp_FUN_005b5760(&CStack_dc,local_1c,local_18);
      in_stack_fffffd38 = (CMatrix3x4f *)0x432a25;
      core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(auStack_10c,&CStack_dc);
      puVar5 = auStack_ac;
      puVar6 = auStack_19c;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_xform_cpp_FUN_005b6270(auStack_19c);
      local_4c = afStack_38[1];
      local_48[(uint)bVar7 * -2] = afStack_38[(uint)bVar7 * -2 + 2];
      local_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
           afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 3];
      pCVar1 = (CDemonActor *)pCVar3->z;
      (pCVar1->location).position.x = local_4c;
      (pCVar1->location).position.y = local_48[0];
      (pCVar1->location).position.z = local_48[1];
      core_xform_cpp_matrixToEulerAngles_FUN_005b5930(auStack_19c);
      local_40 = local_28;
      (&pCStack_3c)[(uint)bVar7 * -2] = (CLocation *)(&local_24)[(uint)bVar7 * -2];
      afStack_38[(uint)bVar7 * -2 + (uint)bVar7 * -2] =
           (float)(&local_20)[(uint)bVar7 * -2 + (uint)bVar7 * -2];
      pCVar1 = (CDemonActor *)pCVar3->z;
      if (&pCVar1->orient != (UOrientationVector *)&local_40) {
        (pCVar1->orient).vec.x = (float)local_40;
        (pCVar1->orient).vec.y = (float)pCStack_3c;
        (pCVar1->orient).vec.z = afStack_38[0];
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)pCVar3->z);
    }
    local_1c = (CVector3f *)((int)&local_1c->x + 1);
    local_18 = local_18 + 10;
  } while ((int)local_1c < 2);
  return;
}
