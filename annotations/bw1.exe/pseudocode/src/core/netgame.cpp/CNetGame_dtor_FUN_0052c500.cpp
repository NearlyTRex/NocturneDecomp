// Name: core_netgame.cpp_CNetGame_dtor_FUN_0052c500
// Address: 0052c500
// Address Range: [[0052c500, 0052c519]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0052c500(CNetGame *this_ptr,uint flags)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0052c500(CNetGame *this_ptr,uint flags)

{
  CSocket *pCVar1;
  
  pCVar1 = support_trisock_cpp_CSocket_dtor_FUN_0059c8f0((CSocket *)&this_ptr->field_0x178,0);
  return (CNetGame *)(pCVar1 + -0x178);
}
