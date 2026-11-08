// Name: FUN_00538470
// Address: 00538470
// Address Range: [[00538470, 0053866c]]
// Convention: unknown
// Signature: void FUN_00538470(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00538470(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  FUN_005386a0(param_1);
  if (param_1 + 2 != param_2) {
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
    param_1[4] = param_2[2];
  }
  if (param_1 + 5 != param_3) {
    param_1[5] = *param_3;
    param_1[6] = param_3[1];
    param_1[7] = param_3[2];
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[8] = param_6;
  iVar1 = FUN_005b8580(*param_1 * param_1[1] * 4);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x9f;
    FUN_004e4500("Out of memory");
  }
  if (param_7 != 0) {
    FUN_005b87c0(param_1[9],*param_1 * param_1[1],4,param_7);
    return;
  }
  uVar2 = FUN_0046b960(DAT_0060b280);
  FUN_0046b940(DAT_0060b280,0);
  iVar1 = param_1[1];
  if (_DAT_020b0258 != 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x67;
    FUN_004e4500("saveZBufferTable - already saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)(&DAT_020b0258 + iVar4) = *(uint *)(&DAT_01c2b64c + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  FUN_00538970(param_1);
  FUN_005389b0(param_1);
  FUN_0046b280(DAT_0060b280,0x2093940);
  FUN_0055b254();
  FUN_0052d0e0(0x01E661B8,0x461c3f9a,0);
  FUN_00538a30(param_1);
  iVar1 = param_1[1];
  if (_DAT_020b0258 == 0) {
    _DAT_01d046a0 = "..\\core\\setdir.cpp";
    _DAT_01d046a4 = 0x70;
    FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)(&DAT_01c2b64c + iVar4) = *(uint *)(&DAT_020b0258 + iVar4);
      iVar4 = iVar3;
    } while (iVar3 < iVar1 * 4);
  }
  _DAT_020b0258 = 0;
  FUN_0046b940(DAT_0060b280,uVar2);
  return;
}
