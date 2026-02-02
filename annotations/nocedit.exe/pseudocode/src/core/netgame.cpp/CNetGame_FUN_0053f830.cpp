// Name: core_netgame.cpp_CNetGame_FUN_0053f830
// Address: 0053f830
// Address Range: [[0053f830, 0053f855]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_0053f830(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_0053f830(CNetGame *this_ptr)

{
  LPWSADATA in_stack_00000008;
  
  core_netgame_cpp_CNetGame_FUN_0053fd00(this_ptr);
  support_trisock_cpp_bindAndInvalidateSocket_FUN_005e1d20((SSocketContext *)(this_ptr->unk + 0x58))
  ;
  support_trisock_cpp_cleanupWinsock_FUN_005e1ee0((WORD)this_ptr,in_stack_00000008);
  return;
}
