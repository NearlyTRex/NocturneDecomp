// Name: support_trisock.cpp_staticInit_FUN_005e16b0
// Address: 005e16b0
// Address Range: [[005e16b0, 005e16e6]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_staticInit_FUN_005e16b0(void)

#include "nocturne.h"

void __cdecl support_trisock_cpp_staticInit_FUN_005e16b0(void)

{
  support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(g_BroadcastIP,0xff,0xff,0xff,0xff);
  support_trisock_cpp_buildIPAddressOrDie_FUN_005e1750(g_AnyAddressIP,0,0,0,0);
  return;
}
