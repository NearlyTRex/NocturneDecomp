// Name: core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0
// Address: 0058ede0
// Address Range: [[0058ede0, 0058f033]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  CDeformableModel *local_54;
  int local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_20;
  int local_1c;
  
  __STK();
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for duplicate faces.");
  local_50 = 0;
  if (0 < this_ptr->num_lods) {
    local_54 = this_ptr;
    do {
      local_40 = 8;
      local_3c = 0x24;
      local_30 = 1;
      local_38 = 0x12;
LAB_0058ee5a:
      if (local_30 < this_ptr->tri_count[local_50]) {
        if (0 < local_30) {
          local_1c = 0;
          local_20 = 0;
          do {
            if (local_54->index_data_ptr[0][local_30] ==
                *(int *)(local_1c + (int)local_54->index_data_ptr[0])) {
              iVar3 = 0;
              do {
                iVar2 = 0;
                iVar1 = iVar3;
                psVar4 = (short *)((int)&(this_ptr->tri_data_ptr[local_50]->vertex_indices).
                                         vertex_index_0 + local_38);
                do {
                  if (*psVar4 !=
                      *(short *)((int)&(local_54->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                                (iVar1 % 3) * 2 + local_20)) break;
                  iVar1 = iVar1 + 1;
                  iVar2 = iVar2 + 1;
                  psVar4 = psVar4 + 1;
                } while (iVar2 < 3);
                if (iVar2 == 3) {
                  iVar3 = local_54->tri_count[0] + -1;
                  local_54->tri_count[0] = iVar3;
                  memmove
                            ((void *)((int)&(local_54->tri_data_ptr[0]->vertex_indices).
                                            vertex_index_0 + local_38),
                             (void *)((int)&(local_54->tri_data_ptr[0]->vertex_indices).
                                            vertex_index_0 + local_3c),(iVar3 - local_30) * 0x12);
                  memmove
                            (local_54->index_data_ptr[0] + local_30,
                             (void *)(local_40 + (int)local_54->index_data_ptr[0]),
                             (local_54->tri_count[0] - local_30) * 4);
                  goto LAB_0058ee5a;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
            }
            local_20 = local_20 + 0x12;
            local_1c = local_1c + 4;
          } while (local_1c < local_30 * 4);
        }
        local_38 = local_38 + 0x12;
        local_3c = local_3c + 0x12;
        local_30 = local_30 + 1;
        local_40 = local_40 + 4;
        goto LAB_0058ee5a;
      }
      local_50 = local_50 + 1;
      local_54 = (CDeformableModel *)local_54->lod_info;
    } while (local_50 < this_ptr->num_lods);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"%d duplicate faces removed.");
  return;
}
