// Name: core_charactr.cpp_CCharacter_FUN_0042e670
// Address: 0042e670
// Address Range: [[0042e670, 0042e831]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042e670(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042e670(CCharacter *this_ptr)

{
  float fVar1;
  char *pcVar2;
  CMotionList *this_ptr_00;
  int iVar3;
  char *pcVar4;
  CCharacter *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      pCVar5 = (CCharacter *)&(pCVar5->base_actor).orient_matrix.m[1].z;
      pcVar4 = (this_ptr->base_actor).actor_name + iVar7 * 0x50;
      do {
        pcVar2 = pcVar4 + 4;
        *(uint *)((int)pcVar4 + 0xb7e4) = 0x501502f9;
        pcVar4 = pcVar2;
      } while ((CCharacter *)pcVar2 != pCVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->model).motion_controller);
    iVar7 = 0;
    if (0 < *(int *)(this_ptr->field13_0x2620 + 8)) {
      do {
        pcVar4 = this_ptr->field13_0x2620 + iVar7 * 0x38 + 0xc;
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
        *(int *)(pcVar4 + 0x2c) = iVar3;
        *(int *)(pcVar4 + 0x30) = this_ptr_00->motions[iVar3].frame_count;
        *(float *)(pcVar4 + 0x34) =
             (float)*(int *)(pcVar4 + 0x30) / this_ptr_00->motions[*(int *)(pcVar4 + 0x2c)].fps;
        if (-1 < *(int *)(pcVar4 + 0x28)) {
          *(int *)(this_ptr->cloth_data + *(int *)(pcVar4 + 4) * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c)
               = *(int *)(pcVar4 + 0x34);
        }
        if (*(int *)(pcVar4 + 0x28) < 1) {
          *(int *)(this_ptr->cloth_data + *(int *)pcVar4 * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c)
               = *(int *)(pcVar4 + 0x34);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this_ptr->field13_0x2620 + 8));
    }
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      iVar3 = iVar7 + 4;
      pcVar4 = pCVar5->cloth_data + iVar7 + 0x8d4c;
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      iVar7 = iVar3;
      pCVar5 = (CCharacter *)&(pCVar5->base_actor).orient_matrix.m[1].z;
    } while (iVar3 != 0x50);
    local_20 = this_ptr;
    do {
      iVar7 = 0;
      local_18 = local_20;
      pCVar5 = this_ptr;
      do {
        pCVar5 = (CCharacter *)&(pCVar5->base_actor).orient_matrix.m[1].z;
        pcVar4 = (this_ptr->base_actor).actor_name + iVar7 * 0x50;
        pCVar6 = local_20;
        do {
          fVar1 = *(float *)(local_18->cloth_data + 0x8d4c) + *(float *)((int)pcVar4 + 0xb7e4);
          if (fVar1 < *(float *)(pCVar6->cloth_data + 0x8d4c)) {
            *(float *)(pCVar6->cloth_data + 0x8d4c) = fVar1;
          }
          pcVar4 = pcVar4 + 4;
          pCVar6 = (CCharacter *)((pCVar6->base_actor).actor_name + 4);
        } while ((CCharacter *)pcVar4 != pCVar5);
        iVar7 = iVar7 + 1;
        local_18 = (CCharacter *)((local_18->base_actor).actor_name + 4);
      } while (iVar7 < 0x14);
      local_20 = (CCharacter *)&(local_20->base_actor).orient_matrix.m[1].z;
    } while (local_20 != (CCharacter *)&(this_ptr->model).transformed_vertices[0x61].y);
  }
  return;
}
