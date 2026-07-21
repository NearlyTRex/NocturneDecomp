// Name: core_chain.cpp_CChain_getBoundingBox_FUN_0042ca90
// Address: 0042ca90
// Address Range: [[0042ca90, 0042cbb6]]
// Convention: unknown
// Signature: undefined4 * core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * core_chain_cpp_CChain_getBoundingBox_FUN_0042ca90(int param_1,uint *param_2)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  float local_40;
  float local_3c;
  float local_38;
  byte local_34 [12];
  byte local_28 [12];
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = 9999.0;
  local_14 = 9999.0;
  local_40 = -9999.0;
  local_3c = -9999.0;
  local_38 = -9999.0;
  local_1c = 9999.0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    pfVar2 = (float *)(param_1 + 0x284);
    do {
      if (*pfVar2 < local_1c) {
        local_1c = *pfVar2;
      }
      if (pfVar2[1] < local_18) {
        local_18 = pfVar2[1];
      }
      if (pfVar2[2] < local_14) {
        local_14 = pfVar2[2];
      }
      if (local_40 < *pfVar2) {
        local_40 = *pfVar2;
      }
      if (local_3c < pfVar2[1]) {
        local_3c = pfVar2[1];
      }
      if (local_38 < pfVar2[2]) {
        local_38 = pfVar2[2];
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 9;
    } while (iVar3 < *(int *)(param_1 + 0x150));
  }
  puVar1 = (uint *)
           core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_34,&local_1c);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  puVar1 = (uint *)
           core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,local_28,&local_40);
  if (param_2 + 3 == puVar1) {
    return param_2;
  }
  param_2[3] = *puVar1;
  param_2[4] = puVar1[1];
  param_2[5] = puVar1[2];
  return param_2;
}
