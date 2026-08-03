// Name: core_curtain.cpp_CCurtain_archive_FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f8c9]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(CCurtain *this_ptr)

{
  uint local_8;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->curtain_size,"curtainSize");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((this_ptr->curtain_texture).texture_name,"curtainTexture");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->opacity,"opacity");
  local_8 = 0;
  if (1 < INT_005ad3f0) {
    if (INT_005ad3f0 < 4) {
      core_actor_cpp_archiveInteger_FUN_0040c900((int *)&local_8,"cinched");
      this_ptr->cinched_top = (uint)((local_8 & 1) != 0);
      this_ptr->cinched_bottom = (uint)((local_8 & 2) != 0);
      this_ptr->cinched_left = (uint)((local_8 & 4) != 0);
      this_ptr->cinched_right = (uint)((local_8 & 8) != 0);
    }
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->weight,"weight");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->dampen,"dampen");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->spring,"spring");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->friction,"friction");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->gravity,"gravity");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->hit_floor,"hitFloor");
  }
  if (2 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->simulate_me,"simulateMe");
  }
  if (3 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->cinched_top,"cinchedTop");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->cinched_bottom,"cinchedBottom");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->cinched_left,"cinchedLeft");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->cinched_right,"cinchedRight");
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->falling,"falling");
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->let_go_event,"letGoEvent");
  }
  if (4 < INT_005ad3f0) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->patch_size,"patchSize");
  }
  if (INT_005ad3f0 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  return;
}
