// Name: support_trisock.cpp_staticInit_FUN_00548aa0
// Address: 00548aa0
// Address Range: [[00548aa0, 00548ad6]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_staticInit_FUN_00548aa0(void)

#include "nocturne.h"

void __cdecl support_trisock_cpp_staticInit_FUN_00548aa0(void)

{
  support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(g_BroadcastIP,0xff,0xff,0xff,0xff);
  support_trisock_cpp_buildIPAddressOrDie_FUN_00548b40(g_AnyAddressIP,0,0,0,0);
  return;
}
