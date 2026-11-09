// Name: support_trisock.cpp_FUN_0057074c
// Address: 0057074c
// Address Range: [[0057074c, 00570832]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0057074c(CSocket *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5,code *param_6)

#include "nocturne.h"

void support_trisock_cpp_FUN_0057074c(CSocket *param_1,uint param_2,ushort param_3,uint param_4,uint param_5,code *param_6)

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
  if (param_6 == (code *)0x0) {
    param_6 = support_trisock_cpp_FUN_0056fee0;
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
  iVar2 = (*param_6)(0,acStack_810);
  if (iVar2 == 0) {
    return;
  }
  FUN_005a28c0(acStack_810,"GET %s HTTP/1.0\r\nHost: %s:%d\r\nConnection: close\r\n\r\n",param_4,param_2,param_3)
  ;
  uVar3 = 0xffffffff;
  pcVar5 = acStack_810;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  iVar2 = support_trisock_cpp_CSocket_sendSocketData_FUN_0056fbb0
                    (param_1,acStack_810,~uVar3 - 1,(SNetworkAddr *)0x0);
  if ((iVar2 == 0) && (iVar2 = (*param_6)(0,"Error communicating with server"), iVar2 == 0)) {
    return;
  }
  support_trisock_cpp_FUN_005704a0(param_1,param_5,"Receiving document",param_6);
  return;
}
