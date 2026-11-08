// Name: FUN_004b80a0
// Address: 004b80a0
// Address Range: [[004b80a0, 004b824e]]
// Convention: unknown
// Signature: void FUN_004b80a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b80a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_40;
  float local_3c;
  
  FUN_004b76c0(param_1,param_2);
  if (*(int *)(param_1 + 0x29c) == 0) {
    iVar1 = DAT_006141b8 / 2;
    iVar2 = DAT_006141bc / 2;
    iVar3 = _DAT_01c2a37c - iVar1;
    iVar4 = _DAT_01c2a380 - iVar2;
    FUN_0058ed10(iVar1,iVar2);
    if (*(int *)(0x01E661B8 + 0x15aeb8) == _DAT_01cb7784) {
      local_3c = (float)*(int *)(param_1 + 0xb0) * (float)_DAT_005d78f3 * (float)_DAT_005d78fb *
                 ((float)iVar3 / (float)iVar1);
      local_40 = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005d78f3 *
                 ((float)iVar4 / (float)iVar2);
      if (local_3c < (float)_DAT_005d7903) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005d7903) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (*(int *)(param_1 + 0xa8) != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c37790)[*(int *)(param_1 + 0x34)] == '\0') {
        if (ABS(*(float *)(param_2 + 0x28)) < ABS(local_3c)) {
          *(float *)(param_2 + 0x28) = local_3c;
        }
      }
      else if (ABS(*(float *)(param_2 + 0x24)) < ABS(local_3c)) {
        *(float *)(param_2 + 0x24) = local_3c;
      }
      if (ABS(*(float *)(param_2 + 0x2c)) < ABS(local_40)) {
        *(float *)(param_2 + 0x2c) = local_40;
        return;
      }
    }
  }
  return;
}
