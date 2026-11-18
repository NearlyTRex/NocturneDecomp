// Name: core_charactr.cpp_applyFacePartToHead_FUN_0042e410
// Address: 0042e410
// Address Range: [[0042e410, 0042e578]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_applyFacePartToHead_FUN_0042e410(CDeformableModel *model,int head_part_index,int face_part_index)

#include "nocturne.h"

void __cdecl core_charactr_cpp_applyFacePartToHead_FUN_0042e410(CDeformableModel *model,int head_part_index,int face_part_index)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int *local_28;
  int local_24;
  int local_20;
  int local_14;
  
  local_28 = &model->lod_info[head_part_index * 0xc + -1].shadow_only_flag;
  local_20 = 0;
  for (local_24 = 0; local_24 < model->num_lods; local_24 = local_24 + 1) {
    iVar4 = 0;
    iVar7 = 0;
    iVar2 = local_28[0x309];
    iVar8 = (int)model->lod_info + local_20 + -4;
    if (0 < head_part_index) {
      do {
        piVar1 = (int *)(iVar8 + 0xc24);
        iVar8 = iVar8 + 0x60;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + *piVar1;
      } while (iVar7 < head_part_index);
    }
    iVar7 = *(int *)((int)model->tri_data_ptr + local_20);
    iVar3 = *(int *)((int)model->parts[face_part_index].tri_counts + local_20);
    iVar9 = 0;
    iVar5 = 0;
    iVar8 = (int)model->lod_info + local_20 + -4;
    if (0 < face_part_index) {
      do {
        piVar1 = (int *)(iVar8 + 0xc24);
        iVar8 = iVar8 + 0x60;
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + *piVar1;
      } while (iVar9 < face_part_index);
    }
    psVar10 = (short *)(*(int *)((int)model->tri_data_ptr + local_20) + iVar5 * 0x12);
    local_14 = 0;
    if (0 < iVar3) {
      do {
        iVar8 = 0;
        psVar6 = (short *)(iVar7 + iVar4 * 0x12);
        if (0 < iVar2) {
          do {
            if (((*psVar10 == *psVar6) && (psVar10[1] == psVar6[1])) && (psVar10[2] == psVar6[2])) {
              *(uint *)psVar6 = *(uint *)psVar10;
              *(uint *)(psVar6 + 2) = *(uint *)(psVar10 + 2);
              *(uint *)(psVar6 + 4) = *(uint *)(psVar10 + 4);
              *(uint *)(psVar6 + 6) = *(uint *)(psVar10 + 6);
              psVar6[8] = psVar10[8];
            }
            iVar8 = iVar8 + 1;
            psVar6 = psVar6 + 9;
          } while (iVar8 < iVar2);
        }
        local_14 = local_14 + 1;
        psVar10 = psVar10 + 9;
      } while (local_14 < iVar3);
    }
    local_20 = local_20 + 4;
    local_28 = local_28 + 1;
  }
  return;
}
