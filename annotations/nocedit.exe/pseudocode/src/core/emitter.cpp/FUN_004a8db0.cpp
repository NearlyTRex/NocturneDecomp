// Name: core_emitter.cpp_FUN_004a8db0
// Address: 004a8db0
// Address Range: [[004a8db0, 004a8fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_FUN_004a8db0(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a8db0(uint param_1, uint
   param_2) */

void __cdecl core_emitter_cpp_FUN_004a8db0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Emitter type",0xb,(int *)&PTR_s_Spark_006792ec);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"State",(int *)(in_stack_00000004[1].actor_name + 0x10));
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Max Emit Time",
             (float *)&in_stack_00000004[1].standing_platform,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  if (*(int *)in_stack_00000004[1].actor_name != 3) {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (in_stack_00000008,"Emit period",(float *)&in_stack_00000004[3].orient_matrix
               ,0.0,9999.0,(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"On event",in_stack_00000004[1].actor_name + 0x14);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Off event",in_stack_00000004[1].create_event);
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (in_stack_00000008,"Laser R",(int *)&in_stack_00000004[1].unk3.y,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (in_stack_00000008,"Laser G",(int *)&in_stack_00000004[1].unk3.z,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (in_stack_00000008,"Laser B",(int *)&in_stack_00000004[1].unk4,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (in_stack_00000008,"Laser Type",(int *)&in_stack_00000004[1].unk3,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (in_stack_00000008,"Slew target mode",&DAT_02cf2b5c);
    if ((DAT_02cf2b5c != 0) && (in_stack_00000004 == DAT_02cf2b78)) {
      core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
                (in_stack_00000008,"Target",(CVector3f *)&DAT_02cf2b60,
                 (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    }
  }
  if (*(int *)in_stack_00000004[1].actor_name == 4) {
    core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
              (in_stack_00000008,"Model file (.kfm)",
               (CKeyFramedModelInstance *)&in_stack_00000004[1].unk4.y,0);
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (in_stack_00000008,"Speed",(float *)&in_stack_00000004[2].blood_effect_timer,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (in_stack_00000008,"Periodic",&in_stack_00000004[2].unk9);
  if (in_stack_00000004[2].unk9 != 0) {
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (in_stack_00000008,"Off time",
               (float *)in_stack_00000004[2].footstep_sound_code,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  if (*(int *)in_stack_00000004[1].actor_name == 9) {
    core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
              (in_stack_00000008,"Actor to fry",&in_stack_00000004[2].unk11,1,
               "CDemonActor",(CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (in_stack_00000008,"Sound",&in_stack_00000004[2].unk12);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Sound type",2,(int *)&PTR_s_Normal_00679344);
  return;
}
