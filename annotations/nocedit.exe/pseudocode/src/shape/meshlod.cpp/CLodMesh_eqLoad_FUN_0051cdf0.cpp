// Name: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
// Address: 0051cdf0
// Address Range: [[0051cdf0, 0051d0d5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh *this_ptr,FILE *file_handle)

{
  CLodEdge *pCVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  SIZE_T in_stack_ffffffcc;
  double dVar6;
  void *local_28;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int iVar7;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",&stack0xffffffc8);
  pvVar2 = shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (in_stack_ffffffcc,0xf0,"..\\shape\\meshlod.cpp",0x13e4);
  if (pvVar2 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x13e5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  if (pvVar2 != (void *)this_ptr->edge_count) {
    iStack_14 = 0;
  }
  local_18 = 0;
  if (0 < (int)pvVar2) {
    local_20 = (int)local_28 + 4;
    dVar6 = (double)CONCAT44 /* combine 2-byte values */(9.9999999999999997e+34._4_4_,9.9999999999999997e+34._0_4_) *
            0.94999999999999996;
    local_1c = (int)local_28 + 8;
    iVar7 = 0;
    do {
      piVar3 = (int *)((int)local_28 + iVar7);
      iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%d,%d,%lf,%f\n",file_handle,"%d,%d,%lf,%f\n",piVar3,
                         local_20,local_1c);
      if (*(double *)(iVar7 + 8) <= dVar6) {
LAB_0051d075:
        if (iVar4 != 4) {
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          g_CurrentLineNumber = 0x13fa;
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - file is corrupt.");
        }
      }
      else {
        *(uint *)(iVar7 + 8) = 9.9999999999999997e+34._0_4_;
        *(uint *)(iVar7 + 0xc) = 9.9999999999999997e+34._4_4_;
        *(uint *)(iVar7 + 0x10) = 0;
        if (iVar4 != 3) goto LAB_0051d075;
        iVar4 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      }
      if (iStack_14 != 0) {
        if (*(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar7 + -0x28) != *piVar3) {
          iStack_14 = 0;
        }
        if (piVar3[1] != *(int *)((int)this_ptr->edges_ptr->adjacent_tri_indices + iVar7 + -0x24)) {
          iStack_14 = 0;
        }
      }
      local_20 = local_20 + 0xf0;
      local_1c = local_1c + 0xf0;
      iVar7 = iVar7 + 0xf0;
      local_18 = local_18 + 1;
    } while (local_18 < (int)pvVar2);
  }
  if (iStack_14 == 0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1419;
    core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::eqLoad - EQ is not not up to date.");
    shape_meshlod_cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(this_ptr);
  }
  else {
    iVar7 = 0;
    pvVar2 = local_28;
    if (0 < this_ptr->edge_count) {
      do {
        pCVar1 = this_ptr->edges_ptr;
        *(uint *)&pCVar1[iVar7].collapse_cost = *(uint *)((int)pvVar2 + 8);
        *(uint *)((int)&pCVar1[iVar7].collapse_cost + 4) = *(uint *)((int)pvVar2 + 0xc);
        this_ptr->edges_ptr[iVar7].collapse_error = *(float *)((int)pvVar2 + 0x10);
        this_ptr->edges_ptr[iVar7].needs_recalc_flag = 0;
        iVar7 = iVar7 + 1;
        pvVar2 = (void *)((int)pvVar2 + 0xf0);
      } while (iVar7 < this_ptr->edge_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->edge_count) {
      do {
        shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar7,1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->edge_count);
    }
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_28,"..\\shape\\meshlod.cpp",0x141f);
  return;
}
