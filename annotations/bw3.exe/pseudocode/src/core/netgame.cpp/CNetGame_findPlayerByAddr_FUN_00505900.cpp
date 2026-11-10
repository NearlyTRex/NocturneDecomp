// Name: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00505900
// Address: 00505900
// Address Range: [[00505900, 00505945]]
// Convention: __cdecl
// Signature: int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00505900(CNetGame *this_ptr,SNetworkAddr *addr)

#include "nocturne.h"

int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00505900(CNetGame *this_ptr,SNetworkAddr *addr)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->player_count) {
    piVar1 = (int *)&this_ptr->players[0].field_0x1c;
    do {
      if (((short)piVar1[1] == *(short *)(addr + 4)) && (*(int *)addr == *piVar1)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x20;
    } while (iVar2 < this_ptr->player_count);
  }
  return -1;
}
