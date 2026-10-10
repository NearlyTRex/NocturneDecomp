// Name: core_netgame.cpp_CNetGame_ctor_FUN_004e9860
// Address: 004e9860
// Address Range: [[004e9860, 004e98e5]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_004e9860(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_004e9860(CNetGame *this_ptr)

{
  char cVar1;
  void *pvVar2;
  CSocket *pCVar3;
  char *pcVar4;
  CSocket *pCVar5;
  
  pvVar2 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo_005a0e20);
  pCVar3 = support_trisock_cpp_CSocket_ctor_FUN_00548ed0((CSocket *)((int)pvVar2 + 0x150));
  ((CNetGame *)(pCVar3 + -0x5c))->connection_type = CONNECTION_NONE;
  pCVar3[-0x5b].handle = 0;
  pcVar4 = "MyComputer";
  pCVar3[-0x55].handle = 0;
  pCVar3[-0x18].handle = 0xffffffff;
  pCVar5 = pCVar3 + -0x5a;
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
  return (CNetGame *)(pCVar3 + -0x5c);
}
