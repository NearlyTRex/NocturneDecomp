// Name: core_emitter.cpp_CEmitter_getPropertyList_FUN_004a8db0
// Address: 004a8db0
// Address Range: [[004a8db0, 004a8fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_getPropertyList_FUN_004a8db0(CEmitter *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_emitter_cpp_CEmitter_getPropertyList_FUN_004a8db0(CEmitter *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Emitter type",0xb,g_EmitterTypePairs,&this_ptr->emitter_type);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"State",&this_ptr->emitter_state);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Max Emit Time",&this_ptr->max_emit_time,
             (CActorPropertyValidatorFunc *)0x0);
  if (this_ptr->emitter_type != 3) {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (property_list,"Emit period",&this_ptr->emit_period,0.0,9999.0,
               (CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"On event",this_ptr->event_on);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"Off event",this_ptr->event_off);
  if (this_ptr->emitter_type == 3) {
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Laser R",&this_ptr->laser_r,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Laser G",&this_ptr->laser_g,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Laser B",&this_ptr->laser_b,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (property_list,"Laser Type",&this_ptr->laser_type,
               (CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (property_list,"Slew target mode",&g_SlewTargetMode);
    if ((g_SlewTargetMode != 0) && (this_ptr == PTR_02cf2b78)) {
      core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
                (property_list,"Target",&g_EmitterTarget,(CActorPropertyValidatorFunc *)0x0
                );
    }
  }
  if (this_ptr->emitter_type == 4) {
    core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
              (property_list,"Model file (.kfm)",&this_ptr->model,0);
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (property_list,"Speed",&this_ptr->rock_speed,
               (CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Periodic",&this_ptr->periodic_flag);
  if (this_ptr->periodic_flag != 0) {
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (property_list,"Off time",&this_ptr->max_wait_time,
               (CActorPropertyValidatorFunc *)0x0);
  }
  if (this_ptr->emitter_type == 9) {
    core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
              (property_list,"Actor to fry",(CDemonActor **)&this_ptr->dest_actor,1,
               "CDemonActor",(CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Sound",this_ptr->wav_name);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (property_list,"Sound type",2,g_EmitterSoundTypePairs,&this_ptr->sfx_type);
  return;
}
