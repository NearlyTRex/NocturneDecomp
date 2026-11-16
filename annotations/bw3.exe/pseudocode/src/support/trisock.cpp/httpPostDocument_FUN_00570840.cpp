// Name: support_trisock.cpp_httpPostDocument_FUN_00570840
// Address: 00570840
// Address Range: [[00570840, 005709b5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpPostDocument_FUN_00570840(CSocket *socket,char *path,char *host,int port,void *in_stream,void *out_stream,void *status_callback)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpPostDocument_FUN_00570840(CSocket *socket,char *path,char *host,int port,void *in_stream,void *out_stream,void *status_callback)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char acStack_814 [2048];
  char acStack_14 [4];
  
  bVar8 = 0;
  pcVar7 = acStack_814;
  if (status_callback == (void *)0x0) {
    status_callback = support_trisock_cpp_defaultHttpStatusCallback_FUN_0056fee0;
  }
  pcVar6 = "Requesting document";
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar2 = (*status_callback)(0,acStack_814);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  uVar3 = (**(code **)(*(int *)in_stream + 0x18))(in_stream);
  while( true ) {
    iVar4 = (**(code **)(*(int *)in_stream + 4))(in_stream);
    if (iVar4 < 0) break;
    iVar2 = iVar2 + 1;
  }
  (**(code **)(*(int *)in_stream + 0x14))(in_stream,uVar3,0);
  _sprintf(acStack_814,"POST %s HTTP/1.0\r\nHost: %s:%d\r\nContent-length: %d\r\n\r\n");
  uVar5 = 0xffffffff;
  pcVar7 = acStack_814;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  iVar4 = support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
                    (socket,acStack_814,~uVar5 - 1,(SNetworkAddr *)0x0);
  if (iVar4 == 0) goto LAB_00570959;
  while( true ) {
    if (iVar2 < 1) {
      iVar2 = support_trisock_cpp_httpReceiveResponse_FUN_005704a0
                        (socket,out_stream,"Receiving server response",status_callback);
      return iVar2;
    }
    iVar4 = (**(code **)(*(int *)in_stream + 4))(in_stream);
    if (iVar4 < 0) break;
    acStack_14[0] = (char)iVar4;
    iVar4 = support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
                      (socket,acStack_14,1,(SNetworkAddr *)0x0);
    if (iVar4 == 0) {
LAB_00570959:
      iVar4 = (*status_callback)(0,"Error communicating with server");
      if (iVar4 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = iVar2 + -1;
    }
  }
  (*status_callback)(1,"Internal I/O error");
  return 0;
}
