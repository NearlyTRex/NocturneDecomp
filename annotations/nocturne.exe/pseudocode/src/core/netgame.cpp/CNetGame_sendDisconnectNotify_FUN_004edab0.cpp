// Name: core_netgame.cpp_CNetGame_sendDisconnectNotify_FUN_004edab0
// Address: 004edab0
// Address Range: [[004edab0, 004edae3]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_sendDisconnectNotify_FUN_004edab0(uint param_1,uint param_2,uint param_3)

{
  uint local_10;
  byte local_c;
  uint local_b;
  
  local_c = 0xd;
  local_b = param_3;
  local_10 = 9;
  core_netgame_cpp_CNetGame_sendPacket_FUN_004eb3c0(param_1,param_2,&local_10);
  return;
}
