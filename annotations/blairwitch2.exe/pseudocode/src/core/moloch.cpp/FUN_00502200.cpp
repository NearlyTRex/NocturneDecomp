// Name: core_moloch.cpp_FUN_00502200
// Address: 00502200
// Address Range: [[00502200, 00502273]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_00502200(int param_1)

#include "nocturne.h"

void core_moloch_cpp_FUN_00502200(int param_1)

{
  core_hero_cpp_FUN_004ce590(param_1);
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 0x27900),"humanToDemonCond")
  ;
  core_actor_cpp_archiveString_FUN_0040b730((char *)(param_1 + 0x27964),"demonToHumanCond")
  ;
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x278f4),"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 0x278f8),"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(param_1 + 0x278fc,"morphTimer");
  return;
}
