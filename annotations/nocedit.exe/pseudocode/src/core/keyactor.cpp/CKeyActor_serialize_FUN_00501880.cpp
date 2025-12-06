// Name: core_keyactor.cpp_CKeyActor_serialize_FUN_00501880
// Address: 00501880
// Address Range: [[00501880, 005018eb]]
// Convention: __cdecl
// Signature: void core_keyactor.cpp_CKeyActor_serialize_FUN_00501880(CKeyActor * this_ptr)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_serialize_FUN_00501880(CKeyActor *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char *apcStack_f8 [61];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->key_mask,"keyMask");
  if (g_CKeyActorClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(apcStack_f8,"descriptiveName");
  return;
}
