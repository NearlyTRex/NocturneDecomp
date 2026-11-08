// Name: FUN_0053a8e0
// Address: 0053a8e0
// Address Range: [[0053a8e0, 0053ac60]]
// Convention: unknown
// Signature: void FUN_0053a8e0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053a8e0(int param_1,uint param_2)

{
  int iVar1;
  byte local_110 [256];
  
  FUN_0053a870(param_1);
  if (10 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
  }
  FUN_005b9600(local_110,0xff,param_2);
  FUN_005ba8cc(local_110,&DAT_005e60b1,param_1);
  if (10 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
  }
  FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x100,param_1 + 0x104,param_1 + 0x108);
  if (10 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
  }
  FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x10c,param_1 + 0x114,param_1 + 0x110);
  if (10 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
  }
  FUN_005b8100(param_2,&DAT_005e60c9,param_1 + 0x144);
  FUN_005b9600(local_110,0xff,param_2);
  FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x118,param_1 + 0x11c,param_1 + 0x120);
  FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x124,param_1 + 0x128,param_1 + 300);
  FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x130,param_1 + 0x134,param_1 + 0x138);
  iVar1 = 0x01E661B8;
  if (*(int *)(0x01E661B8 + 0x15acc0) < 0x12) {
    *(uint *)(param_1 + 0x150) = 1;
    *(uint *)(param_1 + 0x154) = *(uint *)(iVar1 + 0x15ac40);
    *(uint *)(param_1 + 0x158) = *(uint *)(iVar1 + 0x15ac44);
    *(uint *)(param_1 + 0x15c) = *(uint *)(iVar1 + 0x15ac48);
    if ((uint *)(param_1 + 0x160) != (uint *)(iVar1 + 0x15ac4c)) {
      *(uint *)(param_1 + 0x160) = *(uint *)(iVar1 + 0x15ac4c);
      *(uint *)(param_1 + 0x164) = *(uint *)(iVar1 + 0x15ac50);
      *(uint *)(param_1 + 0x168) = *(uint *)(iVar1 + 0x15ac54);
    }
    *(uint *)(param_1 + 0x16c) = *(uint *)(iVar1 + 0x15ac58);
    *(uint *)(param_1 + 0x170) = *(uint *)(iVar1 + 0x15ac5c);
    *(uint *)(param_1 + 0x174) = *(uint *)(iVar1 + 0x15ac60);
  }
  else {
    FUN_005b8100(param_2,&DAT_005e60eb,param_1 + 0x150);
    if (*(int *)(param_1 + 0x150) == 0) {
      FUN_00443400((uint *)(param_1 + 0x154),param_2,*(uint *)(0x01E661B8 + 0x15acc0))
      ;
    }
  }
  if (0x16 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
    FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x17c,param_1 + 0x180,param_1 + 0x184);
    FUN_005b8100(param_2,"%f,%f,%f\n",param_1 + 0x188,param_1 + 0x18c,param_1 + 400);
  }
  if (0x16 < *(int *)(0x01E661B8 + 0x15acc0)) {
    FUN_005b9600(local_110,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005e6103,param_1 + 0x178);
  }
  if (*(int *)(0x01E661B8 + 0x15acc0) == 0x1b) {
    FUN_005b9600(local_110,0xff,param_2);
    FUN_005b8100(param_2,&DAT_005e6107,param_1 + 0x140);
    if (*(int *)(param_1 + 0x140) != 0) {
      _DAT_01d046a0 = "..\\core\\setutil.cpp";
      _DAT_01d046a4 = 0xd5;
      FUN_004e4500("Panning cameras not supported, bucko!");
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x140) = 0;
  }
  return;
}
