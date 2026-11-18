// Name: support_trisock.cpp_httpRequestStart_FUN_0057ac30
// Address: 0057ac30
// Address Range: [[0057ac30, 0057acc4]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_httpRequestStart_FUN_0057ac30(void *request,char *url)

#include "nocturne.h"

void __cdecl support_trisock_cpp_httpRequestStart_FUN_0057ac30(void *request,char *url)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)((int)request + 0x200);
  do {
    cVar1 = *url;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = url[1];
    url = url + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = support_trisock_cpp_parseUrl_FUN_0057a360
                    ((char *)((int)request + 0x200),(char *)((int)request + 0x400),
                     (ushort *)((int)request + 0x604),(char *)((int)request + 0x500),0x100);
  if (iVar2 != 0) {
    *(uint *)((int)request + 0xd28) = 1;
    support_trisock_cpp_dnsRequestLookupHost_FUN_0057a750
              ((void *)((int)request + 0xd30),(char *)((int)request + 0x400));
    return;
  }
  *(uint *)((int)request + 0xd28) = 0xffffffff;
  _sprintf((char *)((int)request + 0xa18),"Invalid URL: %s");
  return;
}
