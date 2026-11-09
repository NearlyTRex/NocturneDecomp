// Name: core_vessel.cpp_FUN_00585b60
// Address: 00585b60
// Address Range: [[00585b60, 00585c6c]]
// Convention: unknown
// Signature: void core_vessel_cpp_FUN_00585b60(CDemonActor *param_1)

#include "nocturne.h"

void core_vessel_cpp_FUN_00585b60(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x180,&DAT_005ede2e);
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x184,"neutral");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x188,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x250,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x254,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x260,"state");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x264,"timer");
  if (1 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1ec,"winEvent");
  }
  if (2 < g_CCryptVesselClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x258,"eatDistance");
  }
  if (g_CCryptVesselClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x25c,"visualType");
  return;
}
