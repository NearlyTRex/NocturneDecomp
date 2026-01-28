// Name: core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0
// Address: 00485dd0
// Address Range: [[00485dd0, 00486019]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_load_FUN_00485dd0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_CDraculaBride_load(CDraculaBride*
   pDraculaBride) */

void core_dracbrid_cpp_CDraculaBride_load_FUN_00485dd0(void)

{
  int iVar1;
  CDemonActor *actor_ptr;
  CEnemy *in_stack_00000004;
  char *pcVar2;
  int local_14;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CDraculaBrideClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if ((1 < g_CDraculaBrideClassVersion) && (g_CDraculaBrideClassVersion < 6)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (((2 < g_CDraculaBrideClassVersion) &&
      (core_actor_cpp_serializeString_FUN_0040b5c0
                 ((char **)&in_stack_00000004[1].base.base.location.area_id,"riseEvent"),
      g_CDraculaBrideClassVersion < 4)) &&
     (core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_14,"initialState"),
     g_ActorReadingMode == 1)) {
    if (local_14 == 1) {
      pcVar2 = "vincoffin";
    }
    else {
      pcVar2 = "incoffin";
    }
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
              (&(in_stack_00000004->base).model.motion_controller,pcVar2,0.0);
  }
  if (3 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&(in_stack_00000004->base).model.motion_controller,"motionState");
  }
  if (g_CDraculaBrideClassVersion == 4) {
    iVar1 = 0;
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&(in_stack_00000004->base).cloth_count,"clothCount");
    if (0 < (in_stack_00000004->base).cloth_count) {
      pcVar2 = (in_stack_00000004->base).cloth_data;
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeString_FUN_0040b5c0((char **)pcVar2,(char *)0x0);
        pcVar2 = pcVar2 + 0x28;
      } while (iVar1 < (in_stack_00000004->base).cloth_count);
    }
  }
  if (6 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base.base.create_event + 0x18),
               "freakyVoiceNumber");
  }
  if (7 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.base.previous_transform_state.position.z,
               "exploded");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base.base.create_event + 0x3c),"partCount");
    iVar1 = 0;
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[1].base.base.previous_transform_state.orientation.x,
               "fadeTimer");
    if (0 < *(int *)(in_stack_00000004[1].base.base.create_event + 0x3c)) {
      actor_ptr = (CDemonActor *)(in_stack_00000004[1].base.base.create_event + 0x40);
      do {
        iVar1 = iVar1 + 1;
        core_actor_cpp_serializeActor_FUN_0040b870(actor_ptr,"partList");
        actor_ptr = (CDemonActor *)(actor_ptr->actor_name + 4);
      } while (iVar1 < *(int *)(in_stack_00000004[1].base.base.create_event + 0x3c));
    }
  }
  if (8 < g_CDraculaBrideClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[1].base.base.create_event + 0x1c),"mistState");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000004[1].base.base.create_event + 0x20),"vanishTimer")
    ;
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(in_stack_00000004[1].base.base.create_event + 0x2c),"newPos");
    return;
  }
  return;
}
