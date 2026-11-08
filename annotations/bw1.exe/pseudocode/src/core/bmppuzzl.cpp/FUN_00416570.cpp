// Name: FUN_00416570
// Address: 00416570
// Address Range: [[00416570, 00416614]]
// Convention: unknown
// Signature: void FUN_00416570(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416570(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9)

{
  int iVar1;
  
  FUN_0040d220(param_1 + 0x60 + param_2 * 0x2c,param_3,param_4,param_5);
  iVar1 = param_1 + param_2 * 0x2c;
  *(uint *)(iVar1 + 0x74) = param_6;
  *(uint *)(iVar1 + 0x78) = param_7;
  *(uint *)(iVar1 + 0x7c) = param_8;
  *(uint *)(iVar1 + 0x80) = param_4;
  *(uint *)(iVar1 + 0x84) = param_5;
  *(uint *)(iVar1 + 0x88) = param_9;
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 < 0x33) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\bmppuzzl.cpp";
  _DAT_01d1d404 = 0x299;
  FUN_005030e0("Too damn many buttons");
  return;
}
