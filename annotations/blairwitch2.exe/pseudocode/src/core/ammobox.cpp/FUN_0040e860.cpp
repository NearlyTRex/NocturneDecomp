// Name: core_ammobox.cpp_FUN_0040e860
// Address: 0040e860
// Address Range: [[0040e860, 0040e92d]]
// Convention: unknown
// Signature: void core_ammobox_cpp_FUN_0040e860(CDemonActor *param_1)

#include "nocturne.h"

void core_ammobox_cpp_FUN_0040e860(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x17c,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1bc,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1c0,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x1c4,0);
  if (1 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x1c8,&DAT_005cb2ca);
  }
  if (2 < g_CAmmoBoxClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[1].field_0x1cc,"hasCollision");
  }
  if (g_CAmmoBoxClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1d0,"openSound");
  return;
}
