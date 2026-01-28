// Name: core_glass.cpp_CGlass_serialize_FUN_004ea090
// Address: 004ea090
// Address Range: [[004ea090, 004ea18d]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_serialize_FUN_004ea090(CGlass *this_ptr)

{
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->glass_size,"glassSize");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->glass_texture).texture_name,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->opacity,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->shattered,"shattered");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->break_event,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->mirror_flag,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)this_ptr->breakable_condition,"breakableCondition");
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->background_flag,"backgroundFlag")
  ;
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->broken_texture).texture_name,"brokenTexture");
  return;
}
