// Name: core_teleport.cpp_FUN_00572490
// Address: 00572490
// Address Range: [[00572490, 005724c1]]
// Convention: unknown
// Signature: void core_teleport_cpp_FUN_00572490(CDemonActor *param_1)

#include "nocturne.h"

void core_teleport_cpp_FUN_00572490(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(param_1 + 1,0);
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0xc,0);
  return;
}
