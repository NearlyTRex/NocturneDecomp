// Name: core_actor.cpp_FUN_0040b0d0
// Address: 0040b0d0
// Address Range: [[0040b0d0, 0040b10d]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040b0d0(char *param_1,uint *param_2)

#include "nocturne.h"

void core_actor_cpp_FUN_0040b0d0(char *param_1,uint *param_2)

{
  core_actor_cpp_crc32ProcessString_FUN_0040e120(param_2,param_1);
  core_actor_cpp_crc32ProcessVector_FUN_0040e100(param_2,(CVector3f *)(param_1 + 0x20));
  core_actor_cpp_crc32ProcessVector_FUN_0040e100(param_2,(CVector3f *)(param_1 + 0x30));
  core_actor_cpp_crc32ProcessInt_FUN_0040e0e0(param_2,*(int *)(param_1 + 0x70));
  return;
}
