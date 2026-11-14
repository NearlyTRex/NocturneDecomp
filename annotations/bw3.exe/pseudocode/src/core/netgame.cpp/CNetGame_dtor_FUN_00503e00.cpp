// Name: core_netgame.cpp_CNetGame_dtor_FUN_00503e00
// Address: 00503e00
// Address Range: [[00503e00, 00503e19]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_00503e00(CNetGame *this_ptr,uint flags)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_00503e00(CNetGame *this_ptr,uint flags)

{
  CSocket *pCVar1;
  
  pCVar1 = support_trisock_cpp_CSocket_dtor_FUN_0056f8e0(&this_ptr->socket,0);
  return (CNetGame *)(pCVar1 + -0x60);
}
