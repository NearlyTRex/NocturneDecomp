// Name: shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710
// Address: 00519710
// Address Range: [[00519710, 005197b6]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    do {
      shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar2,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->edge_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Computing initial edge collapse costs...");
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    do {
      shape_meshlod_cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(this_ptr,iVar2);
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar1,(float)this_ptr->edge_count);
    } while (iVar2 < this_ptr->edge_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}
