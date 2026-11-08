// Name: FUN_00492060
// Address: 00492060
// Address Range: [[00492060, 00492347]]
// Convention: unknown
// Signature: int FUN_00492060(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00492060(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005b8010();
  FUN_005b8010(param_2,&DAT_005d5084,5);
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(param_2,&DAT_005d509d,*param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(param_2,&DAT_005d50a1,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < *param_1);
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(param_2,&DAT_005d50c1,param_1[0x321]);
  if (0 < param_1[0x321]) {
    piVar4 = param_1 + 0x322;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(param_2,&DAT_005d50c5,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x321]);
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(param_2,&DAT_005d50e8,param_1[0x963]);
  if (0 < param_1[0x963]) {
    piVar4 = param_1 + 0x964;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(param_2,&DAT_005d50ec,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x963]);
  }
  FUN_005b8010();
  FUN_005b8010(param_2,&DAT_005d5115,param_1[0xc84]);
  local_18 = 0;
  if (0 < param_1[0xc84]) {
    piVar4 = param_1 + 0xc85;
    piVar2 = param_1;
    do {
      FUN_005b8010(param_2,"%f, %s\n",(double)(float)piVar2[0xcd5],piVar4);
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 8;
      local_18 = local_18 + 1;
    } while (local_18 < param_1[0xc84]);
  }
  FUN_005b8010();
  FUN_005b8010(param_2,&DAT_005d5145,param_1[0xcdf]);
  local_14 = 0;
  if (0 < param_1[0xcdf]) {
    piVar4 = param_1 + 0xce0;
    piVar2 = param_1;
    do {
      FUN_005b8010(param_2,"%d, %s\n",piVar2[0xd30],piVar4);
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 8;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[0xcdf]);
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(param_2,&DAT_005d517d,param_1[0xd3a]);
  if (0 < param_1[0xd3a]) {
    local_1c = (int)param_1 + 0x37da;
    piVar4 = param_1 + 0xd3b;
    do {
      FUN_005b8010(param_2,"\"%s\", \"%s\"\n",piVar4,local_1c);
      iVar1 = iVar1 + 1;
      piVar4 = (int *)((int)piVar4 + 0x1e);
      local_1c = local_1c + 0x1e;
    } while (iVar1 < param_1[0xd3a]);
  }
  FUN_005b8010();
  iVar3 = 0;
  iVar1 = FUN_005b8010(param_2,&DAT_005d51a5,param_1[0x642]);
  if (0 < param_1[0x642]) {
    piVar4 = param_1 + 0x643;
    do {
      iVar3 = iVar3 + 1;
      FUN_005b8010(param_2,&DAT_005d51a9,piVar4);
      iVar1 = param_1[0x642];
      piVar4 = piVar4 + 8;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}
