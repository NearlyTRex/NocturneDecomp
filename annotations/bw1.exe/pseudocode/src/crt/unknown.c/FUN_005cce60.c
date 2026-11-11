// Name: crt_unknown.c_FUN_005cce60
// Address: 005cce60
// Address Range: [[005cce60, 005ccecb]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005cce60(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005cce60(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626628)();
  uVar3 = 1;
  puVar1 = (uint *)calloc(1,0x10);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_005ce000(param_2);
    if (iVar2 == 0) {
      puVar1[2] = param_2;
      puVar1[1] = param_1;
      puVar1[3] = (uint)*(byte *)(param_2 + 0x52);
      *puVar1 = _DAT_02c9ffa0;
      _DAT_02c9ffa0 = puVar1;
    }
    else {
      FUN_005c09f0(puVar1);
      uVar3 = 0;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_0062662c)();
  return uVar3;
}
