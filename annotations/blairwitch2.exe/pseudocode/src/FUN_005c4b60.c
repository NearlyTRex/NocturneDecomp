// Name: FUN_005c4b60
// Address: 005c4b60
// Address Range: [[005c4b60, 005c4bcb]]
// Convention: unknown
// Signature: undefined4 FUN_005c4b60(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005c4b60(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_0061f2d0)();
  uVar3 = 1;
  puVar1 = (uint *)FUN_005b98d0(1,0x10);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_005c5d00(param_2);
    if (iVar2 == 0) {
      puVar1[2] = param_2;
      puVar1[1] = param_1;
      puVar1[3] = (uint)*(byte *)(param_2 + 0x52);
      *puVar1 = _DAT_026810b0;
      _DAT_026810b0 = puVar1;
    }
    else {
      FUN_005b86a0(puVar1);
      uVar3 = 0;
    }
  }
  (*(code *)PTR_FUN_0061f2d4)();
  return uVar3;
}
