// Name: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
// Address: 004e98f0
// Address Range: [[004e98f0, 004e9909]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(CNetGame *this_ptr,uint flags)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(CNetGame *this_ptr,uint flags)

{
  _SOCKET *p_Var1;
  
  p_Var1 = support_trisock_cpp_bindSocketWrapper_FUN_00548ee0(&this_ptr->socket,0);
  return (CNetGame *)(p_Var1 + -0x5c);
}
