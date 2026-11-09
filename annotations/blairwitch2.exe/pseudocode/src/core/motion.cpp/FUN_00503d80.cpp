// Name: core_motion.cpp_FUN_00503d80
// Address: 00503d80
// Address Range: [[00503d80, 00503e57]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_00503d80(int *param_1,int param_2,float param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_motion_cpp_FUN_00503d80(int *param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_1c;
  
  iVar5 = *param_1 + 0x1c28 + param_2 * 0x118;
  fVar1 = *param_4 * *(float *)(iVar5 + 0x20) + param_3;
  iVar4 = 0;
  iVar3 = iVar5;
  local_1c = fVar1;
  if (0 < *(int *)(iVar5 + 0x70)) {
    do {
      fVar2 = (float)*(int *)(iVar3 + 0x74);
      if ((param_3 <= fVar2) && (fVar2 <= local_1c + (float)_DAT_005dfd28)) {
        local_1c = fVar2 + (float)_DAT_005dfd28;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(iVar5 + 0x70));
  }
  if ((float)*(int *)(iVar5 + 100) < local_1c) {
    local_1c = (float)*(int *)(iVar5 + 100);
  }
  if (local_1c < fVar1) {
    *param_4 = (local_1c - param_3) / *(float *)(iVar5 + 0x20);
    return;
  }
  return;
}
