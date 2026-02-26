// Name: core_netgame.cpp_staticInit_FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053f354]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_staticInit_FUN_0053f310(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_staticInit_FUN_0053f310(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(&g_CNetGameInstance);
  _atexit(&g_CNetGameInstanceDestructorNode);
  __arrinit(g_ChatHistory,400,&g_SChatHistoryTypeInfo);
  g_NetworkReceivePacket.header.size = 0x405;
  g_NetworkReceivePacket.header.type = PACKET_NONE;
  return;
}
