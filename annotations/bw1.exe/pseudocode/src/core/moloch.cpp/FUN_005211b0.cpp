// Name: core_moloch.cpp_FUN_005211b0
// Address: 005211b0
// Address Range: [[005211b0, 00521223]]
// Convention: unknown
// Signature: void core_moloch_cpp_FUN_005211b0(CHero *param_1)

#include "nocturne.h"

void core_moloch_cpp_FUN_005211b0(CHero *param_1)

{
  core_hero_cpp_FUN_004eab00(param_1);
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 0x2235c),"humanToDemonCond")
  ;
  core_actor_cpp_archiveString_FUN_0040b440((char *)(param_1 + 0x223c0),"demonToHumanCond")
  ;
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x22350),"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 0x22354),"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(param_1 + 0x22358,"morphTimer");
  return;
}
