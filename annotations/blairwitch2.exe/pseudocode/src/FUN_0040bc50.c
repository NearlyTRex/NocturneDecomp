// Name: FUN_0040bc50
// Address: 0040bc50
// Address Range: [[0040bc50, 0040bede]]
// Convention: unknown
// Signature: void FUN_0040bc50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bc50(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    FUN_0040b050(1);
    FUN_005b8010(DAT_007bc034,"%s%d\n",&DAT_00609590,0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac35,&DAT_00609590);
    iVar2 = param_1;
    do {
      puVar1 = (uint *)(iVar2 + 0x2140);
      iVar2 = iVar2 + 4;
      FUN_005b8010(DAT_007bc034,&DAT_005cac38,*puVar1);
    } while (iVar2 != param_1 + 0x78);
    FUN_005b8010(DAT_007bc034,&DAT_005cac3c);
    iVar2 = 0;
    FUN_005b8010(DAT_007bc034,&DAT_005cac3e,&DAT_00609590);
    do {
      puVar1 = (uint *)(param_1 + 0x21b8);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + 1;
      FUN_005b8010(DAT_007bc034,&DAT_005cac41,*puVar1);
    } while (iVar2 < 0x1e);
    FUN_005b8010(DAT_007bc034,&DAT_005cac45);
    FUN_0040b050(0xffffffff);
    FUN_005b8010(DAT_007bc034,&DAT_005cac47,&DAT_00609590);
    return;
  }
  do {
    iVar2 = FUN_005b8180(DAT_007bc034);
    if (iVar2 < 0) {
      FUN_0040b380("part status opening brace",param_2);
    }
  } while (iVar2 != 10);
  FUN_005b8100(DAT_007bc034,&DAT_005cabbb,&local_14);
  FUN_00547440(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    iVar4 = param_1 + 0x2140;
    do {
      iVar3 = FUN_005b8100(DAT_007bc034,&DAT_005cabbe,iVar4);
      if (iVar3 != 1) {
        FUN_0040b380("part status entry","description");
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005b8100(DAT_007bc034,&DAT_005cabdf);
  FUN_00547460(param_1);
  iVar2 = 0;
  if (0 < local_14) {
    param_1 = param_1 + 0x21b8;
    do {
      iVar4 = FUN_005b8100(DAT_007bc034,&DAT_005cabe1,param_1);
      if (iVar4 != 1) {
        FUN_0040b380("part texture entry","description");
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < local_14);
  }
  FUN_005b8100(DAT_007bc034,&DAT_005cac03);
  do {
    while (iVar2 = FUN_005b8180(DAT_007bc034), -1 < iVar2) {
      if (iVar2 == 10) {
        return;
      }
    }
    FUN_0040b380("part status info closing brace",param_2);
  } while (iVar2 != 10);
  return;
}
