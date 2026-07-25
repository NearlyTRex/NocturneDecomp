// Name: core_door.cpp_CDoor_archive_FUN_00455ee0
// Address: 00455ee0
// Address Range: [[00455ee0, 004561ce]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_archive_FUN_00455ee0(int param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_archive_FUN_00455ee0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d0,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d4,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d8,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2dc,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2e0,"openEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x344,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x85c,"openSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x8c0,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x988,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x98c,"origPos");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x998,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x9a4,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x9a8,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x9ac,"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x9b0,"closeSpeed");
  if (1 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"groundType");
  }
  if (2 < INT_005ae690) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3a8,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x40c,"eventToTriggerWhenClosed");
  }
  if (3 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x9c0,"oneShot");
  }
  if (INT_005ae690 < 7) {
    if (4 < INT_005ae690) {
      core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x668,"scriptOpenEvent");
      if (*(char *)(param_1 + 0x668) == '\0') {
        *(uint *)(param_1 + 0x470) = 0;
      }
      else {
        pcVar2 = "true";
        pcVar3 = (char *)(param_1 + 0x474);
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)(param_1 + 0x470) = 1;
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040d110(param_1 + 0x470,"openRules");
  }
  if (5 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x9c8,"blockVirtualDirectorFlag");
  }
  if (7 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x9cc,"plotAsBoxInShadow");
  }
  if (8 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x9d0,"allowedSides");
  }
  if (9 < INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x9d4,"allowBulletHoles");
  }
  if (INT_005ae690 < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x924,"lockedSound");
  return;
}
