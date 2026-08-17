// Name: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_004673e0
// Address: 004673e0
// Address Range: [[004673e0, 0046755d]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_004673e0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_004673e0(CDemonRaytrace *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uchar *puVar8;
  CDemonTriangle *pCVar9;
  uchar *puVar10;
  byte bVar11;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar11 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
            (g_CEditorTools_PTR_005b6d50,"Consolidating raytrace geometry arrays...");
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004675e0(this_ptr);
  this_ptr->triangle_count = 0;
  iVar5 = 0;
  for (iVar2 = 0;
      iVar2 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
      iVar2 = iVar2 + 1) {
    iVar1 = iVar5 + -0x14;
    iVar5 = iVar5 + 0x58;
    this_ptr->triangle_count =
         this_ptr->triangle_count + *(int *)((int)this_ptr->cube_list->voxel_data + iVar1);
  }
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00467560(this_ptr);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  while (iVar2 = (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z,
        iVar2 - local_1c != 0 && local_1c <= iVar2) {
    puVar6 = (uint *)((int)this_ptr->cube_list->voxel_data + local_20 + -0x14);
    if (0 < (int)*puVar6) {
      pfVar7 = (float *)puVar6[1];
      pCVar9 = this_ptr->triangle_list + local_18;
      for (uVar3 = *puVar6 * 0x38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        (pCVar9->vertex1).x = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -8 + 4);
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)&(pCVar9->vertex1).x = *(byte *)pfVar7;
        pfVar7 = (float *)((int)pfVar7 + (uint)bVar11 * -2 + 1);
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -2 + 1);
      }
      uVar3 = *puVar6;
      puVar8 = (uchar *)puVar6[0x15];
      puVar10 = this_ptr->triangle_flags + local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)puVar10 = *(uint *)puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -8 + 4;
        puVar10 = puVar10 + (uint)bVar11 * -8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      if (puVar6[1] != 0) {
        shape_memdbg_cpp_free_FUN_00564486((void *)(puVar6[1] - 4));
      }
      shape_memdbg_cpp_free_FUN_00564486((void *)puVar6[0x15]);
      puVar6[1] = (uint)(this_ptr->triangle_list + local_18);
      puVar8 = this_ptr->triangle_flags + local_18;
      local_18 = local_18 + *puVar6;
      puVar6[0x15] = (uint)puVar8;
    }
    local_1c = local_1c + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
              (g_CEditorTools_PTR_005b6d50,(float)local_1c,
               (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                      (this_ptr->grid_coord).z));
    local_20 = local_20 + 0x58;
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0(g_CEditorTools_PTR_005b6d50);
  return;
}
