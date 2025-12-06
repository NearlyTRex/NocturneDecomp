// Name: core_dynamite.cpp_FUN_0049cf20
// Address: 0049cf20
// Address Range: [[0049cf20, 0049cf60]]
// Convention: unknown
// Signature: undefined core_dynamite.cpp_FUN_0049cf20()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_dynamite.cpp_FUN_0049cf20(uint param_1) */

void core_dynamite_cpp_FUN_0049cf20(void)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  char local_68 [100];
  
  *(uint *)(in_stack_00000004 + 0x578) = _DAT_0065d30c;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_68,"fuse.wav");
  uVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(uint *)(in_stack_00000004 + 0x588) = uVar1;
  return;
}
