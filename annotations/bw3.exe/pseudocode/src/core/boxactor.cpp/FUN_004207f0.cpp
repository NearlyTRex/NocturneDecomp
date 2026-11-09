// Name: core_boxactor.cpp_FUN_004207f0
// Address: 004207f0
// Address Range: [[004207f0, 004208c9]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_004207f0(CBoxActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_004207f0(CBoxActor *param_1)

{
  uint uStack_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_0041fb90(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)(param_1 + 1),"lightType");
  if (*(int *)(param_1 + 1) == 0) {
    core_actor_cpp_archiveVector_FUN_0040b400(&param_1[7].field_0x640,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b4a0(&param_1[7].field_0x64c,"lightOrient");
    if (DAT_007df9b8 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b830(&uStack_c,"lightFov");
      *(uint *)&param_1[1].field_0x3c = uStack_c;
    }
    else {
      uStack_c = *(uint *)&param_1[1].field_0x3c;
      core_actor_cpp_archiveFloat_FUN_0040b830(&uStack_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[5].field_0x118,"light status")
  ;
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[1].field_0x144,"light falloff");
  return;
}
