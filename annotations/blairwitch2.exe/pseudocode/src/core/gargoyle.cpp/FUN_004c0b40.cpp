// Name: core_gargoyle.cpp_FUN_004c0b40
// Address: 004c0b40
// Address Range: [[004c0b40, 004c0be5]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c0b40(CEnemy *param_1)

#include "nocturne.h"

void core_gargoyle_cpp_FUN_004c0b40(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x30,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x34,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x38,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x3c,"homeBase");
  return;
}
