// Name: FUN_0040b350
// Address: 0040b350
// Address Range: [[0040b350, 0040b3fe]]
// Convention: unknown
// Signature: void FUN_0040b350(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0040b350(uint param_1,int param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    do {
      iVar1 = FUN_005a32b0(DAT_007df9b4);
      if (iVar1 < 0) {
        FUN_0040b2d0(param_1,param_2);
      }
    } while (iVar1 != 10);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007df9c0 == 0) && (param_2 != 0)) {
    FUN_005a3140(DAT_007df9b4,"    // %s\n",param_2);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,&DAT_005b5a76);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  FUN_0040b2d0(param_1,param_2);
  return;
}
