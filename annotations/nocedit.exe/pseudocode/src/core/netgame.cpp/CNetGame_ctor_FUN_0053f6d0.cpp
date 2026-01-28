// Name: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
// Address Range: [[0053f6d0, 0053f755]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

{
  char cVar1;
  void *pvVar2;
  int extraout_EAX;
  char *pcVar3;
  char *pcVar4;
  
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->players,2,&g_SNetPlayerTypeInfo);
  support_trisock_cpp_invalidateSocket_FUN_005e1ae0((SSocketContext *)((int)pvVar2 + 0x150));
  ((CNetGame *)(extraout_EAX + -0x170))->connection_type = 0;
  *(uint *)(extraout_EAX + -0x16c) = 0;
  pcVar3 = "MyComputer";
  *(uint *)(extraout_EAX + -0x154) = 0;
  *(uint *)(extraout_EAX + -0x60) = 0xffffffff;
  pcVar4 = (char *)(extraout_EAX + -0x168);
  *(uint *)(extraout_EAX + -0x5c) = 0xffffffff;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(extraout_EAX + -8) = 0;
  return (CNetGame *)(extraout_EAX + -0x170);
}
