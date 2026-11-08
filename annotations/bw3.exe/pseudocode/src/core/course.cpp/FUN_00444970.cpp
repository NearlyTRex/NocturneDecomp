// Name: FUN_00444970
// Address: 00444970
// Address Range: [[00444970, 00444a99]]
// Convention: unknown
// Signature: void FUN_00444970(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444970(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_18 [4];
  uint uStack_14;
  
  FUN_00444aa0(param_1);
  iVar1 = FUN_004659c0(0x5b983f,param_2,0x5b983c);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\course.cpp";
    _DAT_01d71de4 = 0x7c;
    FUN_004e4330("CCourse::load - can't open data\\%s",param_2);
  }
  do {
    iVar2 = FUN_005a32b0(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005a3230(iVar1,0x5b987a,auStack_18);
  do {
    iVar2 = FUN_005a32b0(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_005a3230(iVar1,0x5b987e,&uStack_14,param_1 + 2);
  FUN_00444910(param_1,uStack_14);
  do {
    iVar2 = FUN_005a32b0(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      iVar3 = param_1[1] + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      FUN_005a3230(iVar1,0x5b9885,iVar3,iVar3 + 4,iVar3 + 8,iVar3 + 0xc,iVar3 + 0x10,iVar3 + 0x14,
                   iVar3 + 0x18);
    } while (iVar2 < *param_1);
  }
  FUN_005a3a90(iVar1);
  return;
}
