// Name: FUN_0040d110
// Address: 0040d110
// Address Range: [[0040d110, 0040d2c7]]
// Convention: unknown
// Signature: void FUN_0040d110(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040d110(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (DAT_00763e88 != 1) {
    FUN_005644f0(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,param_2);
    FUN_0040bff0(1);
    FUN_005644f0(DAT_00763e84,"%s%d // ruleCount\n",&DAT_005acc90,*param_1);
    iVar1 = 0;
    if (0 < *param_1) {
      piVar3 = param_1 + 0x7e;
      piVar4 = param_1 + 1;
      do {
        FUN_005644f0(DAT_00763e84,"%s\"%s\" => \"%s\"\n",&DAT_005acc90,piVar4,piVar3);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x19;
        piVar4 = piVar4 + 0x19;
      } while (iVar1 < *param_1);
    }
    FUN_0040bff0(0xffffffff);
    FUN_005644f0(DAT_00763e84,&DAT_00577f00,&DAT_005acc90);
    return;
  }
  do {
    iVar1 = FUN_00564570(DAT_00763e84);
    if (iVar1 < 0) {
      FUN_0040c320("Rule list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = FUN_00563350(DAT_00763e84,&DAT_00577e88,param_1);
  if (iVar1 != 1) {
    FUN_0040c320("rule count",param_2);
  }
  FUN_0040c3a0("ruleCount",param_2);
  iVar1 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 0x7e;
    piVar4 = param_1 + 1;
    do {
      iVar2 = FUN_00563350(DAT_00763e84," \"%[^\"]\" => \"%[^\"]\"\n",piVar4,piVar3);
      if (iVar2 != 2) {
        FUN_0040c320(&DAT_00577eb5,param_2);
      }
      piVar4 = piVar4 + 0x19;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = FUN_00564570(DAT_00763e84), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    FUN_0040c320("Rule list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
