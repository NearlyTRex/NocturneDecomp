// Name: FUN_00480f70
// Address: 00480f70
// Address Range: [[00480f70, 00481327]]
// Convention: unknown
// Signature: int FUN_00480f70(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00480f70(int *param_1,uint param_2)

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
  
  FUN_0047aa00(param_1);
  FUN_00564b20(local_120,0xff,param_2);
  FUN_00563350(param_2,&DAT_00580cc1,&local_20);
  if (5 < local_20) {
    _DAT_01cc4800 = "..\\core\\event.cpp";
    _DAT_01cc4804 = 0xc2c;
    FUN_004c8440("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d",local_20,5);
  }
  FUN_00564b20(local_120,0xff,param_2);
  iVar1 = 0;
  FUN_00563350(param_2,&DAT_00580d3a,param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_00563350(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < *param_1);
  }
  FUN_00564b20(local_120,0xff,param_2);
  iVar1 = 0;
  FUN_00563350(param_2,&DAT_00580d45,param_1 + 0x321);
  if (0 < param_1[0x321]) {
    piVar4 = param_1 + 0x322;
    do {
      iVar1 = iVar1 + 1;
      FUN_00563350(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x321]);
  }
  FUN_00564b20(local_120,0xff,param_2);
  iVar2 = 0;
  iVar1 = FUN_00563350(param_2,&DAT_00580d50,param_1 + 0x963);
  if (0 < param_1[0x963]) {
    piVar4 = param_1 + 0x964;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = FUN_00563350(param_2,"%[^\n]\n",piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar2 < param_1[0x963]);
  }
  if (1 < local_20) {
    FUN_00564b20(local_120,0xff,param_2);
    FUN_00563350(param_2,&DAT_00580d5b,param_1 + 0xc84);
    iVar1 = param_1[0xc84];
    local_14 = 0;
    if (0 < iVar1) {
      piVar4 = param_1 + 0xc85;
      piVar3 = param_1 + 0xcd5;
      do {
        iVar1 = FUN_00563350(param_2,"%f, %[^\n]\n",piVar3,piVar4);
        piVar4 = piVar4 + 8;
        piVar3 = piVar3 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < param_1[0xc84]);
    }
  }
  if (2 < local_20) {
    FUN_00564b20(local_120,0xff,param_2);
    iVar2 = 0;
    FUN_00563350(param_2,&DAT_00580d6a,param_1 + 0xcdf);
    iVar1 = param_1[0xcdf];
    if (0 < iVar1) {
      local_18 = param_1 + 0xce0;
      piVar4 = param_1 + 0xd30;
      do {
        FUN_00563350(param_2,"%d, %[^\n]\n",piVar4,local_18);
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 1;
        local_18 = local_18 + 8;
        iVar1 = param_1[0xcdf];
      } while (iVar2 < iVar1);
    }
  }
  if (3 < local_20) {
    FUN_00564b20(local_120,0xff,param_2);
    iVar2 = 0;
    iVar1 = FUN_00563350(param_2,&DAT_00580d79,param_1 + 0xd3a);
    if (0 < param_1[0xd3a]) {
      local_1c = (int)param_1 + 0x37da;
      piVar4 = param_1 + 0xd3b;
      do {
        iVar1 = FUN_00563350(param_2,"\"%[^\"]\" , \"%[^\"]\"\n",piVar4,local_1c);
        iVar2 = iVar2 + 1;
        piVar4 = (int *)((int)piVar4 + 0x1e);
        local_1c = local_1c + 0x1e;
      } while (iVar2 < param_1[0xd3a]);
    }
  }
  if (4 < local_20) {
    FUN_00564b20(local_120,0xff,param_2);
    iVar2 = 0;
    iVar1 = FUN_00563350(param_2,&DAT_00580d90,param_1 + 0x642);
    if (0 < param_1[0x642]) {
      piVar4 = param_1 + 0x643;
      do {
        iVar2 = iVar2 + 1;
        FUN_00563350(param_2,"%[^\n]\n",piVar4);
        piVar4 = piVar4 + 8;
      } while (iVar2 < param_1[0x642]);
      return param_1[0x642];
    }
  }
  return iVar1;
}
