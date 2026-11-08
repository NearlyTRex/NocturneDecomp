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
  
  _DAT_01c6b5b0 = param_3;
  _DAT_01c6b5b4 = param_4;
  _DAT_01c6b5ac = param_2;
  _DAT_01c6b5b8 = (param_3 - param_1) + 1;
  _DAT_01c6b5bc = (param_4 - param_2) + 1;
  iVar1 = (_DAT_01c6b5b8 / 2 & 0xffffU) - 1;
  _DAT_01c6b5a8 = param_1;
  iVar2 = (_DAT_01c6b5bc / 2 & 0xffffU) - 1;
  _DAT_01c6b598 = iVar1 * 0x10000;
  _DAT_01c6b5a0 = (iVar1 + param_1 + 1) * 0x10000;
  _DAT_01c6b59c = iVar2 * -0x10000;
  _DAT_01c6b5a4 = (iVar2 + param_2 + 1) * 0x10000;
  return;
}
