// Name: core_mobster.cpp_FUN_004ffb70
// Address: 004ffb70
// Address Range: [[004ffb70, 004ffc97]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_004ffb70(CEnemy *param_1)

#include "nocturne.h"

void core_mobster_cpp_FUN_004ffb70(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CMobsterClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  if (g_CMobsterClassVersion == 2) {
    core_actor_cpp_archiveClothList_FUN_0040bfd0(&param_1->field_0x2d0c,"clothList");
  }
  if (4 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x1c,"postMode");
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x20,"ourPost");
  }
  if (5 < g_CMobsterClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x24,"vehicle");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x28,"sideOfCar");
  }
  if (g_CMobsterClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x2c,"holdPosFlag");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x30,"holdPosCond");
  return;
}
