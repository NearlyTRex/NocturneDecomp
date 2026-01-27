// Name: core_netgame.cpp_staticInit_FUN_0053f310
// Address: 0053f310
// Address Range: [[0053f310, 0053f354]]
// Convention: __cdecl
// Signature: void core_netgame.cpp_staticInit_FUN_0053f310(void)

#include "nocturne.h"

void __cdecl core_netgame_cpp_staticInit_FUN_0053f310(void)

{
  core_netgame_cpp_CNetGame_ctor_FUN_0053f6d0(&g_CNetGameInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_006809f0);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ChatHistory,400,&g_SChatHistoryTypeInfo);
  g_NetworkPacketSize = 0x405;
  g_NetworkReceiveBuffer[0] = '\0';
  return;
}
