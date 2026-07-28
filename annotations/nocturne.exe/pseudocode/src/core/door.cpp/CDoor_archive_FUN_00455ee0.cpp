// Name: core_door.cpp_CDoor_archive_FUN_00455ee0
// Address: 00455ee0
// Address Range: [[00455ee0, 004561ce]]
// Convention: unknown
// Signature: void core_door_cpp_CDoor_archive_FUN_00455ee0(CDemonActor *param_1)

#include "nocturne.h"

void core_door_cpp_CDoor_archive_FUN_00455ee0(CDemonActor *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient,"doorType");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient.vec.y,"doorSide");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient.vec.z,"doorState");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient_matrix,"doorSwing");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[2].orient_matrix.m[0].y,"openEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x2c,"closeEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[6].create_event + 4,"openSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[6].platform_position_delta,"closeSound");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[7].orient_matrix.m[2].y,"keyMask");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[7].orient_matrix.m[2].z,"origPos");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[7].validation_magic,"origOrient");
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[7].create_prob,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)param_1[7].create_event,"maxParam");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[7].create_event + 4),"openSpeed");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[7].create_event + 8),"closeSpeed");
  if (1 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"groundType");
  }
  if (2 < g_INT_005ae690) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].scale,"eventToTriggerWhenOpen");
    core_actor_cpp_archiveString_FUN_0040c6d0
              (param_1[3].actor_name + 0x1c,"eventToTriggerWhenClosed");
  }
  if (3 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[7].create_event + 0x18),"oneShot");
  }
  if (g_INT_005ae690 < 7) {
    if (4 < g_INT_005ae690) {
      core_actor_cpp_archiveString_FUN_0040c6d0
                ((char *)&param_1[4].previous_transform_state,"scriptOpenEvent");
      if (*(char *)&param_1[4].previous_transform_state.position.x == '\0') {
        param_1[3].create_event[8] = '\0';
        param_1[3].create_event[9] = '\0';
        param_1[3].create_event[10] = '\0';
        param_1[3].create_event[0xb] = '\0';
      }
      else {
        pcVar2 = "true";
        pcVar3 = param_1[3].create_event + 0xc;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        param_1[3].create_event[8] = '\x01';
        param_1[3].create_event[9] = '\0';
        param_1[3].create_event[10] = '\0';
        param_1[3].create_event[0xb] = '\0';
      }
    }
  }
  else {
    core_actor_cpp_archiveRules_FUN_0040d110
              ((CRuleList *)(param_1[3].create_event + 8),"openRules");
  }
  if (5 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[7].create_event + 0x20),"blockVirtualDirectorFlag");
  }
  if (7 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[7].create_event + 0x24),"plotAsBoxInShadow");
  }
  if (8 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[7].create_event + 0x28),"allowedSides");
  }
  if (9 < g_INT_005ae690) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[7].create_event + 0x2c),"allowBulletHoles");
  }
  if (g_INT_005ae690 < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[6].next_actor,"lockedSound");
  return;
}
