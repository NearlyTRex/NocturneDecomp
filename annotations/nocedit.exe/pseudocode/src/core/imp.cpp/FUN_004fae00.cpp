// Name: core_imp.cpp_FUN_004fae00
// Address: 004fae00
// Address Range: [[004fae00, 004faf34]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004fae00(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_imp.cpp_FUN_004fae00(uint param_1, uint param_2)
    */

void core_imp_cpp_FUN_004fae00(void)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  SMotion *pSVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  char *sound_name;
  CVector3f local_24;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].unk13);
  if (*(int *)((int)in_stack_00000008 + 0x28) == 8) {
    iVar3 = 0;
    *(float *)((int)in_stack_00000008 + 4) =
         *(float *)((int)in_stack_00000008 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&local_24,(CVector3f *)((int)in_stack_00000008 + 0x1c));
    do {
      iVar3 = iVar3 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar3 < 5);
  }
  core_imp_cpp_FUN_004fab60();
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)((int)in_stack_00000008 + 4));
  this_ptr = in_stack_00000004 + 1;
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if (0.0 < (float)pCVar1) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr,5,1);
    iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(in_stack_00000004[0x8d].unk14);
    if (iVar3 != 0) goto LAB_004faefc;
    sound_name = "imp-hurt?.wav";
  }
  else {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)this_ptr);
    if ((pSVar2->state_index == 6) || (pSVar2->state_index == 7)) goto LAB_004faefc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr,6,1);
    sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].unk14);
    sound_name = "imp-die?.wav";
  }
  iVar3 = (*((in_stack_00000004->vtable)._ub)->playSound)(in_stack_00000004,sound_name);
  in_stack_00000004[0x8d].unk14 = iVar3;
LAB_004faefc:
  local_24.y = in_stack_00000008;
  local_24.x = (float)in_stack_00000004;
  core_enemy_cpp_FUN_004a9f10();
  return;
}
