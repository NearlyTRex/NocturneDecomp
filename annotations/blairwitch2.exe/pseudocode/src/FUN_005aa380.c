// Name: FUN_005aa380
// Address: 005aa380
// Address Range: [[005aa380, 005aa448]]
// Convention: unknown
// Signature: void FUN_005aa380(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005aa380(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x2134:
    iVar1 = FUN_0059f740(param_1,0x41200000,*(uint *)(param_1 + 0x11850),0x40000000);
  default:
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2135:
    iVar1 = FUN_0059f740(param_1,0x41700000,*(uint *)(param_1 + 0x11850),0x40000000);
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x2136:
    FUN_0055ae50(0x0264B290,param_1,"?phandriseup01.wav" + 1,param_1 + 0x20);
    return;
  case 0x2137:
    FUN_0055ae50(0x0264B290,param_1,"phandslap0?.wav",param_1 + 0x20);
    return;
  }
  FUN_0055ae50(0x0264B290,param_1,"phandslap0?.wav",param_1 + 0x20);
  return;
}
