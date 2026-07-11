// Name: FUN_00428710
// Address: 00428710
// Address Range: [[00428710, 00428770]]
// Convention: unknown
// Signature: undefined4 FUN_00428710(int param_1)

#include "nocturne.h"

uint FUN_00428710(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  uVar1 = FUN_004e18a0(param_1 + 0x150,&DAT_0057a04a,3);
  iVar2 = FUN_00564bc0(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_004e18a0(param_1 + 0x150,&DAT_0057a04e);
  iVar2 = FUN_00564520(uVar1);
  if (iVar2 == 0) {
    return 2;
  }
  return 0;
}
