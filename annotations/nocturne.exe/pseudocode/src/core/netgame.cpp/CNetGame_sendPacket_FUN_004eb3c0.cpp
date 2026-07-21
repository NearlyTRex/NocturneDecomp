// Name: core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
// Address: 004eb3c0
// Address Range: [[004eb3c0, 004eb3e5]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(int param_1,undefined4 param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(int param_1,uint param_2,int *param_3)

{
  support_trisock_cpp_performSocketOperation_FUN_00549090
            (param_1 + 0x170,param_3 + 1,*param_3 + -4,param_2);
  return;
}
