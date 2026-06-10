// Name: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// Address: 0051a030
// MANUAL RECONSTRUCTION
// Address Range: [[0051a030, 0051a146]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int *piVar4;
  int iVar6;
  double dVar7;
  int local_18;
  int iVar1;
  int iVar2;
  CLodFace *pCVar3;

  piVar4 = this_ptr->spatial_grid_ptr->cell_start_indices[grid_x][grid_y] + grid_z;
  iVar1 = piVar4[1];
  for (iVar6 = piVar4[0]; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    iVar2 = this_ptr->spatial_grid_data[iVar6];
    pCVar3 = this_ptr->tri_data;
    if ((pCVar3[iVar2].processed_flag == 0) &&
       (g_LodGenerationStamp != pCVar3[iVar2].visited_stamp)) {
      pCVar3[iVar2].visited_stamp = g_LodGenerationStamp;
      for (local_18 = 0; local_18 < g_SamplePointCount; local_18 = local_18 + 1) {
        dVar7 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                          (this_ptr,(SLodSamplePoint *)(g_SamplePointArray + local_18),
                           this_ptr->tri_data + iVar2);
        if (dVar7 < g_SampleDistances[local_18]) {
          g_SampleDistances[local_18] = dVar7;
        }
      }
    }
  }
  return;
}
