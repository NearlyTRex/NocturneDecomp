// Name: FUN_00438af0
// Address: 00438af0
// Address Range: [[00438af0, 00438c19]]
// Convention: unknown
// Signature: void FUN_00438af0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438af0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_18 [4];
  uint local_14;
  
  FUN_00438c20(param_1);
  iVar1 = FUN_00460c70(&DAT_005ce01c,param_2,&DAT_005ce019);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\core\\course.cpp";
    _DAT_01d046a4 = 0x7c;
    FUN_004e4500("CCourse::load - can't open data\\%s",param_2);
  }
  do {
    iVar2 = FUN_005b8180(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005b8100(iVar1,&DAT_005ce057,auStack_18);
  do {
    iVar2 = FUN_005b8180(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005b8100(iVar1,"%d,%d\n",&local_14,param_1 + 2);
  FUN_00438a90(param_1,local_14);
  do {
    iVar2 = FUN_005b8180(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      iVar3 = param_1[1] + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      FUN_005b8100(iVar1,"%f,%f,%f, %f,%f,%f,%f\n",iVar3,iVar3 + 4,iVar3 + 8,iVar3 + 0xc,iVar3 + 0x10
                   ,iVar3 + 0x14,iVar3 + 0x18);
    } while (iVar2 < *param_1);
  }
  FUN_005b89c0(iVar1);
  return;
}
