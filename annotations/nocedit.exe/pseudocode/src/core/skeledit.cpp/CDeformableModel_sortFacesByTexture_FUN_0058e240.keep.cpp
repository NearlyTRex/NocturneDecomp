// Name: core_skeledit.cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240
// Address: 0058e240
// MANUAL RECONSTRUCTION
// Address Range: [[0058e240, 0058e3d2] [00608b27, 00608b6c] [0060ca22, 0060ca60]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

{
  ushort uVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar8;
  int iVar9;
  int iVar5;
  uint *puVar13;
  int *piVar6;
  int iVar7;
  ushort uStack_44;
  CDeformableModel *local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int *piVar1;
  int iVar3;
  
  local_34 = 0;
  if (0 < this_ptr->num_lods) {
    local_38 = this_ptr;
    local_30 = 0;
    do {
      local_24 = 0;
      local_20 = 0;
      if (0 < this_ptr->num_parts) {
        local_28 = (int)this_ptr->lod_info + local_30 + -4;
        do {
          iVar8 = local_20 + *(int *)(local_28 + 0x7164);
          for (iVar9 = iVar8 + -2; local_20 <= iVar9; iVar9 = iVar9 + -1) {
            if (local_20 <= iVar9) {
              iVar7 = local_20 * 4;
              iVar5 = local_20 * 0x12;
              do {
                piVar1 = (int *)((int)local_38->index_data_ptr[0] + iVar7);
                if (piVar1[1] < *piVar1) {
                  piVar6 = (int *)((int)local_38->index_data_ptr[0] + iVar7 + 4);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar6;
                  *piVar6 = iVar3;
                  puVar13 = (uint *)
                            ((int)&(local_38->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            iVar5);
                  uVar4 = *puVar13;
                  uVar6 = puVar13[1];
                  uStack_44 = (ushort)((uint)*(uint *)((int)puVar13 + 6) >> 0x10);
                  uVar1 = *(ushort *)((int)puVar13 + 10);
                  puVar5 = (uint *)puVar13[3];
                  uVar2 = *(ushort *)(puVar13 + 4);
                  *puVar13 = *puVar5;
                  puVar13[1] = puVar5[1];
                  puVar13[2] = puVar5[2];
                  puVar3 = (uint *)puVar5[3];
                  puVar13[3] = (uint)puVar3;
                  *(ushort *)(puVar13 + 4) = *(ushort *)(puVar5 + 4);
                  *puVar3 = uVar4;
                  puVar3[1] = uVar6;
                  puVar3[2] = CONCAT22(uVar1,uStack_44);
                  puVar3[3] = (uint)puVar5;
                  *(ushort *)(puVar3 + 4) = uVar2;
                }
                iVar7 = iVar7 + 4;
                iVar5 = iVar5 + 0x12;
              } while (iVar7 <= iVar9 << 2);
            }
          }
          local_28 = local_28 + 0x60;
          local_24 = local_24 + 1;
          local_20 = iVar8;
        } while (local_24 < this_ptr->num_parts);
      }
      local_30 = local_30 + 4;
      local_38 = (CDeformableModel *)local_38->lod_info;
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->num_lods);
  }
  return;
}
