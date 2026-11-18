// Name: core_netgame.cpp_staticInit_FUN_0050aed0
// Address: 0050aed0
// Address Range: [[0050aed0, 0050af14]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_0050aed0(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_staticInit_FUN_0050aed0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0050b290(&g_CNetGameInstance);
  _atexit(&g_CNetGameInstanceDestructorNode);
  __arrinit(g_ChatHistory,400,&g_SChatHistoryTypeInfo);
  g_NetworkReceivePacket.header.size = 0x405;
  g_NetworkReceivePacket.header.type = PACKET_NONE;
  return;
}
