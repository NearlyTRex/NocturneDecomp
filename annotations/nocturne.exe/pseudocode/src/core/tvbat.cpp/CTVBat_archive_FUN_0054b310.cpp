// Name: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
// Address: 0054b310
// Address Range: [[0054b310, 0054b458]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CEnemy *param_1)

#include "nocturne.h"

void core_tvbat_cpp_CTVBat_archive_FUN_0054b310(CEnemy *param_1)

{
  if (INT_005c1174 < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0((CDemonActor *)param_1);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  }
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)(param_1[1].base.model.motion_controller.current_motion_name + 8),
             "homePos");
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1[1].base.base.actor_name + 4),"modelName");
  if (1 < INT_005c1174) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)param_1[1].base.model.motion_controller.current_motion_name,"speed"
              );
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.model.motion_controller.current_motion_name + 0x14),
               "maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.model.motion_controller.current_motion_name + 0x18),
               "maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)(param_1[1].base.model.motion_controller.current_motion_name + 0x1c),
               "rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040c880
              ((float *)&param_1[1].base.model.motion_controller.vtable,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)param_1[1].base.model.transformed_vertices,"followOrders");
  }
  if (INT_005c1174 < 4) {
    param_1[1].base.model.transformed_vertices[1].z = 0.0;
    if (INT_005c1174 < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].base.model.transformed_vertices[1].z,"state");
    if (INT_005c1174 < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].base.model.transformed_vertices + 2),(char *)0x0);
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[1].base.model.transformed_vertices[10].y,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880
            (&param_1[1].base.model.transformed_vertices[10].z,"periodicSoundTimerMax");
  return;
}
