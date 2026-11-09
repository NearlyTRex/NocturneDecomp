// Name: core_boxactor.cpp_FUN_004231e0
// Address: 004231e0
// Address Range: [[004231e0, 004232b9]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_004231e0(CBoxActor *param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_004231e0(CBoxActor *param_1)

{
  uint uStack_c;
  
  core_boxactor_cpp_CBoxActor_archive_FUN_00422760(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 1),"lightType");
  if (*(int *)(param_1 + 1) == 0) {
    core_actor_cpp_archiveVector_FUN_0040b1c0(&param_1[8].field_0x268,"bLightPos");
    core_actor_cpp_archiveOrientation_FUN_0040b260(&param_1[8].field_0x274,"lightOrient");
    if (DAT_007c3038 == 1) {
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&uStack_c,"lightFov");
      *(uint *)&param_1[1].field_0x3c = uStack_c;
    }
    else {
      uStack_c = *(uint *)&param_1[1].field_0x3c;
      core_actor_cpp_archiveFloat_FUN_0040b5f0(&uStack_c,"lightFov");
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[5].field_0x2d8,"light status")
  ;
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[1].field_0x144,"light falloff");
  return;
}
