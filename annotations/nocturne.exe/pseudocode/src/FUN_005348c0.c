// Name: FUN_005348c0
// Address: 005348c0
// Address Range: [[005348c0, 00534933]]
// Convention: unknown
// Signature: void FUN_005348c0(int param_1)

#include "nocturne.h"

void FUN_005348c0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x150,&DAT_00595182);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x154,&DAT_00595187);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x158,"width");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x164,"count");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xa28,"groundType");
  return;
}
