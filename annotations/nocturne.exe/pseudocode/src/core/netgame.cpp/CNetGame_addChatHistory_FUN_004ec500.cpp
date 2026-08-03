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
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (399 < _DAT_01cea40c) {
    _DAT_01cea40c = _DAT_01cea40c + -1;
    memmove
              (g_SChatHistory_ARRAY_01cea410,g_SChatHistory_ARRAY_01cea410 + 1,_DAT_01cea40c * 0x120
              );
  }
  iVar2 = _DAT_01cea40c;
  iVar3 = _DAT_01cea40c * 0x120;
  g_SChatHistory_ARRAY_01cea410[_DAT_01cea40c].sender_addr.ip_address = sender_addr->ip_address;
  *(uint *)(iVar3 + 0x1cea414 + (uint)bVar6 * -8) =
       *(uint *)&sender_addr[-(uint)bVar6].port;
  g_SChatHistory_ARRAY_01cea410[iVar2].message_id = message_id;
  pcVar4 = g_SChatHistory_ARRAY_01cea410[iVar2].sender_name;
  do {
    cVar1 = *sender_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sender_name[1];
    sender_name = sender_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = g_SChatHistory_ARRAY_01cea410[_DAT_01cea40c].message;
  pcVar4 = message;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  _DAT_01cea40c = _DAT_01cea40c + 1;
  core_game_cpp_CGame_displayMessage_FUN_0049aa30(g_CGame_PTR_005b9354,message,5.0);
  return;
}
