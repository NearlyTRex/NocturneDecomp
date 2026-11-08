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
  
  _DAT_01c35e50 = param_3;
  _DAT_01c35e54 = param_4;
  _DAT_01c35e4c = param_2;
  _DAT_01c35e58 = (param_3 - param_1) + 1;
  _DAT_01c35e5c = (param_4 - param_2) + 1;
  iVar1 = (_DAT_01c35e58 / 2 & 0xffffU) - 1;
  _DAT_01c35e48 = param_1;
  iVar2 = (_DAT_01c35e5c / 2 & 0xffffU) - 1;
  _DAT_01c35e38 = iVar1 * 0x10000;
  _DAT_01c35e40 = (iVar1 + param_1 + 1) * 0x10000;
  _DAT_01c35e3c = iVar2 * -0x10000;
  _DAT_01c35e44 = (iVar2 + param_2 + 1) * 0x10000;
  return;
}
