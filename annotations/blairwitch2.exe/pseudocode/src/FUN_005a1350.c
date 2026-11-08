// Name: FUN_005a1350
// Address: 005a1350
// Address Range: [[005a1350, 005a1486]]
// Convention: unknown
// Signature: void FUN_005a1350(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a1350(int param_1,uint param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 0x206c:
    FUN_005a14e0(param_1);
    break;
  case 0x206d:
    iVar1 = FUN_0040cfc0(0,4);
    if (2 < iVar1) {
      FUN_0055ae50(0x0264B290,param_1,"confedstab01.wav",param_1 + 0x20);
      FUN_0059e880(param_1,param_2);
      return;
    }
    break;
  case 0x206e:
    FUN_0055ae50(0x0264B290,param_1,"confedbutt01.wav",param_1 + 0x20);
    FUN_0059e880(param_1,param_2);
    return;
  case 0x206f:
    iVar1 = FUN_0059f740(param_1,0x40200000,*(uint *)(param_1 + 0x1185c),0x3f800000);
    if (iVar1 != 0) {
      FUN_0055ae50(0x0264B290,param_1,"swordimpactflesh0?.wav",param_1 + 0x20);
      FUN_0059e880(param_1,param_2);
      return;
    }
    break;
  case 0x2070:
    iVar1 = FUN_0059f740(param_1,0x40200000,*(uint *)(param_1 + 0x11858),0x3f800000);
    if (iVar1 != 0) {
      FUN_0055ae50(0x0264B290,param_1,"riflebutt01",param_1 + 0x20);
      FUN_0059e880(param_1,param_2);
      return;
    }
  }
  FUN_0059e880(param_1,param_2);
  return;
}
