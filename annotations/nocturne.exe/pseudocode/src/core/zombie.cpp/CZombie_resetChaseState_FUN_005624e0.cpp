// Name: core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0
// Address: 005624e0
// Address Range: [[005624e0, 00562547]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(int param_1)

#include "nocturne.h"

void __cdecl core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x150;
  uVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(iVar3,"CHASE_2",0);
  iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar1);
  if (iVar2 == 0x16) {
    if (*(int *)(param_1 + 0xbdac) == 0) {
      uVar1 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2,1);
      iVar2 = iVar2 + 0x15;
    }
    else {
      uVar1 = 1;
      iVar2 = 0x16;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,iVar2,uVar1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
  return;
}
