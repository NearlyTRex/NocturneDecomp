// Name: core_door.cpp_FUN_0045ff80
// Address: 0045ff80
// Address Range: [[0045ff80, 004602bc]]
// Convention: unknown
// Signature: void core_door_cpp_FUN_0045ff80(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_FUN_0045ff80(CDemonActor *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x180,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x184,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x188,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x18c,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x190,"openEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1f4,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[3].field_0x1a4,"openSound");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[3].field_0x208,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[4].field_0x1c,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[4].field_0x20,"origPos");
  core_actor_cpp_archiveVector_FUN_0040b4b0(&param_1[4].field_0x2c,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[4].field_0x38,"param");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[4].field_0x3c,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[4].field_0x40,"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[4].field_0x44,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x17c,"groundType")
    ;
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730
              (&param_1[1].field_0x258,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040b730
              (&param_1[2].field_0x8,"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[4].field_0x54,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_archiveString_FUN_0040b730(&param_1[2].field_0x264,"scriptOpenEvent");
      if (param_1[2].field_0x264 == '\0') {
        *(uint *)&param_1[2].field_0x6c = 0;
      }
      else {
        pcVar2 = &DAT_005d0b16;
        pcVar3 = &param_1[2].field_0x70;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        *(uint *)&param_1[2].field_0x6c = 1;
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040c170(&param_1[2].field_0x6c,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[4].field_0x5c,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[4].field_0x60,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[4].field_0x64,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960
              ((int *)&param_1[4].field_0x68,"allowBulletHoles");
  }
  if (10 < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[3].field_0x26c,"lockedSound");
  }
  if (0xb < g_CDoorClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[4].field_0x70,"shakeMeEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[4].field_0x6c,"shakeMeStrength");
  }
  if (g_CDoorClassVersion < 0xd) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&param_1[4].field_0xd4,"handleVertexIndex");
  return;
}
