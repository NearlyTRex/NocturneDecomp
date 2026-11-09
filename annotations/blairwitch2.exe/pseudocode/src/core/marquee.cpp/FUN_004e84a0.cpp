// Name: core_marquee.cpp_FUN_004e84a0
// Address: 004e84a0
// Address Range: [[004e84a0, 004e8513]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_004e84a0(CDemonActor *param_1)

#include "nocturne.h"

void core_marquee_cpp_FUN_004e84a0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 1),"courseName");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x20,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x24,"param");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x28,"phase");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x48,&DAT_005dc779);
  return;
}
