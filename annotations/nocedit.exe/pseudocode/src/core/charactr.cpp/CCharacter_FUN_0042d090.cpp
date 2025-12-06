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
  CVector3f *unaff_ESI;
  uint *puVar5;
  CVector3f *unaff_EDI;
  uint *puVar6;
  byte bVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CMatrix3x4f *in_stack_fffffd8c;
  CMatrix3x4f *in_stack_fffffd90;
  CMatrix3x4f *in_stack_fffffd98;
  CMatrix3x4f *in_stack_fffffda0;
  CMatrix3x4f *input_matrix;
  uint auStack_240 [11];
  uint uStack_214;
  byte auStack_210 [52];
  uint auStack_1dc [10];
  uint auStack_1b4 [14];
  uint uStack_17c;
  CMatrix3x4f CStack_178;
  uint auStack_148 [13];
  uint auStack_114 [14];
  uint auStack_dc [10];
  byte auStack_b4 [36];
  uint uStack_90;
  byte auStack_8c [100];
  COrientation *local_28;
  CLocation *local_24;
  CMatrix3x4f *local_20;
  SCarryHand *local_1c;
  float local_18;
  float fStack_14;
  
  bVar7 = 0;
  local_28 = &(this_ptr->base_actor).orient;
  local_24 = &(this_ptr->base_actor).location;
  local_18 = 0.0;
  local_20 = (this_ptr->model).bone_transform.bone_world_matrices;
  pSVar4 = this_ptr->carry_hands;
  do {
    if (pSVar4->carry_actor != (CDemonActor *)0x0) {
      local_1c = pSVar4;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      puVar5 = auStack_1b4;
      puVar6 = &uStack_214;
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
                    ((CMatrix3x4f *)(*(int *)pSVar4->field0_0x0 * 0x30 + (int)fStack_14),
                     in_stack_fffffd8c);
          puVar5 = auStack_240;
          puVar6 = (uint *)(auStack_8c + 0x28);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)auStack_210,(CMatrix3x4f *)(auStack_8c + 0x2c),in_stack_fffffd90
                    );
          puVar5 = auStack_1dc;
          puVar6 = &uStack_90;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar4->field2_0xc,(CMatrix3x4f *)auStack_8c,
                     *(float *)(pSVar4->field2_0xc + 0x34));
          puVar5 = auStack_148;
          puVar6 = &uStack_17c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_178,(CMatrix3x4f *)(unaff_ESI + *(int *)pSVar4->field0_0x0 * 4),
                     in_stack_fffffd98);
          puVar5 = auStack_114;
          puVar6 = (uint *)(auStack_210 + 8);
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
      in_stack_fffffd90 = (CMatrix3x4f *)auStack_b4;
      in_stack_fffffd8c = (CMatrix3x4f *)0x42d186;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (in_stack_fffffd90,unaff_ESI,unaff_EDI);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_210 + 0x10),(CMatrix3x4f *)(auStack_b4 + 4),
                 in_stack_fffffda0);
      input_matrix = (CMatrix3x4f *)&stack0xfffffff0;
      puVar5 = auStack_dc;
      puVar6 = (uint *)&stack0xfffffda0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      in_stack_fffffd98 = (CMatrix3x4f *)0x42d1c9;
      core_xform_cpp_getTranslation_FUN_005f6110((CVector3f *)&stack0xfffffda4,input_matrix);
      in_stack_fffffda0 = (CMatrix3x4f *)&stack0xfffffda8;
      iVar3 = *(int *)(in_stack_0000000c + 8);
      *(uint *)(iVar3 + 0x20) = *extraout_EAX;
      *(uint *)(iVar3 + 0x24) = extraout_EAX[1];
      *(uint *)(iVar3 + 0x28) = extraout_EAX[2];
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&stack0xfffffda8,(CMatrix3x3f *)&local_18);
      iVar3 = *(int *)(in_stack_00000010 + 8);
      if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
        ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
        *(float *)(iVar3 + 0x34) = pCVar2->y;
        *(float *)(iVar3 + 0x38) = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (*(CDemonActor **)(in_stack_00000010 + 8));
    }
    local_18 = (float)((int)local_18 + 1);
    pSVar4 = pSVar4 + 1;
  } while ((int)local_18 < 2);
  return;
}
