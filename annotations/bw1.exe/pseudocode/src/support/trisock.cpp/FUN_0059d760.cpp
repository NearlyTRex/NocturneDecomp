// Name: support_trisock.cpp_FUN_0059d760
// Address: 0059d760
// Address Range: [[0059d760, 0059d842]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059d760(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void support_trisock_cpp_FUN_0059d760(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  CSocket *in_stack_00000004;
  uint in_stack_00000014;
  code *in_stack_00000018;
  char acStack_810 [2048];
  
  bVar6 = 0;
  pcVar5 = acStack_810;
  if (in_stack_00000018 == (code *)0x0) {
    in_stack_00000018 = support_trisock_cpp_FUN_0059cef0;
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
  iVar2 = (*in_stack_00000018)(0,acStack_810);
  if (iVar2 == 0) {
    return;
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
  iVar2 = support_trisock_cpp_CSocket_sendSocketData_FUN_0059cbc0
                    (in_stack_00000004,acStack_810,~uVar3 - 1,(SNetworkAddr *)0x0);
  if ((iVar2 == 0) &&
     (iVar2 = (*in_stack_00000018)(0,"Error communicating with server"), iVar2 == 0)) {
    return;
  }
  support_trisock_cpp_FUN_0059d4b0
            (in_stack_00000004,in_stack_00000014,"Receiving document",in_stack_00000018);
  return;
}
