// Name: core_filmreel.cpp_CFilmProjector_process_FUN_00482010
// Address: 00482010
// Address Range: [[00482010, 0048219c]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmProjector_process_FUN_00482010(CActorDestination *param_1,float param_2)

#include "nocturne.h"

void core_filmreel_cpp_CFilmProjector_process_FUN_00482010(CActorDestination *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  
  if (param_1->triggered == 0) {
    if (param_1[1].needs_actor_search != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(0x014B98EC,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)param_1[2].base.actor_name);
      uVar4 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"35-end.wav");
      *(uint *)param_1[2].base.actor_name = uVar4;
    }
  }
  else {
    fVar1 = (float)3.1415926535000001;
    (param_1->dest_actor->orient).vec.z = (param_1->dest_actor->orient).vec.z - param_2 * fVar1;
    param_1[1].persistent_event_flag =
         (int)((float)param_1[1].persistent_event_flag - param_2 * fVar1);
    if (param_1[1].needs_actor_search == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (param_1->dest_actor,g_CFilmReelActorType_01c08c8c.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        PTR_01cc4800 = "..\\core\\filmreel.cpp";
        INT_01cc4804 = 0x11e;
        core_main_c_FUN_004c8440("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_0044c310(0x014B98EC,(char *)&pCVar3[2].orient);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)param_1[2].base.actor_name);
      uVar4 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"35-start.wav");
      *(uint *)param_1[2].base.actor_name = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)param_1[2].base.actor_name);
      if (iVar2 == 0) {
        uVar4 = (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"35-loop.wav");
        *(uint *)param_1[2].base.actor_name = uVar4;
      }
    }
    if ((CDemonActor *)param_1[1].triggered == param_1->dest_actor) {
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70(0x01C03A10,param_1[1].what_event);
    }
  }
  param_1[1].needs_actor_search = param_1->triggered;
  core_dest_cpp_CActorDestination_process_FUN_0044b850(param_1,param_2);
  return;
}
