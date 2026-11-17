// Name: core_netgame.cpp_CNetGame_addChatHistory_FUN_0052f100
// Address: 0052f100
// Address Range: [[0052f100, 0052f1f1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

#include "nocturne.h"

void __cdecl core_netgame_cpp_CNetGame_addChatHistory_FUN_0052f100(CNetGame *this_ptr,SNetworkAddr *sender_addr,int message_id,char *sender_name,char *message)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  if (399 < g_INT_01d51db4) {
    g_INT_01d51db4 = g_INT_01d51db4 + -1;
    memmove
              (g_SChatHistory_ARRAY_01d51db8,g_SChatHistory_ARRAY_01d51db8 + 1,
               g_INT_01d51db4 * 0x120);
  }
  iVar2 = g_INT_01d51db4;
  iVar3 = g_INT_01d51db4 * 0x120;
  g_SChatHistory_ARRAY_01d51db8[g_INT_01d51db4].sender_addr.ip_address = sender_addr->ip_address;
  *(uint *)(iVar3 + 0x1d51dbc + (uint)bVar6 * -8) =
       *(uint *)&sender_addr[-(uint)bVar6].port;
  g_SChatHistory_ARRAY_01d51db8[iVar2].message_id = message_id;
  pcVar4 = g_SChatHistory_ARRAY_01d51db8[iVar2].sender_name;
  do {
    cVar1 = *sender_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = sender_name[1];
    sender_name = sender_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar5 = g_SChatHistory_ARRAY_01d51db8[g_INT_01d51db4].message;
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
  g_INT_01d51db4 = g_INT_01d51db4 + 1;
  core_game_cpp_CGame_displayMessage_FUN_004cc190(g_CGamePtr,message,5.0);
  return;
}
