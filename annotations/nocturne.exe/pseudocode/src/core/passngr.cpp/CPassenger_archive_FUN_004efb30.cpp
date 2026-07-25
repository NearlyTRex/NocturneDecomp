// Name: core_passngr.cpp_CPassenger_archive_FUN_004efb30
// Address: 004efb30
// Address Range: [[004efb30, 004efc09]]
// Convention: unknown
// Signature: void core_passngr_cpp_CPassenger_archive_FUN_004efb30(int param_1)

#include "nocturne.h"

void core_passngr_cpp_CPassenger_archive_FUN_004efb30(int param_1)

{
  FUN_004eed10(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1f570,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1f5d4,"wolfModelName");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x202a8,"morphTime");
  if ((1 < INT_005be078) && (INT_005be078 < 5)) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName")
    ;
    core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (2 < INT_005be078) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x202ac,"wolfSize");
  }
  if (3 < INT_005be078) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1f5f4,"nameOfWolf");
  }
  if (INT_005be078 < 6) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1f614,"transformWav");
  return;
}
