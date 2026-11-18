// Name: support_trisock.cpp_dnsRequestLookupHost_FUN_00570db0
// Address: 00570db0
// Address Range: [[00570db0, 00570dec]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestLookupHost_FUN_00570db0(void *request,char *host_name)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestLookupHost_FUN_00570db0(void *request,char *host_name)

{
  char cVar1;
  char *pcVar2;
  
  support_trisock_cpp_dnsRequestCancel_FUN_00570e80(request);
  pcVar2 = request;
  do {
    cVar1 = *host_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = host_name[1];
    host_name = host_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  support_trisock_cpp_dnsRequestQueue_FUN_00570ea0(request);
  return;
}
