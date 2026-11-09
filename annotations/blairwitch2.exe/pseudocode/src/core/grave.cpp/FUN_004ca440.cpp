// Name: core_grave.cpp_FUN_004ca440
// Address: 004ca440
// Address Range: [[004ca440, 004ca539]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004ca440(CDemonActor *param_1)

#include "nocturne.h"

void core_grave_cpp_FUN_004ca440(CDemonActor *param_1)

{
  int iStack_c;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"model name");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,&DAT_005d95c5);
  if (g_CGraveClassVersion < 2) {
    core_actor_cpp_archiveInteger_FUN_0040b960(&iStack_c,"active");
    *(uint *)&param_1[1].field_0x188 = 0;
    if (iStack_c != 0) {
      *(uint *)&param_1[1].field_0x188 = 1;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x188,"graveState")
    ;
  }
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x17c,"curFrame");
  if (2 < g_CGraveClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x18c,"hideOnFirstFrame");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x190,"startCondition");
  }
  if (g_CGraveClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1f4,"startSound");
  return;
}
