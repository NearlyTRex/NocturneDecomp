// Name: FUN_004406e0
// Address: 004406e0
// Address Range: [[004406e0, 00440741]]
// Convention: unknown
// Signature: undefined4 FUN_004406e0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

uint FUN_004406e0(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return 1;
    }
    if (0 < param_3) {
      param_3 = param_3 + -1;
    }
    uVar1 = FUN_005a32b0(param_2);
    if ((int)uVar1 < 0) break;
    FUN_004404e0(param_1,uVar1 & 0xff);
  }
  if ((param_3 < 0) && ((*(byte *)(param_2 + 0xc) & 0x20) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
