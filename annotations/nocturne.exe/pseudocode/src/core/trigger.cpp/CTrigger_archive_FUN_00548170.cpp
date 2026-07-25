// Name: core_trigger.cpp_CTrigger_archive_FUN_00548170
// Address: 00548170
// Address Range: [[00548170, 00548400]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_archive_FUN_00548170(int param_1)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_archive_FUN_00548170(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x164,"triggerState");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x158,"triggerSize");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x154,"triggerType");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x21c,"onName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x280,"offName");
  if (INT_005c1130 < 7) {
    if (1 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x16c,"whoTriggers");
      core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x170,"actorTriggerName");
    }
    if (2 < INT_005c1130) {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x214,"lightMin");
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x218,"lightMax");
    }
    if ((3 < INT_005c1130) && (*(int *)(param_1 + 0x16c) == 5)) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2ec,"laserType");
    }
    if (4 < INT_005c1130) {
      if (*(int *)(param_1 + 0x16c) == 1) {
        core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1c0,"actorTriggerTypes");
      }
      if (*(int *)(param_1 + 0x16c) == 7) {
        core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2f0,"hitPoints");
      }
    }
    if (5 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x210,"pressurePlate");
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x16c,"whoTriggers");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x170,"actorTriggerName");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1c0,"actorTriggerTypes");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x214,"lightMin");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x218,"lightMax");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2ec,"laserType");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2f0,"hitPoints");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x210,"pressurePlate");
    if (INT_005c1130 < 8) {
      core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(param_1);
    }
    else {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x150,"testRadius");
    }
    if (8 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2f8,"autoAimAtMe");
    }
    if (9 < INT_005c1130) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x168,"shape");
    }
    if (10 < INT_005c1130) {
      core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2fc,"damageActorWildcard");
      return;
    }
  }
  return;
}
