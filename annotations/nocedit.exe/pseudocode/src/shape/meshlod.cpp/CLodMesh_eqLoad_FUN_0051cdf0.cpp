// Name: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
// Address Range: [[0051cdf0, 0051d0d5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,FILE *file_handle)

{
  CLodEdge *pCVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  BADSPACEBASE *in_ESP;
  ulonglong local_38;
  int local_30;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  local_20 = 1;
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&local_38);
  local_2c = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                       (local_38._4_4_,0xf0,"..\\shape\\meshlod.cpp",0x13e4);
  if (local_2c == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x13e5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  if (local_30 != this_ptr->edge_count) {
    local_18 = 0;
  }
  local_1c = 0;
  if (0 < local_30) {
    local_24 = (int)local_2c + 4;
    local_38 = (double)CONCAT44 /* combine 2-byte values */(9.9999999999999997e+34._4_4_,9.9999999999999997e+34._0_4_) *
               0.94999999999999996;
    local_20 = (int)local_2c + 8;
    iStack_14 = 0;
    local_28 = (int)local_2c + 0x10;
    do {
      piVar2 = (int *)((int)local_2c + iStack_14);
      iVar4 = local_28;
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%d,%d,%lf,%f\n",piVar2,local_24,local_20);
      if (*(double *)(iStack_14 + 8) <= (double)CONCAT44 /* combine 2-byte values */((uint)local_38,iVar4)) {
LAB_0051d075:
        if (iVar3 != 4) {
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          g_CurrentLineNumber = 0x13fa;
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - file is corrupt.");
        }
      }
      else {
        *(uint *)(iStack_14 + 8) = 9.9999999999999997e+34._0_4_;
        *(uint *)(iStack_14 + 0xc) = 9.9999999999999997e+34._4_4_;
        *(uint *)(iStack_14 + 0x10) = 0;
        if (iVar3 != 3) goto LAB_0051d075;
        iVar4 = 1;
        do {
          iVar3 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
          if (iVar3 < 0) break;
        } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      }
      if (local_18 != 0) {
        if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iStack_14 + -0x28) != *piVar2)
        {
          local_18 = 0;
        }
        if (piVar2[1] !=
            *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iStack_14 + -0x24)) {
          local_18 = 0;
        }
      }
      local_24 = local_24 + 0xf0;
      local_20 = local_20 + 0xf0;
      local_28 = local_28 + 0xf0;
      iStack_14 = iStack_14 + 0xf0;
      local_1c = local_1c + 1;
    } while (local_1c < local_30);
  }
  if (local_18 == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1419;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - EQ is not not up to date.");
    shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(this_ptr);
  }
  else {
    iVar4 = 0;
    pvVar5 = local_2c;
    if (0 < this_ptr->edge_count) {
      do {
        pCVar1 = this_ptr->edges_ptr;
        *(uint *)&pCVar1[iVar4].collapse_cost = *(uint *)((int)pvVar5 + 8);
        *(uint *)((int)&pCVar1[iVar4].collapse_cost + 4) = *(uint *)((int)pvVar5 + 0xc);
        this_ptr->edges_ptr[iVar4].collapse_error = *(float *)((int)pvVar5 + 0x10);
        this_ptr->edges_ptr[iVar4].needs_recalc_flag = 0;
        iVar4 = iVar4 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0xf0);
      } while (iVar4 < this_ptr->edge_count);
    }
    iVar4 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar4,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->edge_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_2c,"..\\shape\\meshlod.cpp",0x141f);
  return;
}
