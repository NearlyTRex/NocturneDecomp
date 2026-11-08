// Name: FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b4ae]]
// Convention: unknown
// Signature: void FUN_0040b400(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0040b400(uint param_1,int param_2)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    do {
      iVar1 = FUN_005b8180(DAT_007bc034);
      if (iVar1 < 0) {
        FUN_0040b380(param_1,param_2);
      }
    } while (iVar1 != 10);
    if ((*(byte *)(DAT_007bc034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007bc040 == 0) && (param_2 != 0)) {
    FUN_005b8010(DAT_007bc034,"    // %s\n",param_2);
    if ((*(byte *)(DAT_007bc034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005caac7);
    if ((*(byte *)(DAT_007bc034 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  FUN_0040b380(param_1,param_2);
  return;
}
