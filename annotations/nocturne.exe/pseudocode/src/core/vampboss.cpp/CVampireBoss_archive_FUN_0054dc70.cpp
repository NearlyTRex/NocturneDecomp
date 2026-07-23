// Name: core_vampboss.cpp_CVampireBoss_archive_FUN_0054dc70
// Address: 0054dc70
// Address Range: [[0054dc70, 0054dd43]]
// Convention: unknown
// Signature: void core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(int param_1)

#include "nocturne.h"

void core_vampboss_cpp_CVampireBoss_archive_FUN_0054dc70(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (1 < 0x00000004) {
    core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"human model motion state");
    core_actor_cpp_FUN_0040cb00(param_1 + 0xbd24,"bat model motion state");
  }
  if (2 < 0x00000004) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbedb4,"wayPoint0");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbedb8,"wayPoint1");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbedbc,"wayPoint2");
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbedc0,"wayPoint3");
  }
  if (0x00000004 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbe168,"form");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbed98,"morphT");
  return;
}
