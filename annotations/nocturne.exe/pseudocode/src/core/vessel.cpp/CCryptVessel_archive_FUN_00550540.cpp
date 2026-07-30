// Name: core_vessel.cpp_CCryptVessel_archive_FUN_00550540
// Address: 00550540
// Address Range: [[00550540, 0055064c]]
// Convention: unknown
// Signature: void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(CDemonActor *param_1)

#include "nocturne.h"

void core_vessel_cpp_CCryptVessel_archive_FUN_00550540(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&param_1[2].orient,"prey");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[2].orient.vec.y,"neutral");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)((int)&param_1[2].orient + 8),"destroyedEvent");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[2].collision_disabled,"startLoc");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[2].process_disabled,"endLoc");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].scale.z,"state");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].blood_effect_timer,"timer")
  ;
  if (1 < g_INT_005c11c4) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x24,"winEvent");
  }
  if (2 < g_INT_005c11c4) {
    core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[2].scale,"eatDistance");
  }
  if (g_INT_005c11c4 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].scale.y,"visualType");
  return;
}
