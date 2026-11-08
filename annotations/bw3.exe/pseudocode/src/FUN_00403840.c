// Name: FUN_00403840
// Address: 00403840
// Address Range: [[00403840, 00403911]]
// Convention: unknown
// Signature: int FUN_00403840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403840(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iStack_14;
  
  iVar1 = 0;
  DAT_005fba40 = 1;
  puVar2 = &DAT_0060b014 + (*(int *)(param_1 + 4) + DAT_007303e0) * 0xc;
  iVar3 = param_1 + 0xc;
  iStack_14 = 0;
  _DAT_00730414 = iVar3;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_005632a3(puVar2,iVar3);
      puVar2[0xb] = _DAT_01c6e24c;
      if ((*(byte *)((int)puVar2 + 0x13) & 0x80) == 0) {
        iStack_14 = iStack_14 + 1;
      }
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  if (DAT_007303e0 == 0) {
    _DAT_007303e4 = DAT_007303e0;
  }
  if (iStack_14 == *(int *)(param_1 + 8)) {
    DAT_005fba40 = 0;
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}
