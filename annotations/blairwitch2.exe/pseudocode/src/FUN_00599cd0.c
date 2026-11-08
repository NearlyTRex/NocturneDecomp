// Name: FUN_00599cd0
// Address: 00599cd0
// Address Range: [[00599cd0, 00599cfd]]
// Convention: unknown
// Signature: undefined4 FUN_00599cd0(int param_1)

#include "nocturne.h"

uint FUN_00599cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    return 1;
  }
  uVar2 = FUN_0040c890(param_1);
  return uVar2;
}
