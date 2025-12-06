// Name: core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990
// Address: 00412990
// Address Range: [[00412990, 004129e8]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor * this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_serialize_FUN_00412990(CBackgroundActor *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)this_ptr->model_name,"modelName");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->collide_with_me,"collideWithMe");
  if (g_CBackgroundActorClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  return;
}
