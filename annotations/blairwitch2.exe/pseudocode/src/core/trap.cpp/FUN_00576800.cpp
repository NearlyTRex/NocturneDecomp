// Name: core_trap.cpp_FUN_00576800
// Address: 00576800
// Address Range: [[00576800, 00576837]]
// Convention: unknown
// Signature: void core_trap_cpp_FUN_00576800(CDemonActor *param_1)

#include "nocturne.h"

void core_trap_cpp_FUN_00576800(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x180,"wolfInTrap");
  return;
}
