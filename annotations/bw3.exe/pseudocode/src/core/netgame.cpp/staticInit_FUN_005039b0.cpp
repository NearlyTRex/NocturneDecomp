// Name: core_netgame.cpp_staticInit_FUN_005039b0
// Address: 005039b0
// Address Range: [[005039b0, 005039f4]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_005039b0(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_staticInit_FUN_005039b0(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_00503d70(&g_CNetGameInstance);
  _atexit(&g_CNetGameInstanceDestructorNode);
  __arrinit(g_ChatHistory,400,&g_SChatHistoryTypeInfo);
  g_NetworkReceivePacket.header.size = 0x405;
  g_NetworkReceivePacket.header.type = PACKET_NONE;
  return;
}
