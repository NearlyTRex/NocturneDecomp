// Name: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
// MANUAL RECONSTRUCTION
// Address Range: [[0051cdf0, 0051d0d5]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,_FILE *file_handle)

{
  int iVar3;
  int iVar4;
  int iVar1;
  int local_38;
  void *local_34;
  int local_24;
  int local_20;
  double dVar2;
  CLodEdge *record;
  
  local_20 = 1;
  _fscanf(file_handle,"%d\n",&local_38);
  local_34 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (local_38,0xf0,"..\\shape\\meshlod.cpp",0x13e4);
  if (local_34 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x13e5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  if (local_38 != this_ptr->edge_count) {
    local_20 = 0;
  }
  local_24 = 0;
  if (0 < (int)local_38) {
    dVar2 = 9.9999999999999997e+34 * 0.94999999999999996;
    do {
      record = (CLodEdge *)local_34 + local_24;
      iVar3 = _fscanf(file_handle,"%d,%d,%lf,%f\n",
                       &record->vertex_idx_1,&record->vertex_idx_2,
                       &record->collapse_cost,&record->collapse_error);
      if (record->collapse_cost <= dVar2) {
LAB_0051d075:
        if (iVar3 != 4) {
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          g_CurrentLineNumber = 0x13fa;
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - file is corrupt.");
        }
      }
      else {
        record->collapse_cost = 9.9999999999999997e+34;
        record->collapse_error = 0;
        if (iVar3 != 3) goto LAB_0051d075;
        iVar1 = 1;
        do {
          iVar4 = _fgetc(file_handle);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar1 = iVar1 + -1, 0 < iVar1));
      }
      if (local_20 != 0) {
        if (this_ptr->edges_ptr[local_24].vertex_idx_1 != record->vertex_idx_1) {
          local_20 = 0;
        }
        if (record->vertex_idx_2 != this_ptr->edges_ptr[local_24].vertex_idx_2) {
          local_20 = 0;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < (int)local_38);
  }
  if (local_20 == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1419;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - EQ is not not up to date.");
    shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(this_ptr);
  }
  else {
    iVar1 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        record = (CLodEdge *)local_34 + iVar1;
        this_ptr->edges_ptr[iVar1].collapse_cost = record->collapse_cost;
        this_ptr->edges_ptr[iVar1].collapse_error = record->collapse_error;
        this_ptr->edges_ptr[iVar1].needs_recalc_flag = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->edge_count);
    }
    iVar1 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar1,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < this_ptr->edge_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_34,"..\\shape\\meshlod.cpp",0x141f);
  return;
}
