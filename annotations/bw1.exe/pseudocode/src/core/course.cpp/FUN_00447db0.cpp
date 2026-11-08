// Name: FUN_00447db0
// Address: 00447db0
// Address Range: [[00447db0, 00447ed9]]
// Convention: unknown
// Signature: void FUN_00447db0(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447db0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_18 [4];
  uint local_14;
  
  FUN_00447ee0(param_1);
  iVar1 = FUN_00479180(&DAT_005d7188,param_2,&DAT_005d7185);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\course.cpp";
    _DAT_01d1d404 = 0x7c;
    FUN_005030e0("CCourse::load - can't open data\\%s",param_2);
  }
  do {
    iVar2 = FUN_005c0530(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005c04b0(iVar1,&DAT_005d71c3,auStack_18);
  do {
    iVar2 = FUN_005c0530(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005c04b0(iVar1,"%d,%d\n",&local_14,param_1 + 2);
  FUN_00447d50(param_1,local_14);
  do {
    iVar2 = FUN_005c0530(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      iVar3 = param_1[1] + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      FUN_005c04b0(iVar1,"%f,%f,%f, %f,%f,%f,%f\n",iVar3,iVar3 + 4,iVar3 + 8,iVar3 + 0xc,iVar3 + 0x10
                   ,iVar3 + 0x14,iVar3 + 0x18);
    } while (iVar2 < *param_1);
  }
  FUN_005c0d10(iVar1);
  return;
}
