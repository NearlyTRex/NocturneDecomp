// Name: core_chain.cpp_CChain_setup_FUN_0042b8f0
// Address: 0042b8f0
// Address Range: [[0042b8f0, 0042ba95]]
// Convention: unknown
// Signature: void core_chain_cpp_CChain_setup_FUN_0042b8f0(int param_1)

#include "nocturne.h"

void core_chain_cpp_CChain_setup_FUN_0042b8f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  byte auStack_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  if (*(int *)(param_1 + 0x15c) != 0) {
    pfVar8 = (float *)core_chain_cpp_CChain_getTargetBoneWorldPosition_FUN_0042b890
                                (param_1,auStack_3c);
    fVar1 = *pfVar8;
    fVar2 = *(float *)(param_1 + 0x20);
    fVar3 = pfVar8[1];
    fVar4 = *(float *)(param_1 + 0x24);
    fVar5 = pfVar8[2];
    fVar6 = *(float *)(param_1 + 0x28);
    local_30 = *(float *)(param_1 + 0x20);
    local_2c = *(float *)(param_1 + 0x24);
    local_28 = *(float *)(param_1 + 0x28);
    fVar7 = 1.0 / (float)(*(int *)(param_1 + 0x150) + -1);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x150)) {
      puVar12 = (uint *)(param_1 + 0x29c);
      puVar11 = (uint *)(param_1 + 0x290);
      do {
        pfVar8 = (float *)(iVar10 * 0x24 + param_1 + 0x284);
        if (pfVar8 != &local_30) {
          *pfVar8 = local_30;
          pfVar8[1] = local_2c;
          pfVar8[2] = local_28;
        }
        local_30 = local_30 + (fVar1 - fVar2) * fVar7;
        local_2c = local_2c + (fVar3 - fVar4) * fVar7;
        local_28 = local_28 + (fVar5 - fVar6) * fVar7;
        puVar11[2] = 0;
        puVar11[1] = puVar11[2];
        puVar9 = (uint *)(iVar10 * 0x24 + param_1 + 0x284);
        *puVar11 = puVar11[1];
        if (puVar12 != puVar9) {
          puVar11[3] = *puVar9;
          puVar11[4] = puVar9[1];
          puVar11[5] = puVar9[2];
        }
        puVar12 = puVar12 + 9;
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 9;
      } while (iVar10 < *(int *)(param_1 + 0x150));
    }
  }
  *(uint *)(param_1 + 0x210) = 0;
  *(uint *)(param_1 + 0x278) = 0;
  *(uint *)(param_1 + 0x27c) = 0;
  *(uint *)(param_1 + 0x564) = 0xc61c3f9a;
  *(uint *)(param_1 + 0x56c) = 0;
  *(float *)(param_1 + 0x158) =
       *(float *)(param_1 + 0x154) / (float)(*(int *)(param_1 + 0x150) + -1);
  return;
}
