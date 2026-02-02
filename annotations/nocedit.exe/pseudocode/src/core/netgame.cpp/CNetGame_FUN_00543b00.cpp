// Name: core_netgame.cpp_CNetGame_FUN_00543b00
// Address: 00543b00
// Address Range: [[00543b00, 00543b11]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00543b00(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00543b00(CNetGame *this_ptr)

{
  int in_stack_00000008;
  byte in_stack_0000000c;
  
  this_ptr->connection_type = in_stack_00000008;
  *(byte *)&this_ptr->network_mode = in_stack_0000000c;
  return;
}
