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
  float fVar4;
  CDeformableModel *this_ptr_00;
  CVector3f *pCVar5;
  int iVar6;
  int iVar7;
  CVector3f *pCVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  int iVar10;
  double dVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  float local_68;
  CVector3f CStack_64;
  CVector3f CStack_54;
  float local_48;
  CMatrix3x4f *local_44;
  char *local_40;
  char *local_3c;
  int local_38;
  CDeformableModelInstance *local_34;
  int local_30;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  int local_14;
  
  if (-1 < in_stack_0000000c) {
    iVar6 = -1;
    local_44 = (CMatrix3x4f *)(this_ptr->model).transformed_vertices;
    iVar10 = 0;
    local_24 = 0.0;
    iVar7 = in_stack_00000008;
    pCVar5 = (CVector3f *)local_44;
    if (0 < *(int *)(in_stack_00000008 + 0x28558)) {
      do {
        if ((in_stack_0000000c == *(int *)(iVar7 + 0x2857c)) &&
           (local_20 = SQRT(pCVar5->z * pCVar5->z + pCVar5->x * pCVar5->x + pCVar5->y * pCVar5->y),
           local_24 < local_20)) {
          iVar6 = iVar10;
          local_24 = local_20;
        }
        iVar7 = iVar7 + 0x24;
        iVar10 = iVar10 + 1;
        pCVar5 = pCVar5 + 1;
      } while (iVar10 < *(int *)(in_stack_00000008 + 0x28558));
    }
    if (iVar6 != -1) {
      pCVar8 = (CVector3f *)((int)local_44 + in_stack_0000000c * 0xc);
      pCVar5 = (CVector3f *)((int)local_44 + iVar6 * 0xc);
      fVar2 = pCVar5->x - pCVar8->x;
      fVar3 = pCVar5->y - pCVar8->y;
      fVar4 = pCVar5->z - pCVar8->z;
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)(SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) *
                                  (float)0.5));
      local_1c = (int)ROUND(dVar11);
      local_30 = local_1c + 1;
      iVar6 = 0;
      if (0 < local_30) {
        local_44 = (this_ptr->model).bone_transform.bone_world_matrices;
        local_40 = this_ptr->cloth_data + 0x934;
        local_3c = this_ptr->cloth_data + 0x484;
        local_34 = &this_ptr->model;
        local_38 = local_1c + 2;
        while (*(int *)(this_ptr->cloth_data + 0x478) < 0x32) {
          iVar7 = *(int *)(this_ptr->cloth_data + 0x478);
          (this_ptr->base_actor).is_transparent = 1;
          pcVar9 = local_3c + iVar7 * 0x18;
          *(int *)(this_ptr->cloth_data + 0x478) = iVar7 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                                  (local_34);
          iVar7 = core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0
                            (this_ptr_00,in_stack_0000000c);
          *(int *)pcVar9 = iVar7;
          local_14 = local_30;
          *(int *)(pcVar9 + 4) = in_stack_0000000c;
          local_18 = (float)(iVar6 + 1);
          local_24 = (float)local_30;
          fVar2 = 1.0 / local_24;
          CStack_54.z = fVar3 * local_18 * fVar2;
          local_48 = fVar4 * local_18 * fVar2;
          local_44 = (CMatrix3x4f *)(local_68 * local_18 * fVar2);
          if ((float *)(pcVar9 + 8) != &CStack_54.z) {
            *(float *)(pcVar9 + 8) = CStack_54.z;
            *(float *)(pcVar9 + 0xc) = local_48;
            *(CMatrix3x4f **)(pcVar9 + 0x10) = local_44;
          }
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&CStack_64,(CVector3f *)(pcVar9 + 8),
                              (CMatrix3x4f *)(local_3c + *(int *)(pcVar9 + 4) * 0x30));
          pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base_actor,&CStack_54,pCVar5);
          iVar7 = (*(int *)(this_ptr->cloth_data + 0x478) + -1) * 0x2a4 + local_30;
          *(float *)(iVar7 + 0x20) = pCVar5->x;
          *(float *)(iVar7 + 0x24) = pCVar5->y;
          *(float *)(iVar7 + 0x28) = pCVar5->z;
          pcVar1 = this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x83c;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar9[0x14] = '\0';
          pcVar9[0x15] = '\0';
          pcVar9[0x16] = '\0';
          pcVar9[0x17] = '?';
          fVar2 = (float)0.5;
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7e8)
               = *(float *)(pcVar9 + 0x14) * fVar2;
          *(int *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7ec) =
               *(int *)(pcVar9 + 0x14);
          *(float *)(this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x7f0)
               = fVar2 * *(float *)(pcVar9 + 0x14);
          iVar6 = iVar6 + 1;
          *(uint *)
           (this_ptr->cloth_data + *(int *)(this_ptr->cloth_data + 0x478) * 0x2a4 + 0x838) =
               *(uint *)(this_ptr->cloth_data + 0x47c);
          if ((int)local_20 <= iVar6) {
            return;
          }
        }
      }
    }
  }
  return;
}
