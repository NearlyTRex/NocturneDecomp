// Name: core_boxactor.cpp_FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d349]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041d270(CBoxActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041d270(CBoxActor *param_1)

{
  uint uStack_c;
  
  core_boxactor_cpp_FUN_0041c7f0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"lightType");
  if (*(int *)(param_1 + 1) == 0) {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[7].field_0xbc,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b550(&param_1[7].field_0xc8,"lightOrient");
    if (DAT_007bc038 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&uStack_c,"lightFov");
      *(uint *)&param_1[1].field_0x3c = uStack_c;
    }
    else {
      uStack_c = *(uint *)&param_1[1].field_0x3c;
      core_actor_cpp_archiveFloat_FUN_0040b8e0(&uStack_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[4].field_0x53c,"light status")
  ;
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x144,"light falloff");
  return;
}
