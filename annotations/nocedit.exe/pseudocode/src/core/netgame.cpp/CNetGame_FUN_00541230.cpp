// Name: core_netgame.cpp_CNetGame_FUN_00541230
// Address: 00541230
// Address Range: [[00541230, 00541255]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_FUN_00541230()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_FUN_00541230(uint param_1, uint
   param_2, uint param_3) */

void core_netgame_cpp_CNetGame_FUN_00541230(void)

{
  int in_stack_00000004;
  SNetworkAddr *in_stack_00000008;
  int *in_stack_0000000c;
  
  support_trisock_cpp_performSocketOperation_FUN_005e1ca0
            ((SSocketContext *)(in_stack_00000004 + 0x170),(char *)(in_stack_0000000c + 1),
             *in_stack_0000000c + -4,in_stack_00000008);
  return;
}
