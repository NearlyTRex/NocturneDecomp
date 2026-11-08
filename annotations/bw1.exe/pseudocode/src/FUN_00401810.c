// Name: FUN_00401810
// Address: 00401810
// Address Range: [[00401810, 004018a6]]
// Convention: unknown
// Signature: void FUN_00401810(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401810(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  _DAT_01c4f010 = param_3;
  _DAT_01c4f014 = param_4;
  _DAT_01c4f00c = param_2;
  _DAT_01c4f018 = (param_3 - param_1) + 1;
  _DAT_01c4f01c = (param_4 - param_2) + 1;
  iVar1 = (_DAT_01c4f018 / 2 & 0xffffU) - 1;
  _DAT_01c4f008 = param_1;
  iVar2 = (_DAT_01c4f01c / 2 & 0xffffU) - 1;
  _DAT_01c4eff8 = iVar1 * 0x10000;
  _DAT_01c4f000 = (iVar1 + param_1 + 1) * 0x10000;
  _DAT_01c4effc = iVar2 * -0x10000;
  _DAT_01c4f004 = (iVar2 + param_2 + 1) * 0x10000;
  return;
}
