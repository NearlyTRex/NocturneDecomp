// Name: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0
// Address: 005624b0
// Address Range: [[005624b0, 005624dd]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0(int param_1)

#include "nocturne.h"

uint core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_005624b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    return 1;
  }
  uVar2 = FUN_0040d830(param_1);
  return uVar2;
}
