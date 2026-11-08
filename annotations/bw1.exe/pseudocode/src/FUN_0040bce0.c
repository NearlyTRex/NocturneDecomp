// Name: FUN_0040bce0
// Address: 0040bce0
// Address Range: [[0040bce0, 0040be77]]
// Convention: unknown
// Signature: void FUN_0040bce0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040bce0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,param_2);
    FUN_0040ad60(1);
    iVar1 = 0;
    FUN_005c03c0(DAT_007c3034,"%s%d // clothCount\n",&DAT_006106c0,*param_1);
    if (0 < *param_1) {
      piVar3 = param_1 + 1;
      do {
        iVar1 = iVar1 + 1;
        FUN_005c03c0(DAT_007c3034,"%s\"%s\"\n",&DAT_006106c0,piVar3);
        piVar3 = piVar3 + 10;
      } while (iVar1 < *param_1);
    }
    FUN_0040ad60(0xffffffff);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2c93,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = FUN_005c0530(DAT_007c3034);
    if (iVar1 < 0) {
      FUN_0040b090("Cloth list opening brace",param_2);
    }
  } while (iVar1 != 10);
  iVar1 = FUN_005c04b0(DAT_007c3034,&DAT_005d2c1a,param_1);
  if (iVar1 != 1) {
    FUN_0040b090("cloth count",param_2);
  }
  iVar1 = 0;
  FUN_0040b110("clothCount",param_2);
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar2 = FUN_005c04b0(DAT_007c3034," \"%[^\"]\"\n",piVar3);
      if (iVar2 != 1) {
        FUN_0040b090("cloth filename entry",param_2);
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 10;
    } while (iVar1 < *param_1);
  }
  do {
    while (iVar1 = FUN_005c0530(DAT_007c3034), -1 < iVar1) {
      if (iVar1 == 10) {
        return;
      }
    }
    FUN_0040b090("Cloth list closing brace",param_2);
  } while (iVar1 != 10);
  return;
}
