// Name: FUN_00539c30
// Address: 00539c30
// Address Range: [[00539c30, 00539d4f]]
// Convention: unknown
// Signature: void FUN_00539c30(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539c30(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int *local_18;
  int local_14;
  
  iVar1 = FUN_00460c70(&DAT_005e6050,param_2,&DAT_005e604d);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x3cc;
    FUN_004e4500("Can't create %s",param_2);
  }
  local_14 = 0;
  if (0 < *param_1) {
    local_18 = param_1;
    local_1c = 0x2093d34;
    do {
      iVar4 = 1;
      if (local_18[0x51] != 0) {
        iVar4 = 6;
      }
      iVar3 = 0;
      iVar2 = local_1c;
      if (iVar4 != 0) {
        do {
          iVar3 = iVar3 + 1;
          FUN_00538670(iVar2,iVar1);
          iVar2 = iVar2 + 0x28;
        } while (iVar3 < iVar4);
      }
      local_1c = local_1c + 0xf0;
      local_18 = local_18 + 0x69;
      local_14 = local_14 + 1;
    } while (local_14 < *param_1);
  }
  if ((*(byte *)(iVar1 + 0xc) & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x3d7;
    FUN_004e4500("Error writing %s",param_2);
    FUN_005b89c0(iVar1);
    return;
  }
  FUN_005b89c0(iVar1);
  return;
}
