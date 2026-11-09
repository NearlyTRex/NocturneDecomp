// Name: core_armour.cpp_FUN_0040ebe0
// Address: 0040ebe0
// Address Range: [[0040ebe0, 0040ec3b]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040ebe0(CEnemy *param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040ebe0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1->field_0xc1d0,"speed");
  core_actor_cpp_FUN_0040b7f0
            ((CDeformableModelInstance *)&param_1->field_0x158,"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)&param_1->field_0x158,"motion state");
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 1),"fallApartEvent");
  return;
}
