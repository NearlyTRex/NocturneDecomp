// Name: core_hand.cpp_FUN_005aa260
// Address: 005aa260
// Address Range: [[005aa260, 005aa2d0]]
// Convention: unknown
// Signature: undefined4 core_hand_cpp_FUN_005aa260(int param_1)

#include "nocturne.h"

uint core_hand_cpp_FUN_005aa260(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x10af8;
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar2,"Death");
  if (((iVar1 == 0) &&
      (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar2,"Animation"), iVar1 == 0)) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar2,"Sleeping"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x24) != 5) {
    return 0;
  }
  return 1;
}
