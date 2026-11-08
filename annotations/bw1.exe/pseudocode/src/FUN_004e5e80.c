// Name: FUN_004e5e80
// Address: 004e5e80
// Address Range: [[004e5e80, 004e5f35]]
// Convention: unknown
// Signature: undefined4 FUN_004e5e80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e5e80(void)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (byte *)0x1cd0eac;
  do {
    if (0.0 < *(float *)(puVar2 + 0x24)) {
      (**(code **)(*(int *)(puVar2 + 0x3c) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x48;
  } while (puVar2 != &DAT_01cd56ac);
  iVar3 = 0;
  if (0 < _DAT_01cd56b0) {
    iVar4 = 0x1cd56b4;
    do {
      FUN_004e4f70(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x44;
    } while (iVar3 < _DAT_01cd56b0);
  }
  uVar1 = FUN_004e50e0(0x1cf69fc);
  iVar3 = 0;
  if (0 < _DAT_01cf69f8) {
    iVar4 = 0x1cf69fc;
    do {
      uVar1 = FUN_004e5540(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar3 < _DAT_01cf69f8);
  }
  return uVar1;
}
