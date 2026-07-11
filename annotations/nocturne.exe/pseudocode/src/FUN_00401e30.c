// Name: FUN_00401e30
// Address: 00401e30
// Address Range: [[00401e30, 00401ec6]]
// Convention: unknown
// Signature: void FUN_00401e30(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401e30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c00c60 = param_3;
  _DAT_01c00c64 = param_4;
  _DAT_01c00c5c = param_2;
  _DAT_01c00c68 = (param_3 - param_1) + 1;
  _DAT_01c00c6c = (param_4 - param_2) + 1;
  iVar1 = (_DAT_01c00c68 / 2 & 0xffffU) - 1;
  _DAT_01c00c58 = param_1;
  iVar2 = (_DAT_01c00c6c / 2 & 0xffffU) - 1;
  _DAT_01c00c48 = iVar1 * 0x10000;
  _DAT_01c00c50 = (iVar1 + param_1 + 1) * 0x10000;
  _DAT_01c00c4c = iVar2 * -0x10000;
  _DAT_01c00c54 = (iVar2 + param_2 + 1) * 0x10000;
  return;
}
