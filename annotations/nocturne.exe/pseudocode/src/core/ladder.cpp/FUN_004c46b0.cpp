// Name: core_ladder.cpp_FUN_004c46b0
// Address: 004c46b0
// Address Range: [[004c46b0, 004c47b9]]
// Convention: unknown
// Signature: void core_ladder_cpp_FUN_004c46b0(int param_1)

#include "nocturne.h"

void core_ladder_cpp_FUN_004c46b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  byte local_e4 [48];
  byte local_b4 [48];
  uint local_84 [3];
  uint local_78;
  uint local_68;
  uint local_58;
  uint local_54 [12];
  uint local_24;
  uint local_20;
  uint local_1c;
  byte local_18 [12];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (local_e4,param_1 + 0x20,param_1 + 0x30);
    core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
              (local_b4,*(int *)(param_1 + 0x2d8) + 0x20,*(int *)(param_1 + 0x2d8) + 0x30);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(local_e4,local_b4);
    puVar1 = local_54;
    puVar3 = local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_24 = local_78;
    local_20 = local_68;
    local_1c = local_58;
    if ((uint *)(param_1 + 0x2dc) != &local_24) {
      *(uint *)(param_1 + 0x2dc) = local_78;
      *(uint *)(param_1 + 0x2e0) = local_68;
      *(uint *)(param_1 + 0x2e4) = local_58;
    }
    puVar1 = (uint *)core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_84,local_18);
    if ((uint *)(param_1 + 0x2e8) != puVar1) {
      *(uint *)(param_1 + 0x2e8) = *puVar1;
      *(uint *)(param_1 + 0x2ec) = puVar1[1];
      *(uint *)(param_1 + 0x2f0) = puVar1[2];
      return;
    }
  }
  return;
}
