// Name: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
// Address Range: [[0051cdf0, 0051d0d5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,FILE *file_handle)

{
  CLodEdge *pCVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  SIZE_T local_38;
  void *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  
  local_20 = 1;
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&local_38);
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
    local_2c = (int)local_34 + 4;
    dVar2 = (double)CONCAT44 /* combine 2-byte values */(9.9999999999999997e+34._4_4_,9.9999999999999997e+34._0_4_) *
            0.94999999999999996;
    local_28 = (int)local_34 + 8;
    local_1c = 0;
    local_30 = (int)local_34 + 0x10;
    do {
      local_18 = (int *)((int)local_34 + local_1c);
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%d,%d,%lf,%f\n",local_18,local_2c,local_28,local_30);
      if (*(double *)(local_18 + 2) <= dVar2) {
LAB_0051d075:
        if (iVar3 != 4) {
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          g_CurrentLineNumber = 0x13fa;
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - file is corrupt.");
        }
      }
      else {
        local_18[2] = 9.9999999999999997e+34._0_4_;
        local_18[3] = 9.9999999999999997e+34._4_4_;
        local_18[4] = 0;
        if (iVar3 != 3) goto LAB_0051d075;
        iVar3 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
      }
      if (local_20 != 0) {
        if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_1c + -0x28) != *local_18
           ) {
          local_20 = 0;
        }
        if (local_18[1] !=
            *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + local_1c + -0x24)) {
          local_20 = 0;
        }
      }
      local_2c = local_2c + 0xf0;
      local_28 = local_28 + 0xf0;
      local_30 = local_30 + 0xf0;
      local_1c = local_1c + 0xf0;
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
    iVar3 = 0;
    pvVar5 = local_34;
    if (0 < this_ptr->edge_count) {
      do {
        pCVar1 = this_ptr->edges_ptr;
        *(uint *)&pCVar1[iVar3].collapse_cost = *(uint *)((int)pvVar5 + 8);
        *(uint *)((int)&pCVar1[iVar3].collapse_cost + 4) = *(uint *)((int)pvVar5 + 0xc);
        this_ptr->edges_ptr[iVar3].collapse_error = *(float *)((int)pvVar5 + 0x10);
        this_ptr->edges_ptr[iVar3].needs_recalc_flag = 0;
        iVar3 = iVar3 + 1;
        pvVar5 = (void *)((int)pvVar5 + 0xf0);
      } while (iVar3 < this_ptr->edge_count);
    }
    iVar3 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar3,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < this_ptr->edge_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_34,"..\\shape\\meshlod.cpp",0x141f);
  return;
}
