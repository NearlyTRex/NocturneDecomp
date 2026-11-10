// Name: core_netgame.cpp_CNetGame_ctor_FUN_0050b290
// Address: 0050b290
// Address Range: [[0050b290, 0050b315]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0050b290(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0050b290(CNetGame *this_ptr)

{
  CSocket CVar1;
  int iVar2;
  CSocket *pCVar3;
  char *pcVar4;
  CSocket *pCVar5;
  
  iVar2 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo);
  pCVar3 = support_trisock_cpp_CSocket_ctor_FUN_00579000((CSocket *)(iVar2 + 0x160));
  ((CNetGame *)(pCVar3 + -0x180))->connection_type = CONNECTION_NONE;
  *(uint *)(pCVar3 + -0x17c) = 0;
  pcVar4 = "MyComputer";
  *(uint *)(pCVar3 + -0x164) = 0;
  *(uint *)(pCVar3 + -0x60) = 0xffffffff;
  pCVar5 = pCVar3 + -0x178;
  *(uint *)(pCVar3 + -0x5c) = 0xffffffff;
  do {
    CVar1 = (CSocket)*pcVar4;
    *pCVar5 = CVar1;
    if (CVar1 == (CSocket)0x0) break;
    CVar1 = *(CSocket *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 2;
    pCVar5[1] = CVar1;
    pCVar5 = pCVar5 + 2;
  } while (CVar1 != (CSocket)0x0);
  *(uint *)(pCVar3 + -8) = 0;
  return (CNetGame *)(pCVar3 + -0x180);
}
