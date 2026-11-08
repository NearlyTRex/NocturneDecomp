// Name: FUN_00460fa0
// Address: 00460fa0
// Address Range: [[00460fa0, 0046106c]]
// Convention: unknown
// Signature: void FUN_00460fa0(int param_1,byte *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460fa0(int param_1,byte *param_2)

{
  int iVar1;
  
  FUN_005b77c0(param_1,0,0x100);
  FUN_005b9cf0(param_1,param_2 + 0x2c,0xff);
  *(uint *)(param_1 + 0x100) = 0;
  if ((*param_2 & 0x20) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 1;
  }
  if ((*param_2 & 2) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 2;
  }
  if ((*param_2 & 0x10) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 4;
  }
  if ((*param_2 & 1) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
  }
  if ((*(int *)(param_2 + 0x1c) != 0) || (0x7fffffff < *(uint *)(param_2 + 0x20))) {
    _DAT_01d046a0 = "..\\engine\\dosio.c";
    _DAT_01d046a4 = 0x2ff;
    FUN_004e4500("CFileFinder::convertStruct - file too big!");
  }
  *(uint *)(param_1 + 0x104) = *(uint *)(param_2 + 0x20);
  iVar1 = FUN_005b9d26();
  *(int *)(param_1 + 0x108) = iVar1 + 0x49ef7d10;
  return;
}
