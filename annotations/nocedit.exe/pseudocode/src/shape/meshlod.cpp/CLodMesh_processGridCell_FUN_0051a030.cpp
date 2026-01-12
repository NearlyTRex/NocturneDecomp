// Name: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// Address: 0051a030
// Address Range: [[0051a030, 0051a146]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh * this_ptr, int grid_x, int grid_y, int grid_z)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
          (CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int iVar1;
  int iVar2;
  CLodFace *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  CLodFace *face;
  double dStack_34;
  uint uStack_30;
  ulonglong local_28;
  CLodMesh *local_18;
  int iStack_14;
  
  piVar4 = this_ptr->spatial_grid_ptr->cell_start_indices[grid_x][grid_y] + grid_z;
  iVar6 = *piVar4;
  iVar1 = piVar4[1];
  if (iVar6 < iVar1) {
    iVar6 = iVar6 * 4;
    do {
      iVar2 = *(int *)(iVar6 + (int)this_ptr->spatial_grid_data);
      pCVar3 = this_ptr->tri_data;
      iVar6 = iVar6 + 4;
      if ((pCVar3[iVar2].processed_flag == 0) &&
         (g_LodGenerationStamp != pCVar3[iVar2].visited_stamp)) {
        pCVar3[iVar2].visited_stamp = g_LodGenerationStamp;
        iVar5 = 0;
        iStack_14 = 0;
        if (0 < g_SamplePointCount) {
          local_28 = (double)((ulonglong)(uint)(iVar2 * 0x8c) << 0x20);
          local_18 = (CLodMesh *)g_SamplePointArray;
          do {
            local_28 = shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                                 (local_18,(SLodSamplePoint *)
                                           ((int)this_ptr->tri_data->attribute_indices +
                                           local_28._4_4_),face);
            if (local_28 < *(double *)((int)g_SampleDistances + iVar5)) {
              face = SUB84 /* extract 2-byte value */(local_28,0);
              *(CLodFace **)((int)g_SampleDistances + iVar5) = face;
              uStack_30 = (uint)((ulonglong)local_28 >> 0x20);
              *(uint *)((int)g_SampleDistances + iVar5 + 4) = uStack_30;
            }
            iVar5 = iVar5 + 8;
            local_18 = (CLodMesh *)&local_18->tri_data;
            iStack_14 = iStack_14 + 1;
            dStack_34 = local_28;
          } while (iStack_14 < g_SamplePointCount);
        }
      }
    } while (iVar6 < iVar1 << 2);
  }
  return;
}
