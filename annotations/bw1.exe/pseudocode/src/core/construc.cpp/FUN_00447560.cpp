// Name: core_construc.cpp_FUN_00447560
// Address: 00447560
// Address Range: [[00447560, 0044762d]]
// Convention: unknown
// Signature: void core_construc_cpp_FUN_00447560(int param_1)

#include "nocturne.h"

void core_construc_cpp_FUN_00447560(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1800 [1525];
  CQuaternion4f local_24;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0xc394)) {
    puVar3 = (uint *)(param_1 + 0xc3d0);
    iVar2 = param_1;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005b7ed0
                ((CVector3f *)(*(int *)(iVar2 + 0xc3dc) + 0x30),&local_24);
      puVar5 = (uint *)(iVar2 + 0xc3b4 + (uint)bVar7 * -8);
      *(float *)(iVar2 + 0xc3b0) = local_24.w;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = (uint *)((int)&local_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *puVar5 = *(uint *)((int)&local_24 + (uint)bVar7 * -8 + 4);
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      *(uint *)(*(int *)(iVar2 + 0xc3dc) + 0xf24) = 0;
      iVar1 = *(int *)(iVar2 + 0xc3dc);
      if (puVar3 != (uint *)(iVar1 + 0x20)) {
        *puVar3 = *(uint *)(iVar1 + 0x20);
        puVar3[1] = *(uint *)(iVar1 + 0x24);
        puVar3[2] = *(uint *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      puVar3 = puVar3 + 0x12;
      iVar2 = iVar2 + 0x48;
    } while (local_14 < *(int *)(param_1 + 0xc394));
  }
  *(uint *)(param_1 + 0xca58) = 2;
  *(uint *)(param_1 + 0xca5c) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"stick-growl-distant.wav");
  return;
}
