// Name: core_glass.cpp_CGlass_archive_FUN_004acbc0
// Address: 004acbc0
// Address Range: [[004acbc0, 004accbd]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_archive_FUN_004acbc0(CDemonActor *param_1)

#include "nocturne.h"

void core_glass_cpp_CGlass_archive_FUN_004acbc0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),"glassSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name + 0x14,"glassTexture");
  if (1 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].location.position.y,"opacity");
  }
  if (2 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)&param_1[1].location.position.z,"shattered");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[1].location.area_id,"breakEvent");
  }
  if (3 < INT_005b9668) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              ((int *)(param_1[1].create_event + 0x18),"mirrorFlag");
  }
  if (4 < INT_005b9668) {
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)&param_1[2].health,"breakableCondition");
  }
  if (INT_005b9668 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[2].create_event + 0x50),"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[2].create_event + 0x5c,"brokenTexture")
  ;
  return;
}
