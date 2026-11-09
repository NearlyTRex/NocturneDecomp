// Name: core_netgame.cpp_CNetGame_addChatHistory_FUN_0050df20
// Address: 0050df20
// Address Range: [[0050df20, 0050e011]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_0050df20(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (399 < _DAT_01d34e4c) {
    _DAT_01d34e4c = _DAT_01d34e4c + -1;
    memmove((void *)0x1d34e50,(void *)0x1d34f70,_DAT_01d34e4c * 0x120);
  }
  iVar2 = _DAT_01d34e4c * 0x120;
  *(uint *)(iVar2 + 0x1d34e50) = *(uint *)sender_addr;
  *(uint *)(iVar2 + 0x1d34e54 + (uint)bVar5 * -8) =
       *(uint *)(sender_addr + (uint)bVar5 * -8 + 4);
  *(int *)(iVar2 + 0x1d34e58) = message_id;
  pcVar3 = (char *)(iVar2 + 0x1d34e5c);
  do {
    cVar1 = *sender_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sender_name[1];
    sender_name = sender_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(_DAT_01d34e4c * 0x120 + 0x1d34e70);
  pcVar3 = message;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _DAT_01d34e4c = _DAT_01d34e4c + 1;
  core_game_cpp_CGame_displayMessage_FUN_004b31a0(g_CGamePtr,message,5.0);
  return;
}
