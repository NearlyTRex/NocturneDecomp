// Name: core_succubus.cpp_FUN_00592c40
// Address: 00592c40
// Address Range: [[00592c40, 00592c87]]
// Convention: unknown
// Signature: void core_succubus_cpp_FUN_00592c40(CEnemy *param_1)

#include "nocturne.h"

void core_succubus_cpp_FUN_00592c40(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  return;
}
