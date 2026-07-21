// Name: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
// Address: 00550540
// Address Range: [[00550540, 0055064c]]
// Convention: unknown
// Signature: void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(int param_1)

#include "nocturne.h"

void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2d0,&DAT_005974cf);
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x2d4,"neutral");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2d8,"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x3a0,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x3a4,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x3b0,"state");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3b4,"timer");
  if (1 < 0x00000004) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x33c,"winEvent");
  }
  if (2 < 0x00000004) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3a8,"eatDistance");
  }
  if (0x00000004 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x3ac,"visualType");
  return;
}
