// Name: FUN_00418140
// Address: 00418140
// Address Range: [[00418140, 0041821d]]
// Convention: unknown
// Signature: void FUN_00418140(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418140(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0057dc40();
  FUN_0040d4b0(param_1 + 4,0,0,0xffff);
  iVar1 = param_1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x20) + 1; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar1 + 0x98) == 1) {
      FUN_0040d4b0(iVar2 * 0x2c + param_1 + 0x70,*(uint *)(iVar1 + 0x88),
                   *(uint *)(iVar1 + 0x8c),0xffff);
    }
    iVar1 = iVar1 + 0x2c;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0040d4b0(0x7c3a24,_DAT_01c4353c - *(int *)(param_1 + 0x918),
                 _DAT_01c43540 - *(int *)(param_1 + 0x92c),0xffff);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_0040d4b0(iVar1 * 0x14 + 0x7c39d4,_DAT_01c4353c - *(int *)(param_1 + 0x908 + iVar1 * 4),
               _DAT_01c43540 - *(int *)(param_1 + 0x91c + iVar1 * 4),0xffff);
  return;
}
