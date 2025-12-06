// Name: core_dracbrid.cpp_ShotThruHeart_FUN_00486020
// Address: 00486020
// Address Range: [[00486020, 0048606e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_ShotThruHeart_FUN_00486020()

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_ShotThruHeart(uint param_1, uint
   param_2) */

void core_dracbrid_cpp_ShotThruHeart_FUN_00486020(void)

{
  CConsole *this_ptr;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  this_ptr = g_CConsolePtr;
  if (((in_stack_00000008[0xc] != 0x6c) &&
      (*in_stack_00000008 == *(int *)(in_stack_00000004 + 0xbed4))) &&
     (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)20);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Shot thru the heart\n");
    return;
  }
  return;
}
