// Name: core_bugs.cpp_CBugs_process_FUN_00421300
// Address: 00421300
// Address Range: [[00421300, 004215e7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_process_FUN_00421300(CBugs *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_process_FUN_00421300(CBugs *this_ptr,float delta_time)

{
  CCharacter *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (*(((this_ptr->base).base.base.vtable._ue)->_ue).randomize)(&this_ptr->base);
  if (iVar3 != 0) {
    this_ptr->max_life_timer = this_ptr->max_life_timer - delta_time;
    if (this_ptr->max_life_timer < 0.0) {
      this_ptr->max_life_timer = 0.0;
    }
    if ((0.0 < this_ptr->attack_timer) &&
       (this_ptr->attack_timer = this_ptr->attack_timer - delta_time, this_ptr->attack_timer < 0.0))
    {
      this_ptr->attack_timer = 0.0;
    }
    if ((this_ptr->allow_chase == 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,this_ptr->allow_chase_event), iVar3 != 0)) {
      this_ptr->allow_chase = 1;
    }
    if ((this_ptr->allow_swarm == 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,this_ptr->allow_swarm_event), iVar3 != 0)) {
      this_ptr->allow_swarm = 1;
    }
    switch(this_ptr->state) {
    case BUGS_STATE_IDLE:
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->loop_sfx_handle);
      if (iVar3 == 0) {
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"?wp_disease_loop.wav" + 1,
                           &(this_ptr->base).base.base.location.position);
        this_ptr->loop_sfx_handle = uVar4;
      }
      core_bugs_cpp_CBugs_updateBugsBehavior_FUN_004221c0(this_ptr,delta_time);
      break;
    case BUGS_STATE_ATTACK:
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->loop_sfx_handle);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->loop_sfx_handle);
        this_ptr->loop_sfx_handle = 0;
      }
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->munch_sfx_handle);
      if (iVar3 == 0) {
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_disease_munch.wav",
                           &(this_ptr->base).base.base.location.position);
        this_ptr->munch_sfx_handle = uVar4;
      }
      core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422570(this_ptr,delta_time);
      break;
    case BUGS_STATE_DETACH:
      core_bugs_cpp_CBugs_updateBoundingBox_FUN_004229f0(this_ptr,delta_time);
    }
    pCVar1 = (this_ptr->base).victim;
    if ((((pCVar1 != (CCharacter *)0x0) && (0.0 < pCVar1->hit_points)) &&
        ((this_ptr->has_attacked == 0 || (0.0 < this_ptr->attack_timer)))) &&
       (0.0 < this_ptr->max_life_timer)) {
      return;
    }
    this_ptr->remove_bug_timer = this_ptr->remove_bug_timer - delta_time;
    if (this_ptr->remove_bug_timer <= 0.0) {
      this_ptr->remove_bug_timer = 0.1;
      this_ptr->count = this_ptr->count + -3;
    }
    uVar2 = 0x01D81080;
    if (this_ptr->count < 1) {
      this_ptr->count = 0;
      core_mission_cpp_FUN_004f6f10(uVar2,this_ptr,1);
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->loop_sfx_handle);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->loop_sfx_handle);
        this_ptr->loop_sfx_handle = 0;
      }
      iVar3 = sound_sndmain_cpp_FUN_00556700(this_ptr->munch_sfx_handle);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->munch_sfx_handle);
        this_ptr->munch_sfx_handle = 0;
        return;
      }
    }
  }
  return;
}
