// Name: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240
// Address: 00469240
// Address Range: [[00469240, 0046938f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
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
          if ((*(byte *)(*(int *)voxel_data + local_18) & (&DAT_005b6d08)[iVar7]) != 0) {
            local_34.x = (float)iVar7 * (this_ptr->cell_size).x * _DAT_0057e1fa +
                         (float)grid_x * fVar1 + fVar2;
            local_14 = local_1c;
            local_34.y = (float)iVar8 * (this_ptr->cell_size).y * _DAT_0057e1fa +
                         (float)grid_y * fVar3 + fVar4;
            local_34.z = (float)local_1c * (this_ptr->cell_size).z * _DAT_0057e1fa +
                         (float)grid_z * fVar5 + fVar6;
            core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(this_ptr,&local_34);
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
