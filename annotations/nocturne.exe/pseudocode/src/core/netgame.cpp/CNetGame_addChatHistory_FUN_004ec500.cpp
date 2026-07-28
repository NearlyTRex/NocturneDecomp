// Name: core_netgame.cpp_CNetGame_addChatHistory_FUN_004ec500
// Address: 004ec500
// Address Range: [[004ec500, 004ec5f1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_004ec500(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  if (399 < _DAT_01cea40c) {
    _DAT_01cea40c = _DAT_01cea40c + -1;
    memmove((void *)0x1cea410,(void *)0x1cea530,_DAT_01cea40c * 0x120);
  }
  iVar2 = _DAT_01cea40c * 0x120;
  *(uint *)(iVar2 + 0x1cea410) = sender_addr->ip_address;
  *(uint *)(iVar2 + 0x1cea414 + (uint)bVar5 * -8) =
       *(uint *)&sender_addr[-(uint)bVar5].port;
  *(int *)(iVar2 + 0x1cea418) = message_id;
  pcVar3 = (char *)(iVar2 + 0x1cea41c);
  do {
    cVar1 = *sender_name;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sender_name[1];
    sender_name = sender_name + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(_DAT_01cea40c * 0x120 + 0x1cea430);
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
  _DAT_01cea40c = _DAT_01cea40c + 1;
  core_game_cpp_CGame_displayMessage_FUN_0049aa30(0x01C775EC,message,5.0);
  return;
}
