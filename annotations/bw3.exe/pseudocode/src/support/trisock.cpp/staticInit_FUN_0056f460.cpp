// Name: support_trisock.cpp_staticInit_FUN_0056f460
// Address: 0056f460
// Address Range: [[0056f460, 0056f496]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_staticInit_FUN_0056f460(void)

#include "nocturne.h"

void __cdecl support_trisock_cpp_staticInit_FUN_0056f460(void)

{
  support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(g_BroadcastIP,0xff,0xff,0xff,0xff);
  support_trisock_cpp_buildIPAddressOrDie_FUN_0056f510(g_AnyAddressIP,0,0,0,0);
  return;
}
