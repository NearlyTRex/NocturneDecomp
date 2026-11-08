// Name: FUN_004ba2e0
// Address: 004ba2e0
// Address Range: [[004ba2e0, 004ba48e]]
// Convention: unknown
// Signature: void FUN_004ba2e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ba2e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_40;
  float local_3c;
  
  FUN_004b9960(param_1,param_2);
  if (*(int *)(param_1 + 0x32c) == 0) {
    iVar1 = DAT_005fba18 / 2;
    iVar2 = DAT_005fba1c / 2;
    iVar3 = _DAT_01c5fadc - iVar1;
    iVar4 = _DAT_01c5fae0 - iVar2;
    FUN_005809d0(iVar1,iVar2);
    if (*(int *)(0x01ED78C8 + 0x15aeb8) == _DAT_01d221fc) {
      local_3c = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005c2830 * (float)_DAT_005c2838 *
                 ((float)iVar3 / (float)iVar1);
      local_40 = (float)*(int *)(param_1 + 0xb8) * (float)_DAT_005c2830 *
                 ((float)iVar4 / (float)iVar2);
      if (local_3c < (float)_DAT_005c2840) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005c2840) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (*(int *)(param_1 + 0xac) != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c6cef0)[*(int *)(param_1 + 0x34)] == '\0') {
        if (ABS(*(float *)(param_2 + 0x2c)) < ABS(local_3c)) {
          *(float *)(param_2 + 0x2c) = local_3c;
        }
      }
      else if (ABS(*(float *)(param_2 + 0x28)) < ABS(local_3c)) {
        *(float *)(param_2 + 0x28) = local_3c;
      }
      if (ABS(*(float *)(param_2 + 0x30)) < ABS(local_40)) {
        *(float *)(param_2 + 0x30) = local_40;
        return;
      }
    }
  }
  return;
}
