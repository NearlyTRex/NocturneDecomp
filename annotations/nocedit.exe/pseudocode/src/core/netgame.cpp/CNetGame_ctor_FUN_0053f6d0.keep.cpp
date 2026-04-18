// Name: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
// MANUAL RECONSTRUCTION
// Address Range: [[0053f6d0, 0053f755]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

{
  CNetGame_ptr_32 pvVar4;
  CNetGame_ptr_368 pSVar4;

  pvVar4 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo);
  pSVar4 = support_trisock_cpp_invalidateSocket_FUN_005e1ae0(&ADJ(pvVar4)->socket);
  ADJ(pSVar4)->connection_type = CONNECTION_NONE;
  ADJ(pSVar4)->network_mode = NET_MODE_DISCONNECTED;
  ADJ(pSVar4)->player_count = 0;
  ADJ(pSVar4)->server_player_index = -1;
  ADJ(pSVar4)->local_player_index = -1;
  strcpy(ADJ(pSVar4)->player_name,"MyComputer");
  ADJ(pSVar4)->has_pending_sim_frame = 0;
  return ADJ(pSVar4);
}
