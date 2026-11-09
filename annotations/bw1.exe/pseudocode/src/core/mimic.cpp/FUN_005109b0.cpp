// Name: core_mimic.cpp_FUN_005109b0
// Address: 005109b0
// Address Range: [[005109b0, 00510a7e]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_005109b0(CEnemy *param_1)

#include "nocturne.h"

void core_mimic_cpp_FUN_005109b0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[1].field_0x64,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[5].field_0xa258,"attackMode");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&param_1[5].field_0xa25c,"mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
    core_actor_cpp_archiveString_FUN_0040b440(&param_1[5].field_0xa260,"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 1),"mirrorCondition");
  return;
}
