// Name: core_stairs.cpp_FUN_00562010
// Address: 00562010
// Address Range: [[00562010, 00562083]]
// Convention: unknown
// Signature: void core_stairs_cpp_FUN_00562010(CDemonActor *param_1)

#include "nocturne.h"

void core_stairs_cpp_FUN_00562010(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(param_1 + 1,&DAT_005eb150);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x4,&DAT_005eb155);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x8,"width");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x14,"count");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[4].field_0xbc,"groundType");
  return;
}
