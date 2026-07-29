// Name: core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
// Address: 00429220
// Address Range: [[00429220, 0042948a]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(CCharacter *this_ptr,float delta_time)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  int unaff_EBP;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  byte bVar8;
  CMatrix3x4f *in_stack_fffffd80;
  CMatrix3x4f CStack_274;
  uint auStack_244 [12];
  uint auStack_214 [12];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  uint auStack_154 [12];
  uint auStack_124 [12];
  uint auStack_f4 [12];
  CMatrix3x4f CStack_c4;
  uint auStack_94 [12];
  uint auStack_64 [12];
  CVector3f CStack_34;
  CVector3f local_28;
  CVector3f *local_1c;
  CVector3f *local_18;
  int iStack_14;
  
  bVar8 = 0;
  local_28.x = (float)&(this_ptr->base).orient;
  local_28.y = (float)&(this_ptr->base).location;
  local_18 = (CVector3f *)0x0;
  local_28.z = (float)(this_ptr->model).bone_transform.bone_world_matrices;
  pCVar4 = (CVector3f *)this_ptr->carry_hands;
  do {
    if ((CDemonActor *)pCVar4->z != (CDemonActor *)0x0) {
      local_1c = pCVar4;
      (*(((this_ptr->base).vtable._uc)->_uc).getCarryObjToBodyXForm)
                (this_ptr,(int)local_18,in_stack_fffffd80);
      puVar5 = auStack_1b4;
      puVar7 = auStack_214;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      if (pCVar4[5].y < 1.0) {
        fVar1 = pCVar4[5].x * delta_time + pCVar4[5].y;
        pCVar4[5].y = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_0055bd00((int)pCVar4->x * 0x30 + iStack_14);
          puVar5 = auStack_244;
          puVar7 = auStack_64;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_214,auStack_64);
          puVar5 = auStack_1e4;
          puVar7 = auStack_94;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_0055cc30(pCVar4 + 1,auStack_94,pCVar4[5].y);
          puVar5 = auStack_154;
          puVar7 = auStack_184;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                    (auStack_184,(int)pCVar4->x * 0x30 + iStack_14);
          puVar5 = auStack_124;
          puVar7 = auStack_214;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
          }
        }
        else {
          pCVar4[5].y = 1.0;
        }
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                (&CStack_c4,local_18,local_1c);
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_214,&CStack_c4);
      puVar5 = auStack_f4;
      pCVar6 = &CStack_274;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pCVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar8 * -2 + 1) * 4);
      }
      pCVar2 = core_xform_cpp_getTranslation_FUN_0055bc00(&CStack_274,&local_28);
      iVar3 = *(int *)(unaff_EBP + 8);
      *(float *)(iVar3 + 0x20) = pCVar2->x;
      *(float *)(iVar3 + 0x24) = pCVar2->y;
      *(float *)(iVar3 + 0x28) = pCVar2->z;
      in_stack_fffffd80 = (CMatrix3x4f *)0x429389;
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&CStack_274,&CStack_34);
      iVar3 = *(int *)(unaff_EBP + 8);
      if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
        ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
        *(float *)(iVar3 + 0x34) = pCVar2->y;
        *(float *)(iVar3 + 0x38) = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
                (*(CDemonActor **)(unaff_EBP + 8));
    }
    local_18 = (CVector3f *)((int)&local_18->x + 1);
    pCVar4 = (CVector3f *)&pCVar4[5].z;
  } while ((int)local_18 < 2);
  return;
}
