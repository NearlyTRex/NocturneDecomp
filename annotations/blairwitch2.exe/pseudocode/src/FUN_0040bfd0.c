// Name: FUN_0040bfd0
// Address: 0040bfd0
// Address Range: [[0040bfd0, 0040c167]]
// Convention: unknown
// Signature: void FUN_0040bfd0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bfd0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    FUN_0040b050(1);
    iVar1 = 0;
    FUN_005b8010(DAT_007bc034,"%s%d // clothCount\n",&DAT_00609590,*param_1);
    if (0 < *param_1) {
      piVar3 = param_1 + 1;
      do {
        iVar1 = iVar1 + 1;
        FUN_005b8010(DAT_007bc034,"%s\"%s\"\n",&DAT_00609590,piVar3);
        piVar3 = piVar3 + 10;
      } while (iVar1 < *param_1);
    }
    FUN_0040b050(0xffffffff);
    FUN_005b8010(DAT_007bc034,&DAT_005cad30,&DAT_00609590);
    return;
  }
  do {
    iVar1 = FUN_005b8180(DAT_007bc034);
    if (iVar1 < 0) {
      FUN_0040b380("Cloth list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = FUN_005b8100(DAT_007bc034,&DAT_005cacb7,param_1);
  if (iVar1 != 1) {
    FUN_0040b380("cloth count",param_2);
  }
  iVar1 = 0;
  FUN_0040b400("clothCount",param_2);
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar2 = FUN_005b8100(DAT_007bc034," \"%[^\"]\"\n",piVar3);
      if (iVar2 != 1) {
        FUN_0040b380("cloth filename entry",param_2);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = FUN_005b8180(DAT_007bc034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    FUN_0040b380("Cloth list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
