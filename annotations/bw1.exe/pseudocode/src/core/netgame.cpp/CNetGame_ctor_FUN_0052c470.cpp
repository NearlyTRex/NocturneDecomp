// Name: core_netgame.cpp_CNetGame_ctor_FUN_0052c470
// Address: 0052c470
// Address Range: [[0052c470, 0052c4f5]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0052c470(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0052c470(CNetGame *this_ptr)

{
  CSocket CVar1;
  int iVar2;
  CSocket *pCVar3;
  char *pcVar4;
  CSocket *pCVar5;
  
  iVar2 = __arrinit(&this_ptr->field_0x20,2,&g_SNetPlayerTypeInfo);
  pCVar3 = support_trisock_cpp_CSocket_ctor_FUN_0059c8e0((CSocket *)(iVar2 + 0x158));
  *(uint *)(pCVar3 + -0x178) = 0;
  *(uint *)(pCVar3 + -0x174) = 0;
  pcVar4 = "MyComputer";
  *(uint *)(pCVar3 + -0x15c) = 0;
  *(uint *)(pCVar3 + -0x60) = 0xffffffff;
  pCVar5 = pCVar3 + -0x170;
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
  return (CNetGame *)(pCVar3 + -0x178);
}
