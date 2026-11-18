// Name: core_netgame.cpp_staticInit_FUN_004e94a0
// Address: 004e94a0
// Address Range: [[004e94a0, 004e94e4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_staticInit_FUN_004e94a0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_004e9860(&g_CNetGameInstance);
  _atexit(&g_CNetGameInstanceDestructorNode);
  __arrinit(g_ChatHistory,400,&g_SChatHistoryTypeInfo_005a0de0);
  g_NetworkReceivePacket.header.size = 0x405;
  g_NetworkReceivePacket.header.type = PACKET_NONE;
  return;
}
