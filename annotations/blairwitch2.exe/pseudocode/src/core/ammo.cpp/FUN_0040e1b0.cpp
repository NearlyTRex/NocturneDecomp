// Name: core_ammo.cpp_FUN_0040e1b0
// Address: 0040e1b0
// Address Range: [[0040e1b0, 0040e20f]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040e1b0(CDemonActor *param_1)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040e1b0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x17c,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1bc,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1c0,"ammoType");
  return;
}
