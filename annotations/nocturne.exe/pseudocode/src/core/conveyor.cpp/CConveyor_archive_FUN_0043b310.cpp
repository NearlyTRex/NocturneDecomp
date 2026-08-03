// Name: core_conveyor.cpp_CConveyor_archive_FUN_0043b310
// Address: 0043b310
// Address Range: [[0043b310, 0043b3a4]]
// Convention: unknown
// Signature: void core_conveyor_cpp_CConveyor_archive_FUN_0043b310(CPlatform *param_1)

#include "nocturne.h"

void core_conveyor_cpp_CConveyor_archive_FUN_0043b310(CPlatform *param_1)

{
  core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),"size");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)(param_1[1].base.actor_name + 0xc),"direction");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].base.actor_name + 0x18,"startEvent")
  ;
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].base.create_event + 4,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.platform_position_delta,"state");
  if (g_INT_005ad380 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.platform_position_delta.y,"actorClass");
  return;
}
