// Name: core_netgame.cpp_CNetGame_dtor_FUN_004e98f0
// Address: 004e98f0
// Address Range: [[004e98f0, 004e9909]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(CNetGame *this_ptr,uint flags)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_004e98f0(CNetGame *this_ptr,uint flags)

{
  CSocket *pCVar1;
  
  pCVar1 = support_trisock_cpp_CSocket_dtor_FUN_00548ee0(&this_ptr->socket,0);
  return (CNetGame *)(pCVar1 + -0x5c);
}
