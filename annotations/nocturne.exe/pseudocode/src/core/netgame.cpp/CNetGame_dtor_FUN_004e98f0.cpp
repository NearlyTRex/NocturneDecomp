// Name: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
// Address: 004e98f0
// Address Range: [[004e98f0, 004e9909]]
// Convention: unknown
// Signature: _SOCKET * core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(int param_1)

#include "nocturne.h"

_SOCKET * core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(int param_1)

{
  _SOCKET *p_Var1;
  
  p_Var1 = support_trisock_cpp_bindSocketWrapper_FUN_00548ee0((_SOCKET *)(param_1 + 0x170),0);
  return p_Var1 + -0x5c;
}
