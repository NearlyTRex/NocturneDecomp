// Name: FUN_00413d50
// Address: 00413d50
// Address Range: [[00413d50, 00413e2d]]
// Convention: unknown
// Signature: void FUN_00413d50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00413d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00560d70();
  FUN_0040d6f0(param_1 + 4,0,0,0xffff);
  iVar1 = param_1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20) + 1; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar1 + 0x98) == 1) {
      FUN_0040d6f0(iVar2 * 0x2c + param_1 + 0x70,*(uint *)(iVar1 + 0x88),
                   *(uint *)(iVar1 + 0x8c),0xffff);
    }
    iVar1 = iVar1 + 0x2c;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0040d6f0(0x7e0060,_DAT_01c5fadc - *(int *)(param_1 + 0x918),
                 _DAT_01c5fae0 - *(int *)(param_1 + 0x92c),0xffff);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_0040d6f0(iVar1 * 0x14 + 0x7e0010,_DAT_01c5fadc - *(int *)(param_1 + 0x908 + iVar1 * 4),
               _DAT_01c5fae0 - *(int *)(param_1 + 0x91c + iVar1 * 4),0xffff);
  return;
}
