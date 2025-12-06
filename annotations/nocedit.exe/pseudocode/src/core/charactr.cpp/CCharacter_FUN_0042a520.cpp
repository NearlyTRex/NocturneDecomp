// Name: core_charactr.cpp_CCharacter_FUN_0042a520
// Address: 0042a520
// Address Range: [[0042a520, 0042a827]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a520(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a520(CCharacter *this_ptr)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  CVector3f *pCVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_68;
  float fStack_64;
  float fStack_60;
  CVector3f local_5c;
  CVector3f local_4c;
  float local_40;
  CMatrix3x4f *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  if (-1 < in_stack_0000000c) {
    iVar5 = -1;
    local_4c.z = (float)(this_ptr->model).transformed_vertices;
    iVar9 = 0;
    local_24 = 0.0;
    iVar6 = in_stack_00000008;
    pCVar4 = (CVector3f *)local_4c.z;
    if (0 < *(int *)(in_stack_00000008 + 0x28558)) {
      do {
        if ((in_stack_0000000c == *(int *)(iVar6 + 0x2857c)) &&
           (local_20 = SQRT(pCVar4->z * pCVar4->z + pCVar4->x * pCVar4->x + pCVar4->y * pCVar4->y),
           local_24 < local_20)) {
          iVar5 = iVar9;
          local_24 = local_20;
        }
        iVar6 = iVar6 + 0x24;
        iVar9 = iVar9 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar9 < *(int *)(in_stack_00000008 + 0x28558));
    }
    if (iVar5 != -1) {
      pCVar7 = (CVector3f *)((int)local_4c.z + in_stack_0000000c * 0xc);
      pCVar4 = (CVector3f *)((int)local_4c.z + iVar5 * 0xc);
      fVar10 = (float10)pCVar4->y - (float10)pCVar7->y;
      fVar11 = (float10)(pCVar4->x - pCVar7->x);
      fVar12 = (float10)pCVar4->z - (float10)pCVar7->z;
      fVar10 = SQRT(fVar12 * (float10)(float)fVar12 +
                    fVar11 * fVar11 + fVar10 * (float10)(float)fVar10) * (float10)0.5;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar7,pCVar4));
      local_14 = (int)ROUND(fVar10);
      local_28 = local_14 + 1;
      iVar5 = 0;
      if (0 < local_28) {
        local_3c = (this_ptr->model).bone_transform.bone_world_matrices;
        local_38 = this_ptr->cloth_data + 0x934;
        local_34 = this_ptr->cloth_data + 0x484;
        local_2c = &this_ptr->model;
        local_30 = local_14 + 2;
        while (*(int *)(this_ptr->cloth_data + 0x478) < 0x32) {
          iVar6 = *(int *)(this_ptr->cloth_data + 0x478);
          (this_ptr->base_actor).is_transparent = 1;
          pcVar8 = local_34 + iVar6 * 0x18;
          *(int *)(this_ptr->cloth_data + 0x478) = iVar6 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                                  (local_2c);
          iVar6 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0
                            (this_ptr_00,in_stack_0000000c);
          *(int *)pcVar8 = iVar6;
          *(int *)(pcVar8 + 4) = in_stack_0000000c;
          fVar3 = (float)(iVar5 + 1);
          local_1c = (float)local_28;
          fVar2 = 1.0 / local_1c;
          local_4c.z = local_68 * fVar3 * fVar2;
          local_40 = fStack_64 * fVar3 * fVar2;
          local_3c = (CMatrix3x4f *)(fStack_60 * fVar3 * fVar2);
          if ((float *)(pcVar8 + 8) != &local_4c.z) {
            *(float *)(pcVar8 + 8) = local_4c.z;
            *(float *)(pcVar8 + 0xc) = local_40;
            *(CMatrix3x4f **)(pcVar8 + 0x10) = local_3c;
          }
          pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_5c,(CVector3f *)(pcVar8 + 8),
                              (CMatrix3x4f *)(local_34 + *(int *)(pcVar8 + 4) * 0x30));
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base_actor,&local_4c,pCVar4);
          iVar6 = (*(int *)(this_ptr->cloth_data + 0x478) + -1) * 0x2a4 + local_28;
          *(float *)(iVar6 + 0x20) = pCVar4->x;
          *(float *)(iVar6 + 0x24) = pCVar4->y;
          *(float *)(iVar6 + 0x28) = pCVar4->z;
          pcVar1 = this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x83c;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar8[0x14] = '\0';
          pcVar8[0x15] = '\0';
          pcVar8[0x16] = '\0';
          pcVar8[0x17] = '?';
          fVar2 = (float)0.5;
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7e8)
               = *(float *)(pcVar8 + 0x14) * fVar2;
          *(int *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7ec) =
               *(int *)(pcVar8 + 0x14);
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7f0)
               = fVar2 * *(float *)(pcVar8 + 0x14);
          iVar5 = iVar5 + 1;
          *(uint *)
           (this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x838) =
               *(uint *)(this_ptr->cloth_data + 0x47c);
          if (local_18 <= iVar5) {
            return;
          }
        }
      }
    }
  }
  return;
}
