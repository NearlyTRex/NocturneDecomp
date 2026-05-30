// Name: core_skeledit.cpp_CDeformableModel_pruneWeakBoneInfluences_FUN_0058eaa0
// Address: 0058eaa0
// MANUAL RECONSTRUCTION
// Address Range: [[0058eaa0, 0058ec5c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_pruneWeakBoneInfluences_FUN_0058eaa0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_pruneWeakBoneInfluences_FUN_0058eaa0(CDeformableModel *this_ptr)

{
  SVert *pSVar1;
  CVector3f *pCVar2;
  int iVar5;
  int iVar4;
  int local_3c;
  int local_34;
  float local_24;
  int local_1c;

  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimizing deformable model vertices...");
  local_3c = 0;
  if (0 < this_ptr->num_lods) {
    do {
      for (local_34 = 0; local_34 < this_ptr->vertex_count[local_3c];
          local_34 = local_34 + 1) {
        pSVar1 = &this_ptr->vertex_data_ptr[local_3c][local_34];
        if (1 < pSVar1->num_bone_influences) {
          pCVar2 = &pSVar1->position;
          local_1c = 0;
          for (iVar4 = 0; iVar4 < (int)(uint)pSVar1->num_bone_influences; iVar4 = iVar4 + 1) {
            if ((float)0.01 < pSVar1->bone_weights[iVar4]) {
              if (local_1c < iVar4) {
                pSVar1->bone_indices[local_1c] = pSVar1->bone_indices[iVar4];
                pSVar1->bone_weights[local_1c] = pSVar1->bone_weights[iVar4];
                pCVar2[local_1c] = pCVar2[iVar4];
              }
              local_1c = local_1c + 1;
            }
          }
          if (local_1c < (int)(uint)pSVar1->num_bone_influences) {
            local_24 = 0.0;
            pSVar1->num_bone_influences = (uchar)local_1c;
            for (iVar5 = 0; iVar5 < (int)(uint)pSVar1->num_bone_influences; iVar5 = iVar5 + 1) {
              local_24 = local_24 + pSVar1->bone_weights[iVar5];
            }
            for (iVar5 = 0; iVar5 < (int)(uint)pSVar1->num_bone_influences; iVar5 = iVar5 + 1) {
              pSVar1->bone_weights[iVar5] = pSVar1->bone_weights[iVar5] / local_24;
            }
          }
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < this_ptr->num_lods);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Optimized deformable model vertices OK");
  return;
}
