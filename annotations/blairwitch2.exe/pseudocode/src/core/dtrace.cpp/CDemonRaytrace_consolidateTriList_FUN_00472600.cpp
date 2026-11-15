// Name: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00472600
// Address: 00472600
// Address Range: [[00472600, 00472777]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00472600(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00472600(CDemonRaytrace *this_ptr)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  uint *puVar7;
  float *pfVar8;
  CDemonTriangle *pCVar9;
  uchar *puVar10;
  byte bVar11;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
            (g_CEditorToolsPtr,"Consolidating raytrace geometry arrays...");
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_004727f0(this_ptr);
  this_ptr->triangle_count = 0;
  iVar5 = 0;
  for (iVar2 = 0;
      iVar2 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
      iVar2 = iVar2 + 1) {
    piVar1 = (int *)((int)&this_ptr->cube_list->triangle_count + iVar5);
    iVar5 = iVar5 + 0x58;
    this_ptr->triangle_count = this_ptr->triangle_count + *piVar1;
  }
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00472780(this_ptr);
  iVar2 = 0;
  iStack_14 = 0;
  iStack_18 = 0;
  while (iVar5 = (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z,
        iVar5 - iStack_14 != 0 && iStack_14 <= iVar5) {
    puVar7 = (uint *)((int)&this_ptr->cube_list->triangle_count + iStack_18);
    if (0 < (int)*puVar7) {
      pfVar8 = (float *)puVar7[1];
      pCVar9 = this_ptr->triangle_list + iVar2;
      for (uVar3 = *puVar7 * 0x38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        (pCVar9->vertex1).x = *pfVar8;
        pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -8 + 4);
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)&(pCVar9->vertex1).x = *(byte *)pfVar8;
        pfVar8 = (float *)((int)pfVar8 + (uint)bVar11 * -2 + 1);
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -2 + 1);
      }
      uVar3 = *puVar7;
      puVar6 = (uchar *)puVar7[0x15];
      puVar10 = this_ptr->triangle_flags + iVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint *)puVar10 = *(uint *)puVar6;
        puVar6 = puVar6 + (uint)bVar11 * -8 + 4;
        puVar10 = puVar10 + (uint)bVar11 * -8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar6;
        puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      FUN_005b7fce((void *)puVar7[1]);
      FUN_005b7fce((void *)puVar7[0x15]);
      puVar7[1] = (uint)(this_ptr->triangle_list + iVar2);
      puVar6 = this_ptr->triangle_flags + iVar2;
      iVar2 = iVar2 + *puVar7;
      puVar7[0x15] = (uint)puVar6;
    }
    iStack_14 = iStack_14 + 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047dc40
              (g_CEditorToolsPtr,(float)iStack_14,
               (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                      (this_ptr->grid_coord).z));
    iStack_18 = iStack_18 + 0x58;
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047e760(g_CEditorToolsPtr);
  return;
}
