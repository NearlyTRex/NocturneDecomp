// Name: core_netgame.cpp_CNetGame_FUN_00541230
// Address: 00541230
// Address Range: [[00541230, 00541255]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_FUN_00541230(CNetGame *this_ptr)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_FUN_00541230(CNetGame *this_ptr)

{
  SNetworkAddr *in_stack_00000008;
  int *in_stack_0000000c;
  
  support_trisock_cpp_performSocketOperation_FUN_005e1ca0
            (&this_ptr->socket,(char *)(in_stack_0000000c + 1),*in_stack_0000000c + -4,
             in_stack_00000008);
  return;
}
