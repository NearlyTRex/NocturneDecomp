// Name: core_trash.cpp_CTrash_serialize_FUN_005dec80
// Address: 005dec80
// Address Range: [[005dec80, 005decb7]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_serialize_FUN_005dec80(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_serialize_FUN_005dec80(CTrash *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->home_pos,"homePos");
  return;
}
