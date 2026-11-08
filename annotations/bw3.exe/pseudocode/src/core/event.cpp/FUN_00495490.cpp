// Name: FUN_00495490
// Address: 00495490
// Address Range: [[00495490, 00495847]]
// Convention: unknown
// Signature: int FUN_00495490(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00495490(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  FUN_0048bfd0(param_1);
  FUN_005a3f00(local_120,0xff,param_2);
  FUN_005a3230(param_2,&DAT_005c0111,&local_20);
  if (5 < local_20) {
    _DAT_01d71de0 = "..\\core\\event.cpp";
    _DAT_01d71de4 = 0x1035;
    FUN_004e4330("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d",local_20,5);
  }
  FUN_005a3f00(local_120,0xff,param_2);
  iVar1 = 0;
  FUN_005a3230(param_2,&DAT_005c018a,param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_005a3230(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < *param_1);
  }
  FUN_005a3f00(local_120,0xff,param_2);
  iVar1 = 0;
  FUN_005a3230(param_2,&DAT_005c0195,param_1 + 0x321);
  if (0 < param_1[0x321]) {
    piVar4 = param_1 + 0x322;
    do {
      iVar1 = iVar1 + 1;
      FUN_005a3230(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x321]);
  }
  FUN_005a3f00(local_120,0xff,param_2);
  iVar2 = 0;
  iVar1 = FUN_005a3230(param_2,&DAT_005c01a0,param_1 + 0x963);
  if (0 < param_1[0x963]) {
    piVar4 = param_1 + 0x964;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = FUN_005a3230(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar2 < param_1[0x963]);
  }
  if (1 < local_20) {
    FUN_005a3f00(local_120,0xff,param_2);
    FUN_005a3230(param_2,&DAT_005c01ab,param_1 + 0xc84);
    iVar1 = param_1[0xc84];
    local_14 = 0;
    if (0 < iVar1) {
      piVar4 = param_1 + 0xc85;
      piVar3 = param_1 + 0xcd5;
      do {
        iVar1 = FUN_005a3230(param_2,"%f, %[^\n]\n",piVar3,piVar4);
        piVar4 = piVar4 + 8;
        piVar3 = piVar3 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < param_1[0xc84]);
    }
  }
  if (2 < local_20) {
    FUN_005a3f00(local_120,0xff,param_2);
    iVar2 = 0;
    FUN_005a3230(param_2,&DAT_005c01ba,param_1 + 0xcdf);
    iVar1 = param_1[0xcdf];
    if (0 < iVar1) {
      local_18 = param_1 + 0xce0;
      piVar4 = param_1 + 0xd30;
      do {
        FUN_005a3230(param_2,"%d, %[^\n]\n",piVar4,local_18);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
        local_18 = local_18 + 8;
        iVar1 = param_1[0xcdf];
      } while (iVar2 < iVar1);
    }
  }
  if (3 < local_20) {
    FUN_005a3f00(local_120,0xff,param_2);
    iVar2 = 0;
    iVar1 = FUN_005a3230(param_2,&DAT_005c01c9,param_1 + 0xd3a);
    if (0 < param_1[0xd3a]) {
      local_1c = (int)param_1 + 0x37da;
      piVar4 = param_1 + 0xd3b;
      do {
        iVar1 = FUN_005a3230(param_2,"\"%[^\"]\" , \"%[^\"]\"\n",piVar4,local_1c);
        iVar2 = iVar2 + 1;
        piVar4 = (int *)((int)piVar4 + 0x1e);
        local_1c = local_1c + 0x1e;
      } while (iVar2 < param_1[0xd3a]);
    }
  }
  if (4 < local_20) {
    FUN_005a3f00(local_120,0xff,param_2);
    iVar2 = 0;
    iVar1 = FUN_005a3230(param_2,&DAT_005c01e0,param_1 + 0x642);
    if (0 < param_1[0x642]) {
      piVar4 = param_1 + 0x643;
      do {
        iVar2 = iVar2 + 1;
        FUN_005a3230(param_2,"%[^\n]\n",piVar4);
        piVar4 = piVar4 + 8;
      } while (iVar2 < param_1[0x642]);
      return param_1[0x642];
    }
  }
  return iVar1;
}
