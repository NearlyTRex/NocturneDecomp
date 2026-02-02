// Name: core_netgame.cpp_CNetGame_FUN_00543ad0
// Address: 00543ad0
// Address Range: [[00543ad0, 00543af3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_FUN_00543ad0(CNetGame *this_ptr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_FUN_00543ad0(CNetGame *this_ptr)

{
  int *in_stack_00000008;
  
  if (((short)in_stack_00000008[1] == (short)this_ptr->network_mode) &&
     (this_ptr->connection_type == *in_stack_00000008)) {
    return 1;
  }
  return 0;
}
