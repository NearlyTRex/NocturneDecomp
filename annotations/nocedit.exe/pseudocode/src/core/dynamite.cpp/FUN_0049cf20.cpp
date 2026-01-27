// Name: core_dynamite.cpp_FUN_0049cf20
// Address: 0049cf20
// Address Range: [[0049cf20, 0049cf60]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cf20()

#include "nocturne.h"

/* Signature: byte actors_weapon_dynamite.cpp_FUN_0049cf20(uint param_1) */

void core_dynamite_cpp_FUN_0049cf20(void)

{
  uint uVar1;
  int in_stack_00000004;
  char local_68 [100];
  
  *(float *)(in_stack_00000004 + 0x578) = 3.5f;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(uint *)(in_stack_00000004 + 0x588) = uVar1;
  return;
}
