// Name: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
// Address: 004973b0
// Address Range: [[004973b0, 004974ff]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0(CDemonRaytrace * this_ptr, uchar * voxel_data, int grid_x, int grid_y, int grid_z)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0
          (CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar1 = (this_ptr->cell_size).x;
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = (this_ptr->cell_size).y;
  fVar4 = (this_ptr->bbox_min).y;
  fVar5 = (this_ptr->cell_size).z;
  local_1c = 0;
  fVar6 = (this_ptr->bbox_min).z;
  local_28 = 0;
  do {
    iVar8 = 0;
    local_24 = local_28;
    local_20 = local_28;
    do {
      if ((*(int *)voxel_data != 0) && (*(char *)(*(int *)voxel_data + local_24) != '\0')) {
        iVar7 = 0;
        local_18 = local_20;
        do {
          if ((*(byte *)(*(int *)voxel_data + local_18) & g_VoxelYBitMasks[iVar7]) != 0) {
            local_34.x = (float)iVar7 * (this_ptr->cell_size).x * 0.125f +
                         (float)grid_x * fVar1 + fVar2;
            local_14 = local_1c;
            local_34.y = (float)iVar8 * (this_ptr->cell_size).y * 0.125f +
                         (float)grid_y * fVar3 + fVar4;
            local_34.z = (float)local_1c * (this_ptr->cell_size).z * 0.125f +
                         (float)grid_z * fVar5 + fVar6;
            core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(this_ptr,&local_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (iVar8 < 8);
    local_1c = local_1c + 1;
    local_28 = local_28 + 8;
  } while (local_1c < 8);
  return;
}
