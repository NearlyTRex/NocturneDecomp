// Name: core_batman.cpp_CBatman_serialize_FUN_00417580
// Address: 00417580
// Address Range: [[00417580, 0041763a]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_serialize_FUN_00417580(CBatman * this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_serialize_FUN_00417580(CBatman *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  if (g_CBatmanClassVersion < 2) {
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk1 + 8),"fallEvent");
    if (g_CBatmanClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->mist_state,"mistState");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->vanish_timer,"vanishTimer");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->new_pos,"newPos");
  return;
}
