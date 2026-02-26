// Name: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260
// Address: 00541260
// Address Range: [[00541260, 005412a3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame *this_ptr,SNetworkAddr *addr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame *this_ptr,SNetworkAddr *addr)

{
  SNetworkAddr *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->player_count) {
    pSVar1 = &this_ptr->players[0].addr;
    do {
      if ((pSVar1->port == addr->port) && (pSVar1->ip_address == addr->ip_address)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 0xf;
    } while (iVar2 < this_ptr->player_count);
  }
  return -1;
}
