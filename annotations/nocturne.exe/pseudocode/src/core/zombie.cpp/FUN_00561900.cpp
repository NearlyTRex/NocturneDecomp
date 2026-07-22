// Name: core_zombie.cpp_FUN_00561900
// Address: 00561900
// Address Range: [[00561900, 00561935]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_FUN_00561900(int param_1)

#include "nocturne.h"

uint core_zombie_cpp_FUN_00561900(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if ((*(int *)(iVar1 + 0x24) == 0xe) && (*(int *)(0x01CC9450 + 4) == 0)) {
    return 0;
  }
  uVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_00426440(param_1);
  return uVar2;
}
