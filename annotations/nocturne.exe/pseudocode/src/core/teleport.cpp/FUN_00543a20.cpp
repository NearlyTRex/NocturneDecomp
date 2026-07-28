// Name: core_teleport.cpp_FUN_00543a20
// Address: 00543a20
// Address Range: [[00543a20, 00543a51]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00543a20(CDemonActor *param_1)

#include "nocturne.h"

void core_teleport_cpp_FUN_00543a20(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450((CVector3f *)(param_1 + 1),(char *)0x0);
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[1].actor_name + 0xc),(char *)0x0);
  return;
}
