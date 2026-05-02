// Name: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
// Address: 00494450
// MANUAL RECONSTRUCTION
// Address Range: [[00494450, 004945f8]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace *this_ptr)

{
  uchar *puVar1;
  int iVar2;
  int iVar5;
  int iVar3;
  uint *puVar6;
  int local_20;
  int local_1c;
  int local_18;
  int iVar1;
  byte bVar11;
  
  bVar11 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Consolidating raytrace geometry arrays...");
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
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
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  while (iVar3 = (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z,
        iVar3 - local_1c != 0 && local_1c <= iVar3) {
    puVar6 = (uint *)((int)this_ptr->cube_list->voxel_data + local_20 + -0x14);
    if (0 < (int)*puVar6) {
      memcpy(this_ptr->triangle_list + local_18,(void *)puVar6[1],*puVar6 * sizeof(CDemonTriangle));
      memcpy(this_ptr->triangle_flags + local_18,(void *)puVar6[0x15],*puVar6);
      g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
      g_CurrentDebugLine = 0xe0;
      if (puVar6[1] != 0) {
        shape_memdbg_cpp_free_FUN_005fe659((void *)(puVar6[1] - 4));
      }
      g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
      g_CurrentDebugLine = 0xe1;
      shape_memdbg_cpp_free_FUN_005fe659((void *)puVar6[0x15]);
      puVar6[1] = (uint)(this_ptr->triangle_list + local_18);
      puVar1 = this_ptr->triangle_flags + local_18;
      local_18 = local_18 + *puVar6;
      puVar6[0x15] = (uint)puVar1;
    }
    local_1c = local_1c + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)local_1c,
               (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                      (this_ptr->grid_coord).z));
    local_20 = local_20 + 0x58;
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
