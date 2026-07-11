// Name: FUN_0040c3a0
// Address: 0040c3a0
// Address Range: [[0040c3a0, 0040c44e]]
// Convention: unknown
// Signature: void FUN_0040c3a0(undefined4 param_1,int param_2)

#include "nocturne.h"

void FUN_0040c3a0(uint param_1,int param_2)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    do {
      iVar1 = FUN_00564570(DAT_00763e84);
      if (iVar1 < 0) {
        FUN_0040c320(param_1,param_2);
      }
    } while (iVar1 != 10);
    if ((*(byte *)(DAT_00763e84 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_00763e90 == 0) && (param_2 != 0)) {
    FUN_005644f0(DAT_00763e84,"    // %s\n",param_2);
    if ((*(byte *)(DAT_00763e84 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005644f0(DAT_00763e84,&DAT_00577c02);
    if ((*(byte *)(DAT_00763e84 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  FUN_0040c320(param_1,param_2);
  return;
}
