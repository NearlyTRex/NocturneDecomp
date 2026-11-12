// Name: support_trisock.cpp_convertSockAddr_FUN_00578e80
// Address: 00578e80
// Address Range: [[00578e80, 00578ee4]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00578e80(SNetworkAddr *dest_addr,SOCKADDR *src_addr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SOCKADDR_IN * __cdecl support_trisock_cpp_convertSockAddr_FUN_00578e80(SNetworkAddr *dest_addr,SOCKADDR *src_addr)

{
  ushort uVar1;
  uint *puVar2;
  uint uStack_c;
  
  if (src_addr->sin_family != 2) {
    _DAT_01d046a0 = "..\\support\\trisock.cpp";
    _DAT_01d046a4 = 0xd6;
    core_main_c_FUN_004e4500("sockaddr is not of AF_INET family!");
  }
  uVar1 = ntohs(src_addr->sin_port);
  dest_addr->port = uVar1;
  puVar2 = support_trisock_cpp_copyIPAddress_FUN_00578be0(&uStack_c,(uint *)&src_addr->sin_addr);
  dest_addr->ip_address = *puVar2;
  return (SOCKADDR_IN *)dest_addr;
}
