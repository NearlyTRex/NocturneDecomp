// Name: FUN_005a4600
// Address: 005a4600
// Address Range: [[005a4600, 005a46df]]
// Convention: unknown
// Signature: void FUN_005a4600(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a4600(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0;
  switch(param_2) {
  case 0x1fa4:
    uVar3 = *(uint *)(param_1 + 0x11854);
    uVar4 = 0x40000000;
    uVar2 = 0x41C80000;
    break;
  case 0x1fa5:
    iVar1 = FUN_0059f740(param_1,0x40A00000,*(uint *)(param_1 + 0x11854),0x3f800000);
    if (iVar1 == 0) {
      return;
    }
    goto LAB_005a46c4;
  case 0x1fa6:
    uVar3 = *(uint *)(param_1 + 0x11850);
    uVar4 = 0x3f800000;
    uVar2 = 0x40A00000;
    break;
  case 0x1fa7:
    FUN_0055ae50(0x0264B290,param_1,"phantomhandswing0?.wav",param_1 + 0x20);
    return;
  case 0x1fa8:
    FUN_0055ae50(0x0264B290,param_1,"phantomteleport0?.wav",param_1 + 0x20);
    return;
  default:
    goto switchD_005a4617_default;
  }
  iVar1 = FUN_0059f740(param_1,uVar2,uVar3,uVar4);
switchD_005a4617_default:
  if (iVar1 == 0) {
    return;
  }
LAB_005a46c4:
  FUN_0055ae50(0x0264B290,param_1,"phandslap0?.wav",param_1 + 0x20);
  return;
}
