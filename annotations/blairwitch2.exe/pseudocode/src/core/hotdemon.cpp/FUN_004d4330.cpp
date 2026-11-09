// Name: core_hotdemon.cpp_FUN_004d4330
// Address: 004d4330
// Address Range: [[004d4330, 004d4380]]
// Convention: unknown
// Signature: undefined4 core_hotdemon_cpp_FUN_004d4330(CEnemy *param_1)

#include "nocturne.h"

uint core_hotdemon_cpp_FUN_004d4330(CEnemy *param_1)

{
  uint uVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  uVar1 = core_actor_cpp_archiveMotionState_FUN_0040bb60
                    (&param_1->field_0x2b4,"motion state");
  return uVar1;
}
