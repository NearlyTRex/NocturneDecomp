// Name: core_simbox.cpp_FUN_00540450
// Address: 00540450
// Address Range: [[00540450, 005404f8]]
// Convention: unknown
// Signature: void core_simbox_cpp_FUN_00540450(CDemonActor *param_1)

#include "nocturne.h"

void core_simbox_cpp_FUN_00540450(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"@modelName" + 1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"weight");
  if (g_CSimBoxClassVersion < 2) {
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x1e8,"initialVelocity");
    core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[1].field_0x1f4,"initRotVel");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x184,"triggerEvent");
    if (g_CSimBoxClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,&DAT_005e68f2);
  return;
}
