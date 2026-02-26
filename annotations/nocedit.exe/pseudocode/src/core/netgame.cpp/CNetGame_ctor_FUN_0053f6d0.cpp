// Name: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
// Address Range: [[0053f6d0, 0053f755]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

{
  char cVar1;
  CNetGame_ptr_32 pvVar4;
  CNetGame_ptr_368 pSVar4;
  char *pcVar2;
  char *pcVar3;
  
  pvVar4 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo);
  pSVar4 = support_trisock_cpp_invalidateSocket_FUN_005e1ae0(&ADJ(pvVar4)->socket);
  ADJ(pSVar4)->connection_type = CONNECTION_NONE;
  ADJ(pSVar4)->network_mode = NET_MODE_DISCONNECTED;
  pcVar2 = "MyComputer";
  ADJ(pSVar4)->player_count = 0;
  ADJ(pSVar4)->server_player_index = -1;
  pcVar3 = ADJ(pSVar4)->player_name;
  ADJ(pSVar4)->local_player_index = -1;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pSVar4)->has_pending_sim_frame = 0;
  return ADJ(pSVar4);
}
