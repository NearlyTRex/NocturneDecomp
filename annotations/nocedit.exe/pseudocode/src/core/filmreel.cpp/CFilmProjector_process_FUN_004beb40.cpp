// Name: core_filmreel.cpp_CFilmProjector_process_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004beccc]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_004beb40(CFilmProjector *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_process_FUN_004beb40(CFilmProjector *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  
  if ((this_ptr->base).triggered == 0) {
    if (this_ptr->prev_dest_state != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"35-end.wav");
      this_ptr->sfx_handle = uVar4;
    }
  }
  else {
    pCVar3 = (this_ptr->base).dest_actor;
    fVar1 = (float)3.1415926535000001;
    (pCVar3->orient).vec.z = (pCVar3->orient).vec.z - delta_time * fVar1;
    this_ptr->reel_rotation = this_ptr->reel_rotation - delta_time * fVar1;
    if (this_ptr->prev_dest_state == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         ((this_ptr->base).dest_actor,g_CFilmReelClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\filmreel.cpp";
        g_CurrentLineNumber = 0x11e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730
                (g_CFilterFXPtr,(char *)&pCVar3[2].location.position.z);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
      uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                        ((CDemonActor *)this_ptr,"35-start.wav");
      this_ptr->sfx_handle = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(this_ptr->sfx_handle);
      if (iVar2 == 0) {
        uVar4 = (*((this_ptr->base).base.vtable._ub)->playSound)
                          ((CDemonActor *)this_ptr,"35-loop.wav");
        this_ptr->sfx_handle = uVar4;
      }
    }
    if (this_ptr->key_reel == (this_ptr->base).dest_actor) {
      core_event_cpp_CEventList_executeCommands_FUN_004aabe0(g_CEventListPtr,this_ptr->key_event);
    }
  }
  this_ptr->prev_dest_state = (this_ptr->base).triggered;
  core_dest_cpp_CActorDestination_process_FUN_0046f9b0(&this_ptr->base,delta_time);
  return;
}
