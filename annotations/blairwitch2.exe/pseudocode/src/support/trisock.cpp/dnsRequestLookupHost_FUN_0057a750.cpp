// Name: support_trisock.cpp_dnsRequestLookupHost_FUN_0057a750
// Address: 0057a750
// Address Range: [[0057a750, 0057a78c]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestLookupHost_FUN_0057a750(void *request,char *host_name)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestLookupHost_FUN_0057a750(void *request,char *host_name)

{
  char cVar1;
  char *pcVar2;
  char *in_stack_0000000c;
  
  support_trisock_cpp_dnsRequestCancel_FUN_0057a820(request);
  pcVar2 = request;
  do {
    cVar1 = *in_stack_0000000c;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  support_trisock_cpp_dnsRequestQueue_FUN_0057a840(request);
  return;
}
