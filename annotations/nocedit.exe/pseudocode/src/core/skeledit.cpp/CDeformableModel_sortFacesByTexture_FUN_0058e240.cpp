// Name: core_skeledit.cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240
// Address: 0058e240
// Address Range: [[0058e240, 0058e3d2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_sortFacesByTexture_FUN_0058e240(CDeformableModel *this_ptr)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  ushort auStack_201c [1018];
  uint auStack_1828 [1528];
  byte auStack_48 [4];
  uint uStack_44;
  uint local_40;
  ushort auStack_3c [2];
  CDeformableModel *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CDeformableModel *local_14;
  
  bVar13 = 0;
  __STK();
  local_34 = 0;
  if (0 < this_ptr->num_lods) {
    local_38 = this_ptr;
    local_30 = 0;
    do {
      local_24 = 0;
      local_20 = 0;
      if (0 < this_ptr->num_parts) {
        local_14 = local_38;
        local_28 = (int)this_ptr->lod_info + local_30 + -4;
        do {
          local_2c = local_20 + *(int *)(local_28 + 0x7164);
          local_1c = local_2c + -2;
          if (local_20 <= local_1c) {
            do {
              if (local_20 <= local_1c) {
                iVar7 = local_20 * 4;
                iVar5 = local_20 * 0x12;
                local_18 = local_1c << 2;
                iVar4 = iVar5;
                do {
                  piVar1 = (int *)((int)local_14->index_data_ptr[0] + iVar7);
                  if (piVar1[1] < *piVar1) {
                    piVar6 = (int *)((int)local_14->index_data_ptr[0] + iVar7 + 4);
                    iVar3 = *piVar1;
                    *piVar1 = *piVar6;
                    *piVar6 = iVar3;
                    puVar10 = (uint *)
                              ((int)&local_14->tri_data_ptr[0][1].vertex_indices.vertex_index_0 +
                              iVar4);
                    puVar9 = (uint *)
                             ((int)&(local_14->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                             iVar5);
                    uVar2 = *puVar9;
                    *(ushort *)(auStack_48 + (uint)bVar13 * -8) =
                         *(ushort *)(puVar9 + (uint)bVar13 * -2 + 1);
                    stack0xffffffba = *(uint *)((int)puVar9 + 6);
                    *(ushort *)((int)&uStack_44 + (uint)bVar13 * -8 + 2) =
                         *(ushort *)((int)puVar9 + (uint)bVar13 * -8 + 10);
                    local_40 = puVar9[3];
                    auStack_3c[(uint)bVar13 * -4] = *(ushort *)(puVar9 + (uint)bVar13 * -2 + 4);
                    puVar11 = puVar9 + (uint)bVar13 * -2 + 1;
                    puVar8 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar9 = *puVar10;
                    puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
                    puVar9 = puVar8 + (uint)bVar13 * -2 + 1;
                    *puVar11 = *puVar8;
                    *puVar12 = *puVar9;
                    puVar12[(uint)bVar13 * -2 + 1] = puVar9[(uint)bVar13 * -2 + 1];
                    *(ushort *)(puVar12 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(ushort *)(puVar9 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                    puVar9 = puVar10 + (uint)bVar13 * -2 + 1;
                    *puVar10 = uVar2;
                    puVar8 = puVar9 + (uint)bVar13 * -2 + 1;
                    puVar10 = &uStack_44 + (uint)bVar13 * -2 + (uint)bVar13 * -2;
                    *puVar9 = *(uint *)(auStack_48 + (uint)bVar13 * -8);
                    *puVar8 = *puVar10;
                    puVar8[(uint)bVar13 * -2 + 1] = puVar10[(uint)bVar13 * -2 + 1];
                    *(ushort *)(puVar8 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1) =
                         *(ushort *)(puVar10 + (uint)bVar13 * -2 + 1 + (uint)bVar13 * -2 + 1);
                  }
                  iVar7 = iVar7 + 4;
                  iVar5 = iVar5 + 0x12;
                  iVar4 = iVar4 + 0x12;
                } while (iVar7 <= local_18);
              }
              local_1c = local_1c + -1;
            } while (local_20 <= local_1c);
          }
          local_20 = local_2c;
          local_24 = local_24 + 1;
          local_28 = local_28 + 0x60;
        } while (local_24 < this_ptr->num_parts);
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 4;
      local_38 = (CDeformableModel *)local_38->lod_info;
    } while (local_34 < this_ptr->num_lods);
  }
  return;
}
