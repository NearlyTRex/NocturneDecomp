// Name: core_hostage.cpp_CHostage_archive_FUN_004b8320
// Address: 004b8320
// Address Range: [[004b8320, 004b853c]]
// Convention: unknown
// Signature: void core_hostage_cpp_CHostage_archive_FUN_004b8320(CNPC *param_1)

#include "nocturne.h"

void core_hostage_cpp_CHostage_archive_FUN_004b8320(CNPC *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_FUN_004eed10(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.model.transformed_vertices + 0x2b),"followState");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.model.transformed_vertices[0x2b].z,"hostageState");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[1].base.model.transformed_vertices + 0x2c),
             "goalWayPoint");
  if (INT_005ba980 < 10) {
    model_ptr = &(param_1->base).model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
  }
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(&(param_1->base).model,"partStatus");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)(param_1 + 1),"rescueDistance");
  core_actor_cpp_archiveString_FUN_0040c6d0
            (param_1[1].base.base.actor_name + 4,"rescueCondition");
  if ((1 < INT_005ba980) && (INT_005ba980 < 5)) {
    core_actor_cpp_archiveClothList_FUN_0040cf70(&(param_1->base).cloth_list,"clothList");
  }
  if (2 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.base.validation_magic,"rescueEvent");
  }
  if (3 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              (param_1[1].base.base.create_event + 0x10,"heroFoundMeEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.base.platform_orientation_delta,"heroLeftMeEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.model,"heroCameBackEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.model.transformed_vertices[9].y,
               "goingToSitDownEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].base.model.transformed_vertices[0x11].z,"sitDownEvent");
  }
  if (5 < INT_005ba980) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].base.model.transformed_vertices[0x2e].y,
               "noShadowsWhenSaved");
  }
  if (6 < INT_005ba980) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1[1].base.model.transformed_vertices + 1),"getEatenEvent");
  }
  if ((7 < INT_005ba980) && (INT_005ba980 < 0xc)) {
    core_actor_cpp_archiveLocalizedString_FUN_0040c7f0
              ((param_1->base).descriptive_name,"descriptiveName");
  }
  if (8 < INT_005ba980) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&param_1[1].base.model.transformed_vertices[0x2c].y,
               "sitDownWayPoint");
  }
  if (INT_005ba980 < 0xb) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].base.model.transformed_vertices + 0x1a),"damageSound");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.model.transformed_vertices[0x22].y,"dieSound");
  return;
}
