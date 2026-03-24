// Name: core_netgame.cpp_CNetGame_addChatHistory_FUN_00542370
// Address: 00542370
// Address Range: [[00542370, 00542461] [0060c497, 0060c4b1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_00542370(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_00542370(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (399 < g_ChatHistoryCount) {
    g_ChatHistoryCount = g_ChatHistoryCount + -1;
    memmove(g_ChatHistory,g_ChatHistory + 1,g_ChatHistoryCount * 0x120);
  }
  iVar3 = g_ChatHistoryCount;
  g_ChatHistory[g_ChatHistoryCount].sender_addr.ip_address = sender_addr->ip_address;
  uVar2 = sender_addr->other;
  g_ChatHistory[iVar3].sender_addr.port = sender_addr->port;
  g_ChatHistory[iVar3].sender_addr.other = uVar2;
  g_ChatHistory[iVar3].message_id = message_id;
  pcVar4 = g_ChatHistory[iVar3].sender_name;
  do {
    cVar1 = *sender_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sender_name[1];
    sender_name = sender_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = g_ChatHistory[g_ChatHistoryCount].message;
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
  g_ChatHistoryCount = g_ChatHistoryCount + 1;
  core_game_cpp_CGame_displayMessage_FUN_004d7f20(g_CGamePtr,message,5.0);
  return;
}
