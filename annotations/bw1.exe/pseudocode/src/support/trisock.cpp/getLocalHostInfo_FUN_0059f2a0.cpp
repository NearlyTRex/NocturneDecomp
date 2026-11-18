// Name: support_trisock.cpp_getLocalHostInfo_FUN_0059f2a0
// Address: 0059f2a0
// Address Range: [[0059f2a0, 0059f2f4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_0059f2a0(void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_0059f2a0(void *host_info_out)

{
  int iVar1;
  char acStack_100 [256];
  
  memset(host_info_out,0,0x2b8);
  iVar1 = gethostname(acStack_100,0x100);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = support_trisock_cpp_lookupHostByName_FUN_0059f1a0(acStack_100,host_info_out);
  return iVar1;
}
