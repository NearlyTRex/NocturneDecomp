// Name: FUN_100098f0
// Address: 100098f0
// Address Range: [[100098f0, 10009920]]
// Convention: unknown
// Signature: uint * FUN_100098f0(void)

#include "nocturne.h"

uint * FUN_100098f0(void)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  
  piVar2 = (int *)FUN_1000bdf0();
  iVar1 = *piVar2;
  puVar3 = (uint *)__setdefaultprecision();
  if ((iVar1 != 0) && (puVar3 = *(uint **)(iVar1 + 4), (*puVar3 & 0x10008) != 0)) {
    puVar3[8] = 0;
    puVar3[9] = 0xffff;
    puVar3 = puVar3 + 7;
  }
  return puVar3;
}
