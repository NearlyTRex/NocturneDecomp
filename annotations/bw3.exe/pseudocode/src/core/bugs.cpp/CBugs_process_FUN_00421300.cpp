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
    *(float *)&this_ptr->field_0x1bd38 = *(float *)&this_ptr->field_0x1bd38 - delta_time;
    if (*(float *)&this_ptr->field_0x1bd38 < 0.0) {
      *(uint *)&this_ptr->field_0x1bd38 = 0;
    }
    if ((0.0 < *(float *)&this_ptr->field_0x1be98) &&
       (*(float *)&this_ptr->field_0x1be98 = *(float *)&this_ptr->field_0x1be98 - delta_time,
       *(float *)&this_ptr->field_0x1be98 < 0.0)) {
      *(uint *)&this_ptr->field_0x1be98 = 0;
    }
    if ((*(int *)&this_ptr->field_0x1bd2c == 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,&this_ptr->field_0x1bd3c), iVar3 != 0)) {
      *(uint *)&this_ptr->field_0x1bd2c = 1;
    }
    if ((*(int *)&this_ptr->field_0x1bd30 == 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,&this_ptr->field_0x1bda0), iVar3 != 0)) {
      *(uint *)&this_ptr->field_0x1bd30 = 1;
    }
    switch(this_ptr->state) {
    case BUGS_STATE_IDLE:
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x1be9c);
      if (iVar3 == 0) {
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"?wp_disease_loop.wav" + 1,
                           &(this_ptr->base).base.base.location.position);
        *(uint *)&this_ptr->field_0x1be9c = uVar4;
      }
      core_bugs_cpp_CBugs_updateBugsBehavior_FUN_004221c0(this_ptr,delta_time);
      break;
    case BUGS_STATE_ATTACK:
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x1be9c);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x1be9c);
        *(uint *)&this_ptr->field_0x1be9c = 0;
      }
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x1bea0);
      if (iVar3 == 0) {
        uVar4 = core_sound_cpp_CSound_playActorSound_FUN_005609d0
                          (0x02CF5680,(CDemonActor *)this_ptr,"wp_disease_munch.wav",
                           &(this_ptr->base).base.base.location.position);
        *(uint *)&this_ptr->field_0x1bea0 = uVar4;
      }
      core_bugs_cpp_CBugs_attackSwarmTarget_FUN_00422570(this_ptr,delta_time);
      break;
    case BUGS_STATE_DETACH:
      core_bugs_cpp_CBugs_updateBoundingBox_FUN_004229f0(this_ptr,delta_time);
    }
    pCVar1 = (this_ptr->base).victim;
    if ((((pCVar1 != (CCharacter *)0x0) && (0.0 < pCVar1->hit_points)) &&
        ((*(int *)&this_ptr->field_0x1be94 == 0 || (0.0 < *(float *)&this_ptr->field_0x1be98)))) &&
       (0.0 < *(float *)&this_ptr->field_0x1bd38)) {
      return;
    }
    *(float *)&this_ptr->field_0x1bd34 = *(float *)&this_ptr->field_0x1bd34 - delta_time;
    if (*(float *)&this_ptr->field_0x1bd34 <= 0.0) {
      *(uint *)&this_ptr->field_0x1bd34 = 0x3dcccccd;
      this_ptr->count = this_ptr->count + -3;
    }
    uVar2 = 0x01D81080;
    if (this_ptr->count < 1) {
      this_ptr->count = 0;
      core_mission_cpp_FUN_004f6f10(uVar2,this_ptr,1);
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x1be9c);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x1be9c);
        *(uint *)&this_ptr->field_0x1be9c = 0;
      }
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0x1bea0);
      if (iVar3 != 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x1bea0);
        *(uint *)&this_ptr->field_0x1bea0 = 0;
        return;
      }
    }
  }
  return;
}
