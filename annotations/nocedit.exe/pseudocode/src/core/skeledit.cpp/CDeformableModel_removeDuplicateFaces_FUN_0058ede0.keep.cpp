// Name: core_skeledit.cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0
// Address: 0058ede0
// MANUAL RECONSTRUCTION
// Address Range: [[0058ede0, 0058f033]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_removeDuplicateFaces_FUN_0058ede0(CDeformableModel *this_ptr)

{
  int iVar1;
  int iVar4;
  int iVar2;
  int iVar3;
  ushort *psVar4;
  SInputFace *pSVar1;
  SInputFace *pSVar2;
  int local_50;
  int local_44;
  int local_30;
  int local_1c;

  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Searching for duplicate faces.");
  local_44 = 0;
  local_50 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      local_30 = 1;
LAB_0058ee5a:
      if (local_30 < this_ptr->tri_count[local_50]) {
        if (0 < local_30) {
          local_1c = 0;
          do {
            if (this_ptr->index_data_ptr[local_50][local_30] ==
                this_ptr->index_data_ptr[local_50][local_1c]) {
              pSVar1 = &this_ptr->tri_data_ptr[local_50][local_30];
              pSVar2 = &this_ptr->tri_data_ptr[local_50][local_1c];
              iVar3 = 0;
              do {
                iVar2 = 0;
                iVar1 = iVar3;
                psVar4 = &pSVar1->vertex_indices.vertex_index_0;
                do {
                  if (*psVar4 != (&pSVar2->vertex_indices.vertex_index_0)[iVar1 % 3]) break;
                  iVar1 = iVar1 + 1;
                  iVar2 = iVar2 + 1;
                  psVar4 = psVar4 + 1;
                } while (iVar2 < 3);
                if (iVar2 == 3) {
                  iVar4 = this_ptr->tri_count[local_50] + -1;
                  this_ptr->tri_count[local_50] = iVar4;
                  memmove(&this_ptr->tri_data_ptr[local_50][local_30],
                          &this_ptr->tri_data_ptr[local_50][local_30 + 1],
                          (iVar4 - local_30) * sizeof(*this_ptr->tri_data_ptr[local_50]));
                  memmove(&this_ptr->index_data_ptr[local_50][local_30],
                          &this_ptr->index_data_ptr[local_50][local_30 + 1],
                          (this_ptr->tri_count[local_50] - local_30) * sizeof(*this_ptr->index_data_ptr[local_50]));
                  local_44 = local_44 + 1;
                  goto LAB_0058ee5a;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < 3);
            }
            local_1c = local_1c + 1;
          } while (local_1c < local_30);
        }
        local_30 = local_30 + 1;
        goto LAB_0058ee5a;
      }
      local_50 = local_50 + 1;
    } while (local_50 < this_ptr->num_lods);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"%d duplicate faces removed.",local_44);
  return;
}
