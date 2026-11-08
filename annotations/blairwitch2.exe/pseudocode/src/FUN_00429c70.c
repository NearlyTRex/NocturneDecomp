// Name: FUN_00429c70
// Address: 00429c70
// Address Range: [[00429c70, 00429cdc]]
// Convention: unknown
// Signature: void FUN_00429c70(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00429c70(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00409df0(param_1,param_2);
  FUN_0040d2a0(param_2,*(uint *)(param_1 + 0x25a8));
  if (*(char *)(param_1 + 0x2514) == '\0') {
    return;
  }
  FUN_0040d2e0(param_2,(char *)(param_1 + 0x2514));
  uVar1 = FUN_005035c0(param_1 + 0x2b4);
  FUN_0040d2e0(param_2,uVar1);
  FUN_0040d2a0(param_2,*(uint *)(param_1 + 700));
  return;
}
