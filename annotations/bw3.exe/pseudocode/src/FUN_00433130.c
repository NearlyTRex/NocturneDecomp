// Name: FUN_00433130
// Address: 00433130
// Address Range: [[00433130, 0043319c]]
// Convention: unknown
// Signature: void FUN_00433130(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00433130(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00409c80(param_1,param_2);
  FUN_0040d180(param_2,*(uint *)(param_1 + 0x2538));
  if (*(char *)(param_1 + 0x24a8) == '\0') {
    return;
  }
  FUN_0040d1c0(param_2,(char *)(param_1 + 0x24a8));
  uVar1 = FUN_004fc070(param_1 + 0x158);
  FUN_0040d1c0(param_2,uVar1);
  FUN_0040d180(param_2,*(uint *)(param_1 + 0x160));
  return;
}
