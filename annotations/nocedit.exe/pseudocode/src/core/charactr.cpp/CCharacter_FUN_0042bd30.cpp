// Name: core_charactr.cpp_CCharacter_FUN_0042bd30
// Address: 0042bd30
// Address Range: [[0042bd30, 0042bf26]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bd30(CCharacter *this_ptr)

{
  char *pcVar1;
  int iVar2;
  CCharacter *pCVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  byte bVar6;
  CBodyPart *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  CMatrix3x4f *in_stack_fffffef2;
  CVector3f local_9c;
  uint local_90;
  uint local_80;
  uint local_70;
  float local_6c [12];
  uint local_3c;
  uint local_38;
  uint local_34;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x4f *local_18;
  int local_14;
  
  bVar6 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_0000000c] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
              (&this_ptr->model,in_stack_00000008,in_stack_0000000c);
    local_14 = 0;
    if (0 < *(int *)(this_ptr->cloth_data + 0x35c)) {
      local_18 = (this_ptr->model).bone_transform.bone_world_matrices;
      pcVar1 = this_ptr->cloth_data + 0x360;
      do {
        if (in_stack_0000000c == *(int *)pcVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)(pcVar1 + 8),local_18 + *(int *)(pcVar1 + 4),in_stack_fffffef2);
          pfVar4 = local_6c;
          pCVar5 = &local_9c;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            pCVar5->x = *pfVar4;
            pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
            pCVar5 = (CVector3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
          }
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_9c,(CMatrix3x3f *)&local_24);
          local_3c = local_90;
          local_38 = local_80;
          local_34 = local_70;
          core_bodypart_cpp_FUN_0041add0();
        }
        pcVar1 = pcVar1 + 0x38;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->cloth_data + 0x35c));
    }
    iVar2 = 0;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      pcVar1 = this_ptr->cloth_data + 0x484;
      do {
        if ((in_stack_0000000c == *(int *)pcVar1) && (-1 < *(int *)(pcVar1 + 4))) {
          core_xform_cpp_transformVector3x4_FUN_005f4dc0
                    (&local_30,(CVector3f *)(pcVar1 + 8),
                     (this_ptr->model).bone_transform.bone_world_matrices + *(int *)(pcVar1 + 4));
          core_bodypart_cpp_FUN_0041ae50();
        }
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 0x18;
      } while (iVar2 < *(int *)(this_ptr->cloth_data + 0x478));
    }
    iVar2 = 0;
    pCVar3 = this_ptr;
    do {
      if (in_stack_0000000c == *(int *)(pCVar3->carry_hands[0].field0_0x0 + 4)) {
        (*(this_ptr->base_actor).vtable[1].renderTargetPoints)(&this_ptr->base_actor);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].z;
    } while (iVar2 < 2);
    *(uint *)in_stack_00000008->field1_0x158 = in_stack_00000010;
    return;
  }
  return;
}
