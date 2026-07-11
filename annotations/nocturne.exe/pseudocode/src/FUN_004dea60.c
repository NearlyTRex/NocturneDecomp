// Name: FUN_004dea60
// Address: 004dea60
// Address Range: [[004dea60, 004dead0]]
// Convention: unknown
// Signature: void FUN_004dea60(int *param_1)

#include "nocturne.h"

void FUN_004dea60(int *param_1)

{
  int iVar1;
  byte *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = (byte *)0x1ccdc64;
    FUN_0040e360(&DAT_01ccdc50);
    do {
      FUN_0040e360(puVar2);
      puVar2 = puVar2 + 0x14;
    } while (puVar2 != &DAT_01ccdebc);
    *param_1 = 0;
  }
  iVar1 = 0x1ccdec8;
  do {
    FUN_0043b7c0(iVar1);
    iVar1 = iVar1 + 0xc;
  } while (iVar1 != 0x1ccdeec);
  FUN_00452f10(param_1 + 2);
  FUN_00452f10(0x1cce1bc);
  return;
}
