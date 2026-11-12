// Name: core_filmreel.cpp_CFilmProjector_process_FUN_00492d10
// Address: 00492d10
// Address Range: [[00492d10, 00492e92]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00492d10(CFilmProjector *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00492d10(CFilmProjector *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  
  if ((this_ptr->base).triggered == 0) {
    if (this_ptr->prev_dest_state != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00447c50(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,(char *)0x5d5310);
      this_ptr->sfx_handle = uVar4;
    }
  }
  else {
    pCVar3 = (this_ptr->base).dest_actor;
    fVar1 = delta_time * _DAT_005d531d;
    (pCVar3->orient).vec.z = (pCVar3->orient).vec.z - fVar1;
    this_ptr->reel_rotation = this_ptr->reel_rotation - fVar1;
    if (this_ptr->prev_dest_state == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         ((this_ptr->base).dest_actor,g_CFilmReelClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01d046a0 = "..\\core\\filmreel.cpp";
        _DAT_01d046a4 = 0x11d;
        core_main_c_FUN_004e4500("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00447c50
                (g_CFilterFXPtr,(char *)&pCVar3[1].particle_systems[0].fade_duration);
      sound_sndmain_cpp_killSfx_FUN_00551050(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"35-start.wav");
      this_ptr->sfx_handle = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"35-loop.wav");
        this_ptr->sfx_handle = uVar4;
      }
    }
    if (this_ptr->key_reel == (this_ptr->base).dest_actor) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,this_ptr->key_event);
    }
  }
  this_ptr->prev_dest_state = (this_ptr->base).triggered;
  core_dest_cpp_CActorDestination_process_FUN_00447140(&this_ptr->base,delta_time);
  return;
}
