// Name: FUN_00431c30
// Address: 00431c30
// Address Range: [[00431c30, 00431cb4]]
// Convention: unknown
// Signature: undefined4 FUN_00431c30(int param_1)

#include "nocturne.h"

uint FUN_00431c30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  param_1 = param_1 + 0x158;
  uVar1 = FUN_00524a10(param_1,&DAT_005d5a90,3);
  iVar2 = FUN_005c1210(uVar1);
  if (iVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_00524a10(param_1,&DAT_005d5a94,4);
  iVar2 = FUN_005c1210(uVar1);
  if (iVar2 == 0) {
    return 2;
  }
  uVar1 = FUN_00524a10(param_1,"DEAD_POSSUM");
  iVar2 = FUN_005c04e0(uVar1);
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  return 0;
}
