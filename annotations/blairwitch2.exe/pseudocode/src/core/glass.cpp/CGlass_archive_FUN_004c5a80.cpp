// Name: core_glass.cpp_CGlass_archive_FUN_004c5a80
// Address: 004c5a80
// Address Range: [[004c5a80, 004c5b7d]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_archive_FUN_004c5a80(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_archive_FUN_004c5a80(CGlass *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->glass_size,"?glassSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b730
            ((this_ptr->glass_texture).texture_name,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->opacity,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->shattered,"shattered");
    core_actor_cpp_archiveString_FUN_0040b730(this_ptr->break_event,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->mirror_flag,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730
              (this_ptr->breakable_condition,"breakableCondition");
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->background_flag,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040b730
            ((this_ptr->broken_texture).texture_name,"brokenTexture");
  return;
}
