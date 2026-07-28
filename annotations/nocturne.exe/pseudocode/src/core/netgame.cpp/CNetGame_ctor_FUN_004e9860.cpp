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
  _SOCKET *p_Var3;
  char *pcVar4;
  _SOCKET *p_Var5;
  
  pvVar2 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo_005a0e20);
  p_Var3 = support_trisock_cpp_invalidateSocket_FUN_00548ed0((_SOCKET *)((int)pvVar2 + 0x150));
  ((CNetGame *)(p_Var3 + -0x5c))->connection_type = CONNECTION_NONE;
  p_Var3[-0x5b] = 0;
  pcVar4 = "MyComputer";
  p_Var3[-0x55] = 0;
  p_Var3[-0x18] = 0xffffffff;
  p_Var5 = p_Var3 + -0x5a;
  p_Var3[-0x17] = 0xffffffff;
  do {
    cVar1 = *pcVar4;
    *(char *)p_Var5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)p_Var5 + 1) = cVar1;
    p_Var5 = (_SOCKET *)((int)p_Var5 + 2);
  } while (cVar1 != '\0');
  p_Var3[-2] = 0;
  return (CNetGame *)(p_Var3 + -0x5c);
}
