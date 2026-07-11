// Name: FUN_0043b690
// Address: 0043b690
// Address Range: [[0043b690, 0043b7b9]]
// Convention: unknown
// Signature: void FUN_0043b690(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043b690(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte auStack_18 [4];
  uint local_14;
  
  FUN_0043b7c0(param_1);
  iVar1 = FUN_00456a60(&DAT_0057b264,param_2,&DAT_0057b261);
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\course.cpp";
    _DAT_01cc4804 = 0x7c;
    FUN_004c8440("CCourse::load - can't open data\\%s",param_2);
  }
  do {
    iVar2 = FUN_00564570(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_00563350(iVar1,&DAT_0057b29f,auStack_18);
  do {
    iVar2 = FUN_00564570(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  FUN_00563350(iVar1,"%d,%d\n",&local_14,param_1 + 2);
  FUN_0043b610(param_1,local_14);
  do {
    iVar2 = FUN_00564570(iVar1);
    if (iVar2 < 0) break;
  } while (iVar2 != 10);
  iVar2 = 0;
  if (0 < *param_1) {
    iVar4 = 0;
    do {
      iVar3 = param_1[1] + iVar4;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x1c;
      FUN_00563350(iVar1,"%f,%f,%f, %f,%f,%f,%f\n",iVar3,iVar3 + 4,iVar3 + 8,iVar3 + 0xc,
                   iVar3 + 0x10,iVar3 + 0x14,iVar3 + 0x18);
    } while (iVar2 < *param_1);
  }
  FUN_00563380(iVar1);
  return;
}
