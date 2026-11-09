// Name: core_bugs.cpp_FUN_0041f7c0
// Address: 0041f7c0
// Address Range: [[0041f7c0, 0041f8d8]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_0041f7c0(CEnemy *param_1)

#include "nocturne.h"

void core_bugs_cpp_FUN_0041f7c0(CEnemy *param_1)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  byte *puVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x4,"?count" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x6408,"modelCount");
  if (DAT_007bc038 == 1) {
    this_ptr = (CKeyFramedModelInstance *)&param_1[1].field_0x640c;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(this_ptr,&DAT_005cc972);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CKeyFramedModelInstance *)&param_1[1].field_0x69fc);
  }
  iVar1 = 0;
  if (0 < *(int *)&param_1[1].field_0x6408) {
    puVar2 = &param_1[1].field_0x640c;
    do {
      iVar1 = iVar1 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(puVar2,"modelName");
      puVar2 = puVar2 + 0x17c;
    } while (iVar1 < *(int *)&param_1[1].field_0x6408);
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xd9dc,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0xd9e0,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xd9e4,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xda48,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xdaac,"animateEvent");
  return;
}
