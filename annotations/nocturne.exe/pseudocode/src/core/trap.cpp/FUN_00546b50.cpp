// Name: core_trap.cpp_FUN_00546b50
// Address: 00546b50
// Address Range: [[00546b50, 00546b87]]
// Convention: unknown
// Signature: void core_trap_cpp_FUN_00546b50(CDemonActor *param_1)

#include "nocturne.h"

void core_trap_cpp_FUN_00546b50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&param_1[2].orient,"wolfInTrap")
  ;
  return;
}
