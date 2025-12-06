// Name: support_trisock.cpp_convertSockAddr_FUN_005e1960
// Address: 005e1960
// Address Range: [[005e1960, 005e19c4]]
// Convention: __cdecl
// Signature: SOCKADDR_IN * support_trisock.cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN * dest_addr, SOCKADDR * src_addr)

#include "nocturne.h"

SOCKADDR_IN * __cdecl
support_trisock_cpp_convertSockAddr_FUN_005e1960(SOCKADDR_IN *dest_addr,SOCKADDR *src_addr)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  BADSPACEBASE *in_ESP;
  
  if (src_addr->sa_family != 2) {
    g_CurrentFilename = "..\\support\\trisock.cpp";
    g_CurrentLineNumber = 0xa5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("sockaddr is not of AF_INET family!");
  }
  uVar2 = crt_wsock32_c_ntohs(*(ushort *)src_addr->sa_data);
  *(ushort *)&dest_addr->sin_addr = uVar2;
  puVar3 = support_trisock_cpp_copyIPAddress_FUN_005e16f0
                     ((uint *)&stack0x00000000,(uint *)(src_addr->sa_data + 2));
  uVar1 = *puVar3;
  dest_addr->sin_family = (short)uVar1;
  dest_addr->sin_port = (short)(uVar1 >> 0x10);
  return dest_addr;
}
