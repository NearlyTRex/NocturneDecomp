// Name: FUN_005a3420
// Address: 005a3420
// Address Range: [[005a3420, 005a355b]]
// Convention: unknown
// Signature: void FUN_005a3420(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a3420(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x0264B290;
  switch(param_2) {
  case 8000:
    uVar2 = *(uint *)(param_1 + 0x11858);
    uVar1 = 0x41700000;
    goto LAB_005a344f;
  case 0x1f41:
    *(uint *)(param_1 + 0x11864) = 1;
    FUN_0055ae50(uVar2,param_1,"schnellbreath01",param_1 + 0x20);
    break;
  case 0x1f42:
    *(uint *)(param_1 + 0x11864) = 0;
    FUN_0059e880(param_1,param_2);
    return;
  case 0x1f43:
    uVar2 = *(uint *)(param_1 + 0x11858);
    uVar1 = 0x41A00000;
    goto LAB_005a344f;
  case 0x1f44:
    uVar2 = *(uint *)(param_1 + 0x1185c);
    uVar1 = 0x41200000;
LAB_005a344f:
    FUN_0059f740(param_1,uVar1,uVar2,0x40000000);
    break;
  case 0x1f45:
    FUN_0055ae50(0x0264B290,param_1,"schnellarm0?.wav",param_1 + 0x20);
    break;
  case 0x1f46:
    FUN_0055ae50(0x0264B290,param_1,"schnellbite01.wav",param_1 + 0x20);
    break;
  case 0x1f47:
    FUN_0055ae50(0x0264B290,param_1,"schnellfootsteps0?.wav",param_1 + 0x20);
    break;
  case 0x1f48:
    FUN_0055ae50(0x0264B290,param_1,"schnelljump.wav",param_1 + 0x20);
    break;
  case 0x1f49:
    FUN_0055ae50(0x0264B290,param_1,"schnelldeath01.wav",param_1 + 0x20);
  }
  FUN_0059e880(param_1,param_2);
  return;
}
