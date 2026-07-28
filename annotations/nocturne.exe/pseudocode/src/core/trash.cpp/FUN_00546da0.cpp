// Name: core_trash.cpp_FUN_00546da0
// Address: 00546da0
// Address Range: [[00546da0, 00546dd7]]
// Convention: unknown
// Signature: void core_trash_cpp_FUN_00546da0(CDemonActor *param_1)

#include "nocturne.h"

void core_trash_cpp_FUN_00546da0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[2].location.area_id,"homePos");
  return;
}
