// Name: FUN_0040c0c0
// Address: 0040c0c0
// Address Range: [[0040c0c0, 0040c277]]
// Convention: unknown
// Signature: void FUN_0040c0c0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040c0c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,param_2);
    FUN_0040afa0(1);
    FUN_005a3140(DAT_007df9b4,"%s%d // ruleCount\n",&DAT_005f0990,*param_1);
    iVar1 = 0;
    if (0 < *param_1) {
      piVar3 = param_1 + 0x7e;
      piVar4 = param_1 + 1;
      do {
        FUN_005a3140(DAT_007df9b4,"%s\"%s\" => \"%s\"\n",&DAT_005f0990,piVar4,piVar3);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 0x19;
        piVar4 = piVar4 + 0x19;
      } while (iVar1 < *param_1);
    }
    FUN_0040afa0(0xffffffff);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5d74,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = FUN_005a32b0(DAT_007df9b4);
    if (iVar1 < 0) {
      FUN_0040b2d0("Rule list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = FUN_005a3230(DAT_007df9b4,&DAT_005b5cfc,param_1);
  if (iVar1 != 1) {
    FUN_0040b2d0("rule count",param_2);
  }
  FUN_0040b350("ruleCount",param_2);
  iVar1 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 0x7e;
    piVar4 = param_1 + 1;
    do {
      iVar2 = FUN_005a3230(DAT_007df9b4," \"%[^\"]\" => \"%[^\"]\"\n",piVar4,piVar3);
      if (iVar2 != 2) {
        FUN_0040b2d0(&DAT_005b5d29,param_2);
      }
      piVar4 = piVar4 + 0x19;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = FUN_005a32b0(DAT_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    FUN_0040b2d0("Rule list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
