// Name: core_glass.cpp_CGlass_archive_FUN_004acbc0
// Address: 004acbc0
// Address Range: [[004acbc0, 004accbd]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_archive_FUN_004acbc0(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_archive_FUN_004acbc0(CGlass *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->glass_size,"glassSize");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((this_ptr->glass_texture).texture_name,"glassTexture");
  if (1 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->opacity,"opacity");
  }
  if (2 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->shattered,"shattered");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->break_event,"breakEvent");
  }
  if (3 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->mirror_flag,"mirrorFlag");
  }
  if (4 < INT_005b9668) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (this_ptr->breakable_condition,"breakableCondition");
  }
  if (INT_005b9668 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->background_flag,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((this_ptr->broken_texture).texture_name,"brokenTexture");
  return;
}
