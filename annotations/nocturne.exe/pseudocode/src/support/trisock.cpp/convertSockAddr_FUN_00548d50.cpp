// Name: support_trisock.cpp_convertSockAddr_FUN_00548d50
// Address: 00548d50
// Address Range: [[00548d50, 00548db4]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00548d50(SNetworkAddr *dest_addr,SOCKADDR *src_addr)

#include "nocturne.h"

SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00548d50(SNetworkAddr *dest_addr,SOCKADDR *src_addr)

{
  ushort uVar1;
  uint *puVar2;
  
  if (src_addr->sin_family != 2) {
    g_CurrentFilename = "..\\support\\trisock.cpp";
    g_CurrentLineNumber = 165;
    core_main_c_displayErrorAndQuit_FUN_004c8440("sockaddr is not of AF_INET family!");
  }
  uVar1 = Ordinal_15();
  dest_addr->port = uVar1;
  puVar2 = support_trisock_cpp_copyIPAddress_FUN_00548ae0
                     ((uint *)&stack0xfffffff0,(uint *)&src_addr->sin_addr);
  dest_addr->ip_address = *puVar2;
  return (SOCKADDR_IN *)dest_addr;
}
