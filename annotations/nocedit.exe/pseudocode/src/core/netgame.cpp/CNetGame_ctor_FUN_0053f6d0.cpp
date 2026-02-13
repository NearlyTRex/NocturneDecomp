// Name: core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0
// Address: 0053f6d0
// Address Range: [[0053f6d0, 0053f755]]
// Convention: __cdecl
// Signature: CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

#include "nocturne.h"

CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(CNetGame *this_ptr)

{
  char *pcVar1;
  char cVar2;
  SSocketContext *pSVar3;
  void *pvVar4;
  SSocketContext *pSVar5;
  char *pcVar6;
  SSocketContext *pSVar7;
  
  pvVar4 = __arrinit(this_ptr->players,2,&g_SNetPlayerTypeInfo);
  pSVar5 = support_trisock_cpp_invalidateSocket_FUN_005e1ae0
                     ((SSocketContext *)((int)pvVar4 + 0x150));
  pcVar1 = pSVar5[-0xb].remote_addr.padding_0x08;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pSVar7 = pSVar5 + -0xb;
  (pSVar7->remote_addr).padding_0x08[4] = '\0';
  (pSVar7->remote_addr).padding_0x08[5] = '\0';
  (pSVar7->remote_addr).padding_0x08[6] = '\0';
  (pSVar7->remote_addr).padding_0x08[7] = '\0';
  pcVar6 = "MyComputer";
  pSVar5[-0xffffffff0000000a].remote_addr.sin_family = 0;
  pSVar5[-0xffffffff0000000a].remote_addr.sin_port = 0;
  pSVar5[-0xffffffff00000003].local_addr.padding_0x08[0] = -1;
  pSVar5[-0xffffffff00000003].local_addr.padding_0x08[1] = -1;
  pSVar5[-0xffffffff00000003].local_addr.padding_0x08[2] = -1;
  pSVar5[-0xffffffff00000003].local_addr.padding_0x08[3] = -1;
  pSVar7 = pSVar5 + -10;
  pSVar3 = pSVar5 + -3;
  (pSVar3->local_addr).padding_0x08[4] = -1;
  (pSVar3->local_addr).padding_0x08[5] = -1;
  (pSVar3->local_addr).padding_0x08[6] = -1;
  (pSVar3->local_addr).padding_0x08[7] = -1;
  do {
    cVar2 = *pcVar6;
    *(char *)&pSVar7->socket = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    *(char *)((int)&pSVar7->socket + 1) = cVar2;
    pSVar7 = (SSocketContext *)((int)&pSVar7->socket + 2);
  } while (cVar2 != '\0');
  pSVar5[-0xffffffff00000001].remote_addr.padding_0x08[0] = '\0';
  pSVar5[-0xffffffff00000001].remote_addr.padding_0x08[1] = '\0';
  pSVar5[-0xffffffff00000001].remote_addr.padding_0x08[2] = '\0';
  pSVar5[-0xffffffff00000001].remote_addr.padding_0x08[3] = '\0';
  return (CNetGame *)pcVar1;
}
