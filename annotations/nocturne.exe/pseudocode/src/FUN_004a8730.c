// Name: FUN_004a8730
// Address: 004a8730
// Address Range: [[004a8730, 004a88ce]]
// Convention: unknown
// Signature: int FUN_004a8730(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a8730(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte local_4c [12];
  byte local_40 [12];
  byte local_34 [12];
  byte local_28 [12];
  byte local_1c [12];
  
  iVar3 = 1;
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_4c,_DAT_01c78b18);
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd24) * 4) != 0) {
    puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_40,_DAT_01c78b2c);
    if (param_2 + 3 != puVar1) {
      param_2[3] = *puVar1;
      param_2[4] = puVar1[1];
      param_2[5] = puVar1[2];
    }
    iVar3 = 2;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd2c) * 4) != 0) {
    puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_34,_DAT_01c78b30);
    puVar2 = param_2 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd44) * 4) != 0) {
    puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_1c,_DAT_01c78b3c);
    puVar2 = param_2 + iVar3 * 3;
    if (puVar2 != puVar1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd48) * 4) == 0) {
    return iVar3;
  }
  puVar1 = (uint *)FUN_0051d380(param_1 + 0x150,local_28,_DAT_01c78b44);
  param_2 = param_2 + iVar3 * 3;
  if (param_2 != puVar1) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
  }
  return iVar3 + 1;
}
