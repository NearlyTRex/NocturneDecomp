// Name: FUN_004d1820
// Address: 004d1820
// Address Range: [[004d1820, 004d19ce]]
// Convention: unknown
// Signature: void FUN_004d1820(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d1820(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_40;
  float local_3c;
  
  FUN_004d0ee0(param_1,param_2);
  if (*(int *)(param_1 + 0x2ac) == 0) {
    iVar1 = DAT_0061b498 / 2;
    iVar2 = DAT_0061b49c / 2;
    iVar3 = _DAT_01c4353c - iVar1;
    iVar4 = _DAT_01c43540 - iVar2;
    FUN_005b2750(iVar1,iVar2);
    if (*(int *)(0x01E82168 + 0x15aeb8) == _DAT_01cd01f4) {
      local_3c = (float)*(int *)(param_1 + 0xb0) * (float)_DAT_005e19f4 * (float)_DAT_005e19fc *
                 ((float)iVar3 / (float)iVar1);
      local_40 = (float)*(int *)(param_1 + 0xb4) * (float)_DAT_005e19f4 *
                 ((float)iVar4 / (float)iVar2);
      if (local_3c < (float)_DAT_005e1a04) {
        local_3c = -1.0;
      }
      if (1.0 < local_3c) {
        local_3c = 1.0;
      }
      if (local_40 < (float)_DAT_005e1a04) {
        local_40 = -1.0;
      }
      if (1.0 < local_40) {
        local_40 = 1.0;
      }
      if (*(int *)(param_1 + 0xa8) != 0) {
        local_40 = -local_40;
      }
      if ((&DAT_01c50950)[*(int *)(param_1 + 0x34)] == '\0') {
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
