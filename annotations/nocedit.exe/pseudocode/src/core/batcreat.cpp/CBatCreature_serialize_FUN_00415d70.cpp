// Name: core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70
// Address: 00415d70
// Address Range: [[00415d70, 00415db7]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature * this_ptr)

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_serialize_FUN_00415d70(CBatCreature *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_serializeFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
