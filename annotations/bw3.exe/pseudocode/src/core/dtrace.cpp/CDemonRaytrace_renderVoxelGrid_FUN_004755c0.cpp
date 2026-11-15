// Name: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004755c0
// Address: 004755c0
// Address Range: [[004755c0, 00475711]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004755c0(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_004755c0(CDemonRaytrace *this_ptr,uchar *voxel_data,int grid_x,int grid_y,int grid_z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CVector3f CStack_34;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar1 = (this_ptr->cell_size).x;
  fVar2 = (this_ptr->cell_size).y;
  fVar3 = (this_ptr->cell_size).z;
  iStack_1c = 0;
  fVar4 = (this_ptr->bbox_min).x;
  iStack_28 = 0;
  fVar5 = (this_ptr->bbox_min).y;
  fVar6 = (this_ptr->bbox_min).z;
  do {
    iVar8 = 0;
    iStack_24 = iStack_28;
    iStack_20 = iStack_28;
    do {
      if ((*(int *)voxel_data != 0) && (*(char *)(*(int *)voxel_data + iStack_24) != '\0')) {
        iVar7 = 0;
        iStack_18 = iStack_20;
        do {
          if ((*(byte *)(*(int *)voxel_data + iStack_18) & (&DAT_005fb0e8)[iVar7]) != 0) {
            CStack_34.x = (float)iVar7 * (this_ptr->cell_size).x * _DAT_005bca25 +
                          (float)grid_x * fVar1 + fVar4;
            iStack_14 = iStack_1c;
            CStack_34.y = (float)iVar8 * (this_ptr->cell_size).y * _DAT_005bca25 +
                          (float)grid_y * fVar2 + fVar5;
            CStack_34.z = (float)iStack_1c * (this_ptr->cell_size).z * _DAT_005bca25 +
                          (float)grid_z * fVar3 + fVar6;
            core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00475090(this_ptr,&CStack_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      iStack_20 = iStack_20 + 1;
      iStack_24 = iStack_24 + 1;
    } while (iVar8 < 8);
    iStack_1c = iStack_1c + 1;
    iStack_28 = iStack_28 + 8;
  } while (iStack_1c < 8);
  return;
}
