// Name: FUN_004de680
// Address: 004de680
// Address Range: [[004de680, 004de6f3]]
// Convention: unknown
// Signature: void FUN_004de680(int param_1)

#include "nocturne.h"

void FUN_004de680(int param_1)

{
  FUN_004b49a0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x21cfc,"humanToDemonCond");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x21d60,"demonToHumanCond");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x21cf0,"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x21cf4,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x21cf8,"morphTimer");
  return;
}
