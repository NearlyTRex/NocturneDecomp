// Name: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00541260
// Address: 00541260
// MANUAL RECONSTRUCTION
// Address Range: [[00541260, 005412a3]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame *this_ptr,SNetworkAddr *addr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00541260(CNetGame *this_ptr,SNetworkAddr *addr)

{
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->player_count) {
    do {
      if ((this_ptr->players[iVar2].addr.port == addr->port) &&
          (this_ptr->players[iVar2].addr.ip_address == addr->ip_address)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->player_count);
  }
  return -1;
}
