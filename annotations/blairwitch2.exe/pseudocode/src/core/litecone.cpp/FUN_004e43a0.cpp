// Name: core_litecone.cpp_FUN_004e43a0
// Address: 004e43a0
// Address Range: [[004e43a0, 004e4420]]
// Convention: unknown
// Signature: void core_litecone_cpp_FUN_004e43a0(CDemonActor *param_1)

#include "nocturne.h"

void core_litecone_cpp_FUN_004e43a0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(param_1 + 1,&DAT_005dc11a);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x4,"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x8,"state");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xc,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x70,"offEvent");
  return;
}
