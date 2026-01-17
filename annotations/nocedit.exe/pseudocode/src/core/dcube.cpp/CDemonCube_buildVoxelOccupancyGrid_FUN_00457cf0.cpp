// Name: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// Address: 00457cf0
// Address Range: [[00457cf0, 00457eaa]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams * params)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams *params)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar7 = 0;
  if (*(int *)params != 0) {
    local_64 = *(float *)(params + 0x14) - *(float *)(params + 8);
    local_60 = *(float *)(params + 0x18) - *(float *)(params + 0xc);
    local_5c = *(float *)(params + 0x1c) - *(float *)(params + 0x10);
    if (&local_40 != &local_64) {
      local_40 = local_64;
      local_3c = local_60;
      local_38 = local_5c;
    }
    local_34 = local_40 / 8.0f;
    local_30 = local_3c * 0.125f;
    local_2c = local_38 * 0.125f;
    if (&local_28 != &local_34) {
      local_28 = local_34;
      local_24 = local_30;
      local_20 = local_2c;
    }
    local_1c = 0;
    local_18 = 0;
    do {
      iVar4 = 0;
      local_4c.z = (float)local_18 * local_20 + *(float *)(params + 0x10);
      local_14 = local_1c;
      local_58.z = local_4c.z + local_20;
      local_10 = local_1c;
      do {
        iVar1 = local_14;
        local_4c.y = (float)iVar4 * local_24 + *(float *)(params + 0xc);
        local_58.y = local_4c.y + local_24;
        iVar3 = 0;
        *(byte *)(*(int *)params + local_10) = 0;
        do {
          local_4c.x = (float)iVar3 * local_28 + *(float *)(params + 8);
          local_58.x = local_4c.x + local_28;
          local_c = iVar3;
          iVar2 = core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
                            ((CDemonCube *)params,&local_4c,&local_58);
          if (iVar2 != 0) {
            *(byte *)(iVar1 + *(int *)params) =
                 *(byte *)(iVar1 + *(int *)params) | g_VoxelGridBitmasks[iVar3];
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 8);
        iVar4 = iVar4 + 1;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (iVar4 < 8);
      local_18 = local_18 + 1;
      local_1c = local_1c + 8;
    } while (local_18 < 8);
    puVar5 = *(uint **)params;
    puVar6 = *(uint **)(params + 4);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
  }
  return;
}
