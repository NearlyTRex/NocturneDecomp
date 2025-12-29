// Name: core_larva.cpp_FUN_00503a20
// Address: 00503a20
// Address Range: [[00503a20, 00503bfe]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503a20()

#include "nocturne.h"

/* Signature: byte actors_enemy_larva.cpp_FUN_00503a20(uint param_1, uint param_2)
    */

void core_larva_cpp_FUN_00503a20(void)

{
  CDemonActor *pCVar1;
  CDemonActor *this_ptr;
  float fVar2;
  SMotion *pSVar3;
  char *pcVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CDemonActor *pCStack_dc;
  float afStack_d8 [23];
  char acStack_7c [4];
  char acStack_78 [104];
  
  fVar2 = in_stack_00000008;
  this_ptr = in_stack_00000004;
  pCVar1 = (CDemonActor *)
           ((float)in_stack_00000004[0x1a].next_actor - *(float *)((int)in_stack_00000008 + 4));
  in_stack_00000004[0x1a].next_actor = pCVar1;
  if (0.0 < (float)pCVar1) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[0x8d].next_actor);
    iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr[0x8d].field26_0x148);
    if (iVar5 == 0) {
      if ((float)0.29999999999999999 <= *(float *)(this_ptr[0x1c].create_event + 4)) {
        if (0.69999999999999996 <= (double)*(float *)(this_ptr[0x1c].create_event + 4)) {
          pcVar4 = "big";
        }
        else {
          pcVar4 = "med";
        }
      }
      else {
        pcVar4 = "sml";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_7c,"l%s-shot?.wav",pcVar4);
      iVar5 = (*this_ptr->vtable->playSound)(this_ptr,acStack_78);
      this_ptr[0x8d].field26_0x148 = iVar5;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)(this_ptr + 1),3,1);
  }
  else {
    pCVar1 = in_stack_00000004 + 1;
    in_stack_00000004[0x1a].next_actor = (CDemonActor *)0x0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)pCVar1);
    if ((pSVar3->state_index != 5) && (pSVar3->state_index != 4)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)pCVar1,4,1);
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr[0x8d].field26_0x148);
    sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)this_ptr[0x8d].next_actor);
    if ((float)0.29999999999999999 <= *(float *)(this_ptr[0x1c].create_event + 4)) {
      if (0.69999999999999996 <= (double)*(float *)(this_ptr[0x1c].create_event + 4)) {
        pcVar4 = "big";
      }
      else {
        pcVar4 = "med";
      }
    }
    else {
      pcVar4 = "sml";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)&pCStack_dc,"l%s-die?.wav",pcVar4);
    iVar5 = (*this_ptr->vtable->playSound)(this_ptr,(char *)afStack_d8);
    this_ptr[0x8d].field26_0x148 = iVar5;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (this_ptr,(CVector3f *)&stack0x00000004,(CVector3f *)((int)fVar2 + 0x1c));
  pCStack_dc = (CDemonActor *)this_ptr[0x1c].was_created;
  core_gore_cpp_FUN_004edbb0();
  afStack_d8[0] = fVar2;
  pCStack_dc = this_ptr;
  core_enemy_cpp_FUN_004a9f10();
  return;
}
