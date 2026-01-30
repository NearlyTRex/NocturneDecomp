// Name: core_crate.cpp_CCrate_load_FUN_00448910
// Address: 00448910
// Address Range: [[00448910, 00448954]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_load_FUN_00448910(void)

#include "nocturne.h"

/* Signature: void actors_other_crate.cpp_CCrate_load(CCrate* pCrate, uint param_2, char*
   param_3, char* param_4) */

void __cdecl core_crate_cpp_CCrate_load_FUN_00448910(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  if (g_CCrateClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[2].location.area_id,"lastPlatform");
  return;
}
