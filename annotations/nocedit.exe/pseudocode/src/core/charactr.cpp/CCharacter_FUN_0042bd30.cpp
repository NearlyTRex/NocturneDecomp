// Name: core_charactr.cpp_CCharacter_FUN_0042bd30
// Address: 0042bd30
// Address Range: [[0042bd30, 0042bf26]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042bd30(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bd30(CCharacter *this_ptr)

{
  char *pcVar1;
  SFire *pSVar2;
  int iVar3;
  CCharacter *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x3f *pCVar6;
  byte bVar7;
  CBodyPart *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CMatrix3x3f local_9c;
  uint local_70;
  CMatrix3x4f local_6c;
  float local_3c;
  float local_38;
  uint local_34;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x4f *local_18;
  int local_14;
  
  bVar7 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_0000000c] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
              (&this_ptr->model,in_stack_00000008,in_stack_0000000c);
    local_14 = 0;
    if (0 < this_ptr->field60_0x2df4) {
      local_18 = (this_ptr->model).bone_transform.bone_world_matrices;
      pcVar1 = this_ptr->field61_0x2df8;
      do {
        if (in_stack_0000000c == *(int *)pcVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)(pcVar1 + 8),local_18 + *(int *)(pcVar1 + 4),&local_6c);
          pCVar5 = &local_6c;
          pCVar6 = &local_9c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar6->m[0].x = pCVar5->m[0].w;
            pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
            pCVar6 = (CMatrix3x3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_9c,&local_24);
          local_3c = local_9c.m[1].x;
          local_38 = local_9c.m[2].y;
          local_34 = local_70;
          core_bodypart_cpp_CBodyPart_FUN_0041add0(in_stack_00000008);
        }
        pcVar1 = pcVar1 + 0x38;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->field60_0x2df4);
    }
    iVar3 = 0;
    if (0 < this_ptr->fire_count) {
      pSVar2 = this_ptr->field65_0x2f1c;
      do {
        if ((in_stack_0000000c == *(int *)pSVar2->unk) && (-1 < *(int *)(pSVar2->unk + 4))) {
          core_xform_cpp_transformVector3x4_FUN_005f4dc0
                    (&local_30,(CVector3f *)(pSVar2->unk + 8),
                     (this_ptr->model).bone_transform.bone_world_matrices +
                     *(int *)(pSVar2->unk + 4));
          core_bodypart_cpp_CBodyPart_FUN_0041ae50(in_stack_00000008);
        }
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar3 < this_ptr->fire_count);
    }
    iVar3 = 0;
    pCVar4 = this_ptr;
    do {
      if (in_stack_0000000c == pCVar4->carry_hands[0].secondary_bone_index) {
        (*(((this_ptr->base).vtable._uc)->_uc).cfunc21)();
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[0].z;
    } while (iVar3 < 2);
    in_stack_00000008->render_in_background = in_stack_00000010;
    return;
  }
  return;
}
