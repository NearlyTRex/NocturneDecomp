// Name: core_filmreel.cpp_CFilmProjector_process_FUN_00496560
// Address: 00496560
// Address Range: [[00496560, 004966e2]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00496560(CFilmProjector *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_00496560(CFilmProjector *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  
  if ((this_ptr->base).triggered == 0) {
    if (this_ptr->prev_dest_state != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,(char *)0x5c048e);
      this_ptr->sfx_handle = uVar4;
    }
  }
  else {
    pCVar3 = (this_ptr->base).dest_actor;
    fVar1 = delta_time * _DAT_005c049b;
    (pCVar3->orient).vec.z = (pCVar3->orient).vec.z - fVar1;
    this_ptr->reel_rotation = this_ptr->reel_rotation - fVar1;
    if (this_ptr->prev_dest_state == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         ((this_ptr->base).dest_actor,g_CFilmReelClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        _DAT_01d71de0 = "..\\core\\filmreel.cpp";
        _DAT_01d71de4 = 0x11d;
        core_main_c_FUN_004e4330("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00
                (g_CFilterFXPtr,(char *)&pCVar3[2].location.position.z);
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"35-start.wav");
      this_ptr->sfx_handle = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00556700(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"35-loop.wav");
        this_ptr->sfx_handle = uVar4;
      }
    }
    if (this_ptr->key_reel == (this_ptr->base).dest_actor) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,this_ptr->key_event);
    }
  }
  this_ptr->prev_dest_state = (this_ptr->base).triggered;
  core_dest_cpp_CActorDestination_process_FUN_004591f0(&this_ptr->base,delta_time);
  return;
}
