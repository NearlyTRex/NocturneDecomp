// Name: FUN_00534040
// Address: 00534040
// Address Range: [[00534040, 005340af]]
// Convention: unknown
// Signature: void FUN_00534040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00534040(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (*(int *)(0x01CB6900 + 0x20c) == 0) {
    if (*(int *)(0x01CB6900 + 0x210) != 0) {
      iVar1 = FUN_0046b960(DAT_0060b280);
      if (iVar1 == 0) {
        FUN_00533a80(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    FUN_0046bff0(DAT_0060b280,param_2,param_3,param_4);
  }
  return;
}
