// Name: FUN_005ab940
// Address: 005ab940
// Address Range: [[005ab940, 005ab9ce]]
// Convention: unknown
// Signature: void FUN_005ab940(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005ab940(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x20d1) {
    if (param_2 == 0x20d0) {
      FUN_0059f740(param_1,0x41C80000,*(uint *)(param_1 + 0x11854),0x40000000);
      return;
    }
  }
  else {
    if (param_2 < 0x20d2) {
      FUN_0059f740(param_1,0x41700000,*(uint *)(param_1 + 0x11854),0x40000000);
      return;
    }
    if (param_2 != 0x20d2) {
      return;
    }
    iVar1 = FUN_0040cfc0(0,1);
    if (iVar1 != 0) {
      FUN_0055ae50(0x0264B290,param_1,"hagattack0?.wav",param_1 + 0x20);
      return;
    }
  }
  return;
}
