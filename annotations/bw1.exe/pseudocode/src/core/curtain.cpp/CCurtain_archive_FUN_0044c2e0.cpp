// Name: core_curtain.cpp_CCurtain_archive_FUN_0044c2e0
// Address: 0044c2e0
// Address Range: [[0044c2e0, 0044c4f9]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0044c2e0(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_archive_FUN_0044c2e0(CCurtain *this_ptr)

{
  uint uStack_8;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,"?curtainSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x16c,"curtainTexture");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x17c,"opacity");
  uStack_8 = 0;
  if (1 < g_CCurtainClassVersion) {
    if (g_CCurtainClassVersion < 4) {
      core_actor_cpp_archiveInteger_FUN_0040b670((int *)&uStack_8,"cinched");
      *(uint *)&this_ptr->field_0x180 = (uint)((uStack_8 & 1) != 0);
      *(uint *)&this_ptr->field_0x18c = (uint)((uStack_8 & 2) != 0);
      *(uint *)&this_ptr->field_0x184 = (uint)((uStack_8 & 4) != 0);
      *(uint *)&this_ptr->field_0x188 = (uint)((uStack_8 & 8) != 0);
    }
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x65b14,"weight");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x65b18,"dampen");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x65b1c,"spring");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x65b20,"friction");
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x65b24,"gravity");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x65b2c,"hitFloor");
  }
  if (2 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1f8,"simulateMe");
  }
  if (3 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x180,"cinchedTop");
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x18c,"cinchedBottom");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x184,"cinchedLeft")
    ;
    core_actor_cpp_archiveInteger_FUN_0040b670
              ((int *)&this_ptr->field_0x188,"cinchedRight");
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x190,"falling");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x194,"letGoEvent");
  }
  if (4 < g_CCurtainClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x1fc,"patchSize");
  }
  if (g_CCurtainClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x200,"blockVirtualDirectorFlag");
  return;
}
