// Name: core_netgame.cpp_FUN_00543ad0
// Address: 00543ad0
// Address Range: [[00543ad0, 00543af3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_FUN_00543ad0(void)

#include "nocturne.h"

int __cdecl core_netgame_cpp_FUN_00543ad0(void)

{
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (((short)in_stack_00000008[1] == (short)in_stack_00000004[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    return 1;
  }
  return 0;
}
