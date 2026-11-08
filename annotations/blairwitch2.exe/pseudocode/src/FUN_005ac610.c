// Name: FUN_005ac610
// Address: 005ac610
// Address Range: [[005ac610, 005ac6c6]]
// Convention: unknown
// Signature: void FUN_005ac610(int param_1,uint param_2)

#include "nocturne.h"

void FUN_005ac610(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (param_2 < 0x2199) {
    if (param_2 != 0x2198) {
      return;
    }
    FUN_0059f740(param_1,0x40A00000,*(uint *)(param_1 + 0x11850),0x40000000);
    FUN_0055ae50(0x0264B290,param_1,"dogbite0?.wav",iVar1);
    return;
  }
  if (param_2 < 0x219a) {
    FUN_0059f740(param_1,0x41200000,*(uint *)(param_1 + 0x11850),0x40000000);
    FUN_0055ae50(0x0264B290,param_1,"dogjump0?.wav",iVar1);
    return;
  }
  if (param_2 != 0x219a) {
    return;
  }
  FUN_0055ae50(0x0264B290,param_1,"dogfoot0?.wav",iVar1);
  return;
}
