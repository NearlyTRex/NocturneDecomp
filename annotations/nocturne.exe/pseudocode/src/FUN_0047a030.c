// Name: FUN_0047a030
// Address: 0047a030
// Address Range: [[0047a030, 0047a081]]
// Convention: unknown
// Signature: void FUN_0047a030(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0047a030(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(0x01C775EC + 0x1d4) == 0) {
    iVar1 = FUN_0047dc30(0x01C03A10,"@@Capture" + 2);
    if (iVar1 == 0) {
      FUN_0042a1e0(param_1,param_2,param_1 + 0xbcb0);
      return;
    }
  }
  FUN_0042a1e0(param_1,param_2,0);
  return;
}
