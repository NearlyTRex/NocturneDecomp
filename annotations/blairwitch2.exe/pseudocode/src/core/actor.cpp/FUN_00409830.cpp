// Name: core_actor.cpp_FUN_00409830
// Address: 00409830
// Address Range: [[00409830, 0040984f]]
// Convention: unknown
// Signature: undefined8 core_actor_cpp_FUN_00409830(undefined4 param_1,int param_2)

#include "nocturne.h"

ulonglong core_actor_cpp_FUN_00409830(uint param_1,int param_2)

{
  *(uint *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x50) = 0;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x44);
  return CONCAT44(*(uint *)(param_2 + 0x44),param_2);
}
