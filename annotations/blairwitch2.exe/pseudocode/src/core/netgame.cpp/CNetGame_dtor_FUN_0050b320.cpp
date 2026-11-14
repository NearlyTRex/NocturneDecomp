// Name: core_netgame.cpp_CNetGame_dtor_FUN_0050b320
// Address: 0050b320
// Address Range: [[0050b320, 0050b339]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0050b320(CNetGame *this_ptr,uint flags)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_dtor_FUN_0050b320(CNetGame *this_ptr,uint flags)

{
  CSocket *pCVar1;
  
  pCVar1 = support_trisock_cpp_CSocket_dtor_FUN_00579010(&this_ptr->socket,0);
  return (CNetGame *)(pCVar1 + -0x60);
}
