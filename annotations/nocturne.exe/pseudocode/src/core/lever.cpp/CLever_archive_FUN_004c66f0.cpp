// Name: core_lever.cpp_CLever_archive_FUN_004c66f0
// Address: 004c66f0
// Address Range: [[004c66f0, 004c68ca]]
// Convention: unknown
// Signature: void core_lever_cpp_CLever_archive_FUN_004c66f0(CDemonActor *param_1)

#include "nocturne.h"

void core_lever_cpp_CLever_archive_FUN_004c66f0(CDemonActor *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  pcVar3 = local_d4;
  if (DAT_00763e88 == 1) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"modelName");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
              ((CKeyFramedModelInstance *)(param_1 + 1),local_d4);
  }
  else {
    pcVar2 = param_1[1].create_event;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient,"leverType");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)((int)&param_1[2].orient + 8),"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x24,"offEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[2].collision_disabled,"sound")
  ;
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[2].orient.vec.y,"param");
  if (1 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[3].actor_name + 0x14),"momentaryFlag");
  }
  if (2 < INT_005bacbc) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1[3].actor_name + 0x18),"linkedLever");
  }
  if (3 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[3].actor_name + 0x1c),"endVertexIndex");
  }
  if (4 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[3].location,"moving");
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[3].location.position.y,"moveToPct");
  }
  if (5 < INT_005bacbc) {
    core_actor_cpp_archiveRules_FUN_0040d110
              ((CRuleList *)&param_1[3].location.position.z,"rules");
  }
  if (6 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[6].location.position.y,"allowedSides");
  }
  if (INT_005bacbc < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[6].location.position.z,"enableCollision");
  return;
}
