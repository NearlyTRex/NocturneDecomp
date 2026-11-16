// Name: support_trisock.cpp_getLocalHostInfo_FUN_00579820
// Address: 00579820
// Address Range: [[00579820, 00579874]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_00579820(void *host_info_out)

#include "nocturne.h"

int __cdecl support_trisock_cpp_getLocalHostInfo_FUN_00579820(void *host_info_out)

{
  int iVar1;
  char acStack_100 [256];
  
  memset(host_info_out,0,0x2b8);
  iVar1 = gethostname(acStack_100,0x100);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = support_trisock_cpp_lookupHostByName_FUN_00579720(acStack_100,host_info_out);
  return iVar1;
}
