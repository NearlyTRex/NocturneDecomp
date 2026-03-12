// Name: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// Address: 0051a030
// Address Range: [[0051a030, 0051a146]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int *piVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  uint local_38;
  uint uStack_34;
  SLodSamplePoint *local_1c;
  int local_18;
  int iVar1;
  int iVar2;
  CLodFace *pCVar3;
  
  piVar4 = this_ptr->spatial_grid_ptr->cell_start_indices[grid_x][grid_y] + grid_z;
  iVar1 = piVar4[1];
  if (*piVar4 < iVar1) {
    iVar6 = *piVar4 * 4;
    do {
      iVar2 = *(int *)(iVar6 + (int)this_ptr->spatial_grid_data);
      pCVar3 = this_ptr->tri_data;
      iVar6 = iVar6 + 4;
      if ((pCVar3[iVar2].processed_flag == 0) &&
         (g_LodGenerationStamp != pCVar3[iVar2].visited_stamp)) {
        pCVar3[iVar2].visited_stamp = g_LodGenerationStamp;
        iVar5 = 0;
        local_18 = 0;
        if (0 < g_SamplePointCount) {
          local_1c = (SLodSamplePoint *)g_SamplePointArray;
          do {
            dVar7 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                              (this_ptr,local_1c,this_ptr->tri_data + iVar2);
            if (dVar7 < *(double *)((int)g_SampleDistances + iVar5)) {
              local_38 = SUB84(__BITCAST_UINT64(dVar7),0);
              *(uint *)((int)g_SampleDistances + iVar5) = local_38;
              uStack_34 = (uint)((ulonglong)dVar7 >> 0x20);
              *(uint *)((int)g_SampleDistances + iVar5 + 4) = uStack_34;
            }
            iVar5 = iVar5 + 8;
            local_1c = (SLodSamplePoint *)&local_1c->closest_triangle_idx;
            local_18 = local_18 + 1;
          } while (local_18 < g_SamplePointCount);
        }
      }
    } while (iVar6 < iVar1 << 2);
  }
  return;
}
