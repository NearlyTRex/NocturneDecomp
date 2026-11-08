// Name: FUN_0040b110
// Address: 0040b110
// Address Range: [[0040b110, 0040b1be]]
// Convention: unknown
// Signature: void FUN_0040b110(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0040b110(uint param_1,int param_2)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    do {
      iVar1 = FUN_005c0530(DAT_007c3034);
      if (iVar1 < 0) {
        FUN_0040b090(param_1,param_2);
      }
    } while (iVar1 != 10);
    if ((*(byte *)(DAT_007c3034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007c3040 == 0) && (param_2 != 0)) {
    FUN_005c03c0(DAT_007c3034,"    // %s\n",param_2);
    if ((*(byte *)(DAT_007c3034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,&DAT_005d2a2a);
    if ((*(byte *)(DAT_007c3034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  FUN_0040b090(param_1,param_2);
  return;
}
