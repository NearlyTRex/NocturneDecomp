// Name: core_mimic.cpp_FUN_004f1c20
// Address: 004f1c20
// Address Range: [[004f1c20, 004f1cee]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004f1c20(CEnemy *param_1)

#include "nocturne.h"

void core_mimic_cpp_FUN_004f1c20(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x64,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[4].field_0x8b10,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[4].field_0x8b14,"mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[4].field_0x8b18,"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"mirrorCondition");
  return;
}
