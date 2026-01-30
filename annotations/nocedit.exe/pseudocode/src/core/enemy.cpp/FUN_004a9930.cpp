// Name: core_enemy.cpp_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_FUN_004a9930(void)

#include "nocturne.h"

int __cdecl core_enemy_cpp_FUN_004a9930(void)

{
  int in_stack_00000004;
  int in_stack_00000010;
  
  if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x118))();
    if (0.0 < (double)*(float *)(in_stack_00000010 + 4)) {
      round
                ((double)*(float *)(in_stack_00000010 + 4) * 1.2 * 0.25);
      core_gore_cpp_FUN_004edbb0();
      return 1;
    }
  }
  return 0;
}
