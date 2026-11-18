// Name: support_trisock.cpp_getLocalHostInfo_FUN_00572290
// Address: 00572290
// Address Range: [[00572290, 005722e4]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_00572290(void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_00572290(void *host_info_out)

{
  int iVar1;
  char acStack_100 [256];
  
  memset(host_info_out,0,0x2b8);
  iVar1 = gethostname(acStack_100,0x100);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = support_trisock_cpp_lookupHostByName_FUN_00572190(acStack_100,host_info_out);
  return iVar1;
}
