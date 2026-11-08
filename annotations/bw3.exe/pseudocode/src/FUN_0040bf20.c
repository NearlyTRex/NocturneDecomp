// Name: FUN_0040bf20
// Address: 0040bf20
// Address Range: [[0040bf20, 0040c0b7]]
// Convention: unknown
// Signature: void FUN_0040bf20(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bf20(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,param_2);
    FUN_0040afa0(1);
    iVar1 = 0;
    FUN_005a3140(DAT_007df9b4,"%s%d // clothCount\n",&DAT_005f0990,*param_1);
    if (0 < *param_1) {
      piVar3 = param_1 + 1;
      do {
        iVar1 = iVar1 + 1;
        FUN_005a3140(DAT_007df9b4,"%s\"%s\"\n",&DAT_005f0990,piVar3);
        piVar3 = piVar3 + 10;
      } while (iVar1 < *param_1);
    }
    FUN_0040afa0(0xffffffff);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5cdf,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = FUN_005a32b0(DAT_007df9b4);
    if (iVar1 < 0) {
      FUN_0040b2d0("Cloth list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = FUN_005a3230(DAT_007df9b4,&DAT_005b5c66,param_1);
  if (iVar1 != 1) {
    FUN_0040b2d0("cloth count",param_2);
  }
  iVar1 = 0;
  FUN_0040b350("clothCount",param_2);
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar2 = FUN_005a3230(DAT_007df9b4," \"%[^\"]\"\n",piVar3);
      if (iVar2 != 1) {
        FUN_0040b2d0("cloth filename entry",param_2);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = FUN_005a32b0(DAT_007df9b4), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    FUN_0040b2d0("Cloth list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
