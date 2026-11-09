// Name: core_biggs.cpp_FUN_00415250
// Address: 00415250
// Address Range: [[00415250, 004152d3]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00415250(CEnemy *param_1)

#include "nocturne.h"

void core_biggs_cpp_FUN_00415250(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040bb60(&param_1->field_0x2b4,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x180,"morphTimer");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xdb0,"morphEvent");
  return;
}
