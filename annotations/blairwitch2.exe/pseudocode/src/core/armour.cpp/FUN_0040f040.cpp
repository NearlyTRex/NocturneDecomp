// Name: core_armour.cpp_FUN_0040f040
// Address: 0040f040
// Address Range: [[0040f040, 0040f09b]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040f040(CEnemy *param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040f040(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"fallApartEvent");
  return;
}
