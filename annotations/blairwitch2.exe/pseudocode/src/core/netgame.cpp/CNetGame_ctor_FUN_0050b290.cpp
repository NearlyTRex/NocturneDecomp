// Name: core_netgame.cpp_CNetGame_ctor_FUN_0050b290
// Address: 0050b290
// Address Range: [[0050b290, 0050b315]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0050b290(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0050b290(CNetGame *this_ptr)

{
  char cVar1;
  int iVar2;
  CSocket *pCVar3;
  char *pcVar4;
  CSocket *pCVar5;
  
  iVar2 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo);
  pCVar3 = support_trisock_cpp_CSocket_ctor_FUN_00579000((CSocket *)(iVar2 + 0x160));
  ((CNetGame *)(pCVar3 + -0x60))->connection_type = CONNECTION_NONE;
  pCVar3[-0x5f].handle = 0;
  pcVar4 = "MyComputer";
  pCVar3[-0x59].handle = 0;
  pCVar3[-0x18].handle = 0xffffffff;
  pCVar5 = pCVar3 + -0x5e;
  pCVar3[-0x17].handle = 0xffffffff;
  do {
    cVar1 = *pcVar4;
    *(char *)&pCVar5->handle = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)&pCVar5->handle + 1) = cVar1;
    pCVar5 = (CSocket *)((int)&pCVar5->handle + 2);
  } while (cVar1 != '\0');
  pCVar3[-2].handle = 0;
  return (CNetGame *)(pCVar3 + -0x60);
}
