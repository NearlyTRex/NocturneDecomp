// Name: core_bugs.cpp_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425908]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_004257f0(CEnemy *param_1)

#include "nocturne.h"

void core_bugs_cpp_FUN_004257f0(CEnemy *param_1)

{
  CKeyFramedModelInstance *this_ptr;
  int iVar1;
  byte *puVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x4,"?count" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[1].field_0x6408,"modelCount");
  if (DAT_007c3038 == 1) {
    this_ptr = (CKeyFramedModelInstance *)&param_1[1].field_0x640c;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr,&DAT_005d5061);
      this_ptr = this_ptr + 1;
    } while (this_ptr != (CKeyFramedModelInstance *)&param_1[1].field_0x69fc);
  }
  iVar1 = 0;
  if (0 < *(int *)&param_1[1].field_0x6408) {
    puVar2 = &param_1[1].field_0x640c;
    do {
      iVar1 = iVar1 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(puVar2,"modelName");
      puVar2 = puVar2 + 0x17c;
    } while (iVar1 < *(int *)&param_1[1].field_0x6408);
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[2].field_0x1774,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[2].field_0x1778,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[2].field_0x177c,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[2].field_0x17e0,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&param_1[2].field_0x1844,"animateEvent");
  return;
}
