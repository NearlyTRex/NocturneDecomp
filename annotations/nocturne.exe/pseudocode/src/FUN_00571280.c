// Name: FUN_00571280
// Address: 00571280
// Address Range: [[00571280, 005712eb]]
// Convention: unknown
// Signature: undefined4 FUN_00571280(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00571280(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_005c1ae8)();
  uVar3 = 1;
  puVar1 = (uint *)FUN_00565c50(1,0x10);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00572e90(param_2);
    if (iVar2 == 0) {
      puVar1[2] = param_2;
      puVar1[1] = param_1;
      puVar1[3] = (uint)*(byte *)(param_2 + 0x52);
      *puVar1 = _DAT_02de5d70;
      _DAT_02de5d70 = puVar1;
    }
    else {
      FUN_005638d0(puVar1);
      uVar3 = 0;
    }
  }
  (*(code *)PTR_FUN_005c1aec)();
  return uVar3;
}
