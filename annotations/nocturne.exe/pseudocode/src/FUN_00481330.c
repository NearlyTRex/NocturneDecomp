// Name: FUN_00481330
// Address: 00481330
// Address Range: [[00481330, 00481617]]
// Convention: unknown
// Signature: int FUN_00481330(int *param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00481330(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_005644f0();
  FUN_005644f0(param_2,&DAT_00580db2,5);
  FUN_005644f0();
  iVar1 = 0;
  FUN_005644f0(param_2,&DAT_00580dcb,*param_1);
  if (0 < *param_1) {
    piVar4 = param_1 + 1;
    do {
      iVar1 = iVar1 + 1;
      FUN_005644f0(param_2,&DAT_00580dcf,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < *param_1);
  }
  FUN_005644f0();
  iVar1 = 0;
  FUN_005644f0(param_2,&DAT_00580def,param_1[0x321]);
  if (0 < param_1[0x321]) {
    piVar4 = param_1 + 0x322;
    do {
      iVar1 = iVar1 + 1;
      FUN_005644f0(param_2,&DAT_00580df3,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x321]);
  }
  FUN_005644f0();
  iVar1 = 0;
  FUN_005644f0(param_2,&DAT_00580e16,param_1[0x963]);
  if (0 < param_1[0x963]) {
    piVar4 = param_1 + 0x964;
    do {
      iVar1 = iVar1 + 1;
      FUN_005644f0(param_2,&DAT_00580e1a,piVar4);
      piVar4 = piVar4 + 8;
    } while (iVar1 < param_1[0x963]);
  }
  FUN_005644f0();
  FUN_005644f0(param_2,&DAT_00580e43,param_1[0xc84]);
  local_18 = 0;
  if (0 < param_1[0xc84]) {
    piVar4 = param_1 + 0xc85;
    piVar2 = param_1;
    do {
      FUN_005644f0(param_2,"%f, %s\n",(double)(float)piVar2[0xcd5],piVar4);
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 8;
      local_18 = local_18 + 1;
    } while (local_18 < param_1[0xc84]);
  }
  FUN_005644f0();
  FUN_005644f0(param_2,&DAT_00580e73,param_1[0xcdf]);
  local_14 = 0;
  if (0 < param_1[0xcdf]) {
    piVar4 = param_1 + 0xce0;
    piVar2 = param_1;
    do {
      FUN_005644f0(param_2,"%d, %s\n",piVar2[0xd30],piVar4);
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 8;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[0xcdf]);
  }
  FUN_005644f0();
  iVar1 = 0;
  FUN_005644f0(param_2,&DAT_00580eab,param_1[0xd3a]);
  if (0 < param_1[0xd3a]) {
    local_1c = (int)param_1 + 0x37da;
    piVar4 = param_1 + 0xd3b;
    do {
      FUN_005644f0(param_2,"\"%s\", \"%s\"\n",piVar4,local_1c);
      iVar1 = iVar1 + 1;
      piVar4 = (int *)((int)piVar4 + 0x1e);
      local_1c = local_1c + 0x1e;
    } while (iVar1 < param_1[0xd3a]);
  }
  FUN_005644f0();
  iVar3 = 0;
  iVar1 = FUN_005644f0(param_2,&DAT_00580ed3,param_1[0x642]);
  if (0 < param_1[0x642]) {
    piVar4 = param_1 + 0x643;
    do {
      iVar3 = iVar3 + 1;
      FUN_005644f0(param_2,&DAT_00580ed7,piVar4);
      iVar1 = param_1[0x642];
      piVar4 = piVar4 + 8;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}
