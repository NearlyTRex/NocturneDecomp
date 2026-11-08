// Name: FUN_00403890
// Address: 00403890
// Address Range: [[00403890, 00403961]]
// Convention: unknown
// Signature: int FUN_00403890(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403890(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iStack_14;
  
  iVar1 = 0;
  DAT_006141e0 = 1;
  puVar2 = &DAT_00622014 + (*(int *)(param_1 + 4) + DAT_0070ca60) * 0xc;
  iVar3 = param_1 + 0xc;
  iStack_14 = 0;
  _DAT_0070ca94 = iVar3;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_0055d723(puVar2,iVar3);
      puVar2[0xb] = _DAT_01c38aec;
      if ((*(byte *)((int)puVar2 + 0x13) & 0x80) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_0070ca60 == 0) {
    _DAT_0070ca64 = DAT_0070ca60;
  }
  if (iStack_14 == *(int *)(param_1 + 8)) {
    DAT_006141e0 = 0;
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}
