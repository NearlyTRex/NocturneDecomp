// Name: core_dcube.cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0
// Address: 00457cf0
// Address Range: [[00457cf0, 00457eaa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams *params)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(SVoxelGridParams *params)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
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
  
  bVar8 = 0;
  if (params->unk != 0) {
    local_64 = (float)params[5].unk - (float)params[2].unk;
    local_60 = (float)params[6].unk - (float)params[3].unk;
    local_5c = (float)params[7].unk - (float)params[4].unk;
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
      iVar5 = 0;
      local_4c.z = (float)local_18 * local_20 + (float)params[4].unk;
      local_14 = local_1c;
      local_58.z = local_4c.z + local_20;
      local_10 = local_1c;
      do {
        iVar2 = local_14;
        local_4c.y = (float)iVar5 * local_24 + (float)params[3].unk;
        local_58.y = local_4c.y + local_24;
        iVar4 = 0;
        *(byte *)(params->unk + local_10) = 0;
        do {
          local_4c.x = (float)iVar4 * local_28 + (float)params[2].unk;
          local_58.x = local_4c.x + local_28;
          local_c = iVar4;
          iVar3 = core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
                            ((CDemonCube *)params,&local_4c,&local_58);
          if (iVar3 != 0) {
            pbVar1 = (byte *)(iVar2 + params->unk);
            *pbVar1 = *pbVar1 | g_VoxelGridBitmasks[iVar4];
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        iVar5 = iVar5 + 1;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (iVar5 < 8);
      local_18 = local_18 + 1;
      local_1c = local_1c + 8;
    } while (local_18 < 8);
    puVar6 = (uint *)params->unk;
    puVar7 = (uint *)params[1].unk;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(byte *)puVar7 = *(byte *)puVar6;
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
      puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
    }
  }
  return;
}
