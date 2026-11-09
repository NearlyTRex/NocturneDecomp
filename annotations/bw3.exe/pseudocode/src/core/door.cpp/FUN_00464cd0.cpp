// Name: core_door.cpp_FUN_00464cd0
// Address: 00464cd0
// Address Range: [[00464cd0, 0046500c]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_00464cd0(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_00464cd0(CDemonActor *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x28,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x2c,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x30,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x34,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x38,"openEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[2].field_0x9c,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[6].field_0x54,"openSound");
  core_actor_cpp_archiveString_FUN_0040b680(&param_1[6].field_0xb8,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[7].field_0x28,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040b400(&param_1[7].field_0x2c,"origPos");
  core_actor_cpp_archiveVector_FUN_0040b400(&param_1[7].field_0x38,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[7].field_0x44,"param");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[7].field_0x48,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[7].field_0x4c,"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[7].field_0x50,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[2].field_0x24,"groundType");
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680
              (&param_1[2].field_0x100,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040b680
              (&param_1[3].field_0xc,"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[7].field_0x60,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b680(&param_1[4].field_0x110,"scriptOpenEvent");
      if (param_1[4].field_0x110 == '\0') {
        *(uint *)&param_1[3].field_0x70 = 0;
      }
      else {
        pcVar2 = &DAT_005bbe89;
        pcVar3 = &param_1[3].field_0x74;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)&param_1[3].field_0x70 = 1;
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040c0c0(&param_1[3].field_0x70,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[7].field_0x68,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[7].field_0x6c,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[7].field_0x70,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[7].field_0x74,"allowBulletHoles");
  }
  if (10 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[6].field_0x11c,"lockedSound");
  }
  if (0xb < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&param_1[7].field_0x7c,"shakeMeEvent");
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[7].field_0x78,"shakeMeStrength");
  }
  if (g_CDoorClassVersion < 0xd) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&param_1[7].field_0xe0,"handleVertexIndex");
  return;
}
