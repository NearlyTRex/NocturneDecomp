// Name: core_zombie.cpp_CZombie_FUN_005fc4f0
// Address: 005fc4f0
// Address Range: [[005fc4f0, 005fc706]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_FUN_005fc4f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc4f0(CZombie* param_1, uint
   param_2) */

void core_zombie_cpp_CZombie_FUN_005fc4f0(void)

{
  SMotion *pSVar1;
  CMotionList *this_ptr;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  core_zombie_cpp_CZombie_FUN_005fc220();
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x10c))();
  *(float *)(in_stack_00000004 + 0x243c) =
       *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf90) * 4) == 0) {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
  }
  *(uint *)(in_stack_00000004 + 0xbe38) = 0x3f99999a;
  if (0.0 < *(float *)(in_stack_00000004 + 0x243c)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 0x158),4,1);
    if (*(float *)(in_stack_00000004 + 0xbf94) <= 0.0) {
      *(uint *)(in_stack_00000004 + 0xbf94) = 0x40000000;
      iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbf9c));
      if (iVar4 == 0) {
        if (*(int *)(in_stack_00000004 + 0xbf48) != 0) {
          uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
          *(uint *)(in_stack_00000004 + 0xbf9c) = uVar3;
          core_enemy_cpp_FUN_004a9f10();
          return;
        }
        uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(uint *)(in_stack_00000004 + 0xbf9c) = uVar3;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
  }
  else {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((pSVar1->state_index != 8) && (pSVar1->state_index != 7)) {
      core_zombie_cpp_CZombie_FUN_005fbde0();
      iVar4 = 6;
      if ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf90) * 4) == 0) &&
         ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf80) * 4) != 0 ||
          (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf78) * 4) != 0))))
      {
        this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
        iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
        if (-1 < iVar2) {
          iVar4 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),iVar4,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbf9c));
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0xa0))();
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}
