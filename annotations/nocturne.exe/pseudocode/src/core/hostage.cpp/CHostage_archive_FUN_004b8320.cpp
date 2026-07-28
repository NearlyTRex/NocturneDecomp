// Name: core_hostage.cpp_CHostage_archive_FUN_004b8320
// Address: 004b8320
// Address Range: [[004b8320, 004b853c]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_archive_FUN_004b8320(int param_1)

#include "nocturne.h"

void core_hostage_cpp_CHostage_archive_FUN_004b8320(int param_1)

{
  core_npc_cpp_FUN_004eed10(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 0x1f91c),"followState");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)(param_1 + 0x1f924),"hostageState");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1 + 0x1f928),"goalWayPoint");
  if (INT_005ba980 < 10) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
              ((CMotionController *)(param_1 + 0x150),"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              ((CMotionController *)(param_1 + 0x150),"motion state");
  }
  core_actor_cpp_archivePartStatus_FUN_0040cbf0
            ((CDeformableModelInstance *)(param_1 + 0x150),"partStatus");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1 + 0x1f570),"rescueDistance");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f574),"rescueCondition");
  if ((1 < INT_005ba980) && (INT_005ba980 < 5)) {
    core_actor_cpp_archiveClothList_FUN_0040cf70
              ((CClothList *)(param_1 + 0x2a8c),"clothList");
  }
  if (2 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f5d8),"rescueEvent");
  }
  if (3 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1 + 0x1f5f8),"heroFoundMeEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1 + 0x1f65c),"heroLeftMeEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1 + 0x1f6c0),"heroCameBackEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1 + 0x1f788),"goingToSitDownEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f7ec),"sitDownEvent");
  }
  if (5 < INT_005ba980) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1 + 0x1f944),"noShadowsWhenSaved");
  }
  if (6 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f724),"getEatenEvent");
  }
  if ((7 < INT_005ba980) && (INT_005ba980 < 0xc)) {
    core_actor_cpp_archiveLocalizedString_FUN_0040c7f0
              ((char *)(param_1 + 0x2440),"descriptiveName");
  }
  if (8 < INT_005ba980) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)(param_1 + 0x1f92c),"sitDownWayPoint");
  }
  if (INT_005ba980 < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f850),"damageSound");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 0x1f8b4),"dieSound");
  return;
}
