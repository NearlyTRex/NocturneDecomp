// Name: core_curtain.cpp_CCurtain_archive_FUN_00448420
// Address: 00448420
// Address Range: [[00448420, 00448639]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_archive_FUN_00448420(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_archive_FUN_00448420(CCurtain *this_ptr)

{
  uint uStack_8;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->curtain_size,"?curtainSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b680
            ((this_ptr->curtain_texture).texture_name,"curtainTexture");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->opacity,"opacity");
  uStack_8 = 0;
  if (1 < g_CCurtainClassVersion) {
    if (g_CCurtainClassVersion < 4) {
      core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&uStack_8,"cinched");
      this_ptr->cinched_top = (uint)((uStack_8 & 1) != 0);
      this_ptr->cinched_bottom = (uint)((uStack_8 & 2) != 0);
      this_ptr->cinched_left = (uint)((uStack_8 & 4) != 0);
      this_ptr->cinched_right = (uint)((uStack_8 & 8) != 0);
    }
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->weight,"weight");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->dampen,"dampen");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->spring,"spring");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->friction,"friction");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->gravity,"gravity");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->hit_floor,"hitFloor");
  }
  if (2 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->simulate_me,"simulateMe");
  }
  if (3 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->cinched_top,"cinchedTop");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->cinched_bottom,"cinchedBottom");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->cinched_left,"cinchedLeft");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->cinched_right,"cinchedRight");
    core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->falling,"falling");
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->let_go_event,"letGoEvent");
  }
  if (4 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->patch_size,"patchSize");
  }
  if (g_CCurtainClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  return;
}
