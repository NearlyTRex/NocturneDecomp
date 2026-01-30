// Name: core_mobster.cpp_FUN_00527740
// Address: 00527740
// Address Range: [[00527740, 005278c5]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_FUN_00527740(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00527740(uint param_1, uint
   param_2) */

void __cdecl core_mobster_cpp_FUN_00527740(void)

{
  CMotionController *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbf5c));
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbf54));
  core_mobster_cpp_FUN_00527380();
  if ((*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf64) * 4) == 0) &&
     (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf6c) * 4) == 0)) {
    *(uint *)(in_stack_00000008 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(in_stack_00000004 + 0x243c) = 0;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    if ((pSVar4->state_index != 5) && (pSVar4->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,4,1);
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
      if (*(int *)(in_stack_00000004 + 0xbf58) == 0) {
        sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0xbf50));
        uVar5 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(uint *)(in_stack_00000004 + 0xbf58) = 1;
        *(uint *)(in_stack_00000004 + 0xbf50) = uVar5;
        core_enemy_cpp_FUN_004a9f10();
        return;
      }
    }
    goto LAB_00527805;
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)(in_stack_00000008 + 0x34),g_CTommyGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
LAB_005277e1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,3,1);
  }
  else {
    iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
    if (iVar3 != 0) goto LAB_005277e1;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbf50));
  if (iVar3 == 0) {
    uVar5 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(uint *)(in_stack_00000004 + 0xbf50) = uVar5;
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
LAB_00527805:
  core_enemy_cpp_FUN_004a9f10();
  return;
}
