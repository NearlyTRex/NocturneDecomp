// Name: FUN_0042ff70
// Address: 0042ff70
// Address Range: [[0042ff70, 0042ffda]]
// Convention: unknown
// Signature: void FUN_0042ff70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042ff70(int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"glass-1.wav@2.0");
  if (*(char *)(param_1 + 0x24a8) != '\0') {
    FUN_0054f7f0(param_1 + 0x158,param_1 + 0x20,param_1 + 0x30,0);
  }
  iVar1 = FUN_0040c840(param_1,_DAT_01c5bc48);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x70) = 2;
    return;
  }
  FUN_00489c90(iVar1);
  *(uint *)(param_1 + 0x70) = 2;
  return;
}
