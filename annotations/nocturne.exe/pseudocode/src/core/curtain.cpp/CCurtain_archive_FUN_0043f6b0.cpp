// Name: core_curtain.cpp_CCurtain_archive_FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f8c9]]
// Convention: unknown
// Signature: void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(int param_1)

#include "nocturne.h"

void core_curtain_cpp_CCurtain_archive_FUN_0043f6b0(int param_1)

{
  uint local_8;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"curtainSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x164,"curtainTexture");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x174,"opacity");
  local_8 = 0;
  if (1 < INT_005ad3f0) {
    if (INT_005ad3f0 < 4) {
      core_actor_cpp_archiveInteger_FUN_0040c900(&local_8,"cinched");
      *(uint *)(param_1 + 0x178) = (uint)((local_8 & 1) != 0);
      *(uint *)(param_1 + 0x184) = (uint)((local_8 & 2) != 0);
      *(uint *)(param_1 + 0x17c) = (uint)((local_8 & 4) != 0);
      *(uint *)(param_1 + 0x180) = (uint)((local_8 & 8) != 0);
    }
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x65b0c,"weight");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x65b10,"dampen");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x65b14,"spring");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x65b18,"friction");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x65b1c,"gravity");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x65b24,"hitFloor");
  }
  if (2 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1f0,"simulateMe");
  }
  if (3 < INT_005ad3f0) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x178,"cinchedTop");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x184,"cinchedBottom");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x17c,"cinchedLeft");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x180,"cinchedRight");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x188,"falling");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x18c,"letGoEvent");
  }
  if (4 < INT_005ad3f0) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 500,"patchSize");
  }
  if (INT_005ad3f0 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1f8,"blockVirtualDirectorFlag");
  return;
}
