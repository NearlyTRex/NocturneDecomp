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
  double in_stack_ffffffc8;
  uint local_30;
  ulonglong uStack_2c;
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
        if (0 < g_SamplePointCount) {
          uStack_2c = (double)((ulonglong)(uint)(iVar2 * 0x8c) << 0x20);
          do {
            in_stack_ffffffc8 =
                 shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                           ((CLodMesh *)g_SamplePointArray,
                            (SLodSamplePoint *)
                            ((int)this_ptr->tri_data->attribute_indices + uStack_2c._4_4_),
                            SUB84 /* extract 2-byte value */(in_stack_ffffffc8,0));
            if (in_stack_ffffffc8 < *(double *)((int)g_SampleDistances + iVar5)) {
              *(int *)((int)g_SampleDistances + iVar5) = SUB84 /* extract 2-byte value */(in_stack_ffffffc8,0);
              *(uint *)((int)g_SampleDistances + iVar5 + 4) = local_30;
            }
            iVar5 = iVar5 + 8;
            iStack_14 = iStack_14 + 1;
            uStack_2c = in_stack_ffffffc8;
          } while (iStack_14 < g_SamplePointCount);
        }
      }
    } while (iVar6 < iVar1 << 2);
  }
  return;
}
