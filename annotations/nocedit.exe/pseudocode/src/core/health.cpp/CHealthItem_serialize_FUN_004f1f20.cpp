// Name: core_health.cpp_CHealthItem_serialize_FUN_004f1f20
// Address: 004f1f20
// Address Range: [[004f1f20, 004f1f9f]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_serialize_FUN_004f1f20(CHealthItem *this_ptr)

#include "nocturne.h"

void __cdecl core_health_cpp_CHealthItem_serialize_FUN_004f1f20(CHealthItem *this_ptr)

{
  char *local_104 [64];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->use_count,"useCount");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->hp_restored,"hpRestored");
  if (g_CHealthItemClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(local_104,"descriptiveName");
  return;
}
