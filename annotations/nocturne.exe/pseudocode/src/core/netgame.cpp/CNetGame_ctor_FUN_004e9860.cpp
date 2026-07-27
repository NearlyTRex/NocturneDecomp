// Name: core_netgame.cpp_CNetGame_ctor_FUN_004e9860
// Address: 004e9860
// Address Range: [[004e9860, 004e98e5]]
// Convention: unknown
// Signature: undefined4 * core_netgame_cpp_CNetGame_ctor_FUN_004e9860(int param_1)

#include "nocturne.h"

uint * core_netgame_cpp_CNetGame_ctor_FUN_004e9860(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = __arrinit(param_1 + 0x20,2,&g_SNetPlayerTypeInfo_005a0e20);
  iVar2 = support_trisock_cpp_invalidateSocket_FUN_00548ed0(iVar2 + 0x150);
  *(uint *)(iVar2 + -0x170) = 0;
  *(uint *)(iVar2 + -0x16c) = 0;
  pcVar3 = "MyComputer";
  *(uint *)(iVar2 + -0x154) = 0;
  *(uint *)(iVar2 + -0x60) = 0xffffffff;
  pcVar4 = (char *)(iVar2 + -0x168);
  *(uint *)(iVar2 + -0x5c) = 0xffffffff;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(iVar2 + -8) = 0;
  return (uint *)(iVar2 + -0x170);
}
