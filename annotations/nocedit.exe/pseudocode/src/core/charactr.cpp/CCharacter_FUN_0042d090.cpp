// Name: core_charactr.cpp_CCharacter_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

{
  float fVar1;
  uint *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  SCarryHand *pSVar4;
  BADSPACEBASE *in_ESP;
  CVector3f *unaff_EBP;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float in_stack_00000008;
  SCarryHand *pSStack0000000c;
  int in_stack_00000010;
  CMatrix3x4f *in_stack_fffffd84;
  CMatrix3x4f *in_stack_fffffd88;
  CMatrix3x4f *in_stack_fffffd90;
  CMatrix3x4f *in_stack_fffffd98;
  CMatrix3x4f *input_matrix;
  uint auStack_248 [12];
  byte auStack_218 [44];
  uint auStack_1ec [2];
  uint auStack_1e4 [22];
  uint auStack_18c [2];
  uint uStack_184;
  CMatrix3x4f CStack_180;
  uint auStack_150 [13];
  uint auStack_11c [14];
  uint auStack_e4 [10];
  byte auStack_bc [36];
  uint uStack_98;
  byte auStack_94 [108];
  COrientation *local_28;
  CLocation *local_24;
  CMatrix3x4f *local_20;
  float local_1c;
  float local_18;
  CVector3f *pCStack_14;
  
  bVar7 = 0;
  local_28 = &(this_ptr->base_actor).orient;
  local_24 = &(this_ptr->base_actor).location;
  local_18 = 0.0;
  local_20 = (this_ptr->model).bone_transform.bone_world_matrices;
  pSVar4 = this_ptr->carry_hands;
  do {
    if (pSVar4->carry_actor != (CDemonActor *)0x0) {
      pSStack0000000c = pSVar4;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      puVar5 = auStack_18c;
      puVar6 = auStack_1ec;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (*(float *)(pSVar4->field2_0xc + 0x34) < 1.0) {
        fVar1 = *(float *)(pSVar4->field2_0xc + 0x30) * in_stack_00000008 +
                *(float *)(pSVar4->field2_0xc + 0x34);
        *(float *)(pSVar4->field2_0xc + 0x34) = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)(*(int *)pSVar4->field0_0x0 * 0x30 + (int)local_1c),
                     in_stack_fffffd84);
          puVar5 = auStack_248;
          puVar6 = (uint *)(auStack_94 + 0x28);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)auStack_218,(CMatrix3x4f *)(auStack_94 + 0x2c),in_stack_fffffd88
                    );
          puVar5 = auStack_1e4;
          puVar6 = &uStack_98;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar4->field2_0xc,(CMatrix3x4f *)auStack_94,
                     *(float *)(pSVar4->field2_0xc + 0x34));
          puVar5 = auStack_150;
          puVar6 = &uStack_184;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_180,(CMatrix3x4f *)(unaff_EBP + *(int *)pSVar4->field0_0x0 * 4),
                     in_stack_fffffd90);
          puVar5 = auStack_11c;
          puVar6 = (uint *)(auStack_218 + 8);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
        }
        else {
          pSVar4->field2_0xc[0x34] = '\0';
          pSVar4->field2_0xc[0x35] = '\0';
          pSVar4->field2_0xc[0x36] = -0x80;
          pSVar4->field2_0xc[0x37] = '?';
        }
      }
      in_stack_fffffd88 = (CMatrix3x4f *)auStack_bc;
      in_stack_fffffd84 = (CMatrix3x4f *)0x42d186;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (in_stack_fffffd88,unaff_EBP,pCStack_14);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_218 + 0x10),(CMatrix3x4f *)(auStack_bc + 4),
                 in_stack_fffffd98);
      input_matrix = (CMatrix3x4f *)&local_18;
      puVar5 = auStack_e4;
      puVar6 = (uint *)&stack0xfffffd98;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      in_stack_fffffd90 = (CMatrix3x4f *)0x42d1c9;
      core_xform_cpp_getTranslation_FUN_005f6110((CVector3f *)&stack0xfffffd9c,input_matrix);
      in_stack_fffffd98 = (CMatrix3x4f *)&stack0xfffffda0;
      iVar3 = *(int *)((this_ptr->base_actor).actor_name + 8);
      *(uint *)(iVar3 + 0x20) = *extraout_EAX;
      *(uint *)(iVar3 + 0x24) = extraout_EAX[1];
      *(uint *)(iVar3 + 0x28) = extraout_EAX[2];
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&stack0xfffffda0,(CMatrix3x3f *)&local_20);
      iVar3 = *(int *)((int)in_stack_00000008 + 8);
      if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
        ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
        *(float *)(iVar3 + 0x34) = pCVar2->y;
        *(float *)(iVar3 + 0x38) = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (*(CDemonActor **)((int)in_stack_00000008 + 8));
    }
    in_stack_00000010 = in_stack_00000010 + 1;
    pSVar4 = pSVar4 + 1;
  } while (in_stack_00000010 < 2);
  return;
}
