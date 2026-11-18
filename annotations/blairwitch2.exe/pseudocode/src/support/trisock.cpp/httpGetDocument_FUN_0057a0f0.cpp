// Name: support_trisock.cpp_httpGetDocument_FUN_0057a0f0
// Address: 0057a0f0
// Address Range: [[0057a0f0, 0057a1d2]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpGetDocument_FUN_0057a0f0(CSocket *socket,char *path,char *host,int port,void *out_stream,void *status_callback )

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpGetDocument_FUN_0057a0f0(CSocket *socket,char *path,char *host,int port,void *out_stream,void *status_callback )

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char acStack_810 [2048];
  
  bVar6 = 0;
  pcVar5 = acStack_810;
  if (status_callback == (void *)0x0) {
    status_callback = support_trisock_cpp_defaultHttpStatusCallback_FUN_00579880;
  }
  pcVar4 = "Requesting document";
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = (*status_callback)(0,acStack_810);
  if (iVar2 == 0) {
    return 0;
  }
  _sprintf(acStack_810,"GET %s HTTP/1.0\r\nHost: %s:%d\r\nConnection: close\r\n\r\n");
  uVar3 = 0xffffffff;
  pcVar5 = acStack_810;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  iVar2 = support_trisock_cpp_CSocket_sendSocketData_FUN_005792e0
                    (socket,acStack_810,~uVar3 - 1,(SNetworkAddr *)0x0);
  if ((iVar2 == 0) &&
     (iVar2 = (*status_callback)(0,"Error communicating with server"), iVar2 == 0)) {
    return 0;
  }
  iVar2 = support_trisock_cpp_httpReceiveResponse_FUN_00579e40
                    (socket,out_stream,"Receiving document",status_callback);
  return iVar2;
}
