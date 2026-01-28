// Name: core_larva.cpp_FUN_00503a20
// Address: 00503a20
// Address Range: [[00503a20, 00503bfe]]
// Convention: unknown
// Signature: void core_larva_cpp_FUN_00503a20(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_larva.cpp_FUN_00503a20(uint param_1, uint param_2)
    */

void core_larva_cpp_FUN_00503a20(void)

{
  CDemonActor *pCVar1;
  SMotion *pSVar2;
  char *pcVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  char local_e8 [100];
  char local_84 [116];
  
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)(in_stack_00000008 + 4));
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if (0.0 < (float)pCVar1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[0x8d].next_actor);
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(in_stack_00000004[0x8d].unk14);
    if (iVar4 == 0) {
      if ((float)0.29999999999999999 <= *(float *)(in_stack_00000004[0x1c].create_event + 4)) {
        if (0.69999999999999996 <= (double)*(float *)(in_stack_00000004[0x1c].create_event + 4)) {
          pcVar3 = "big";
        }
        else {
          pcVar3 = "med";
        }
      }
      else {
        pcVar3 = "sml";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_84,"l%s-shot?.wav",pcVar3);
      iVar4 = (*((in_stack_00000004->vtable)._ub)->playSound)(in_stack_00000004,local_84);
      in_stack_00000004[0x8d].unk14 = iVar4;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(in_stack_00000004 + 1),3,1);
  }
  else {
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 1));
    if ((pSVar2->state_index != 5) && (pSVar2->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 1),4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(in_stack_00000004[0x8d].unk14);
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[0x8d].next_actor);
    if ((float)0.29999999999999999 <= *(float *)(in_stack_00000004[0x1c].create_event + 4)) {
      if (0.69999999999999996 <= (double)*(float *)(in_stack_00000004[0x1c].create_event + 4)) {
        pcVar3 = "big";
      }
      else {
        pcVar3 = "med";
      }
    }
    else {
      pcVar3 = "sml";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(local_e8,"l%s-die?.wav",pcVar3);
    iVar4 = (*((in_stack_00000004->vtable)._ub)->playSound)(in_stack_00000004,local_e8);
    in_stack_00000004[0x8d].unk14 = iVar4;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(local_84 + 0x6c),
             (CVector3f *)(in_stack_00000008 + 0x1c));
  core_gore_cpp_FUN_004edbb0();
  core_enemy_cpp_FUN_004a9f10();
  return;
}
