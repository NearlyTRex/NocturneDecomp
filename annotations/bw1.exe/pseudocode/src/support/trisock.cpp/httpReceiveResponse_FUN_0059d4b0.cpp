// Name: support_trisock.cpp_httpReceiveResponse_FUN_0059d4b0
// Address: 0059d4b0
// Address Range: [[0059d4b0, 0059d755]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_0059d4b0(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0059d69a) */
/* WARNING: Removing unreachable block (ram,0x0059d56e) */
/* WARNING: Removing unreachable block (ram,0x0059d57a) */
/* WARNING: Removing unreachable block (ram,0x0059d586) */
/* WARNING: Removing unreachable block (ram,0x0059d59a) */
/* WARNING: Removing unreachable block (ram,0x0059d5a2) */
/* WARNING: Removing unreachable block (ram,0x0059d5b2) */
/* WARNING: Removing unreachable block (ram,0x0059d5b5) */
/* WARNING: Removing unreachable block (ram,0x0059d5e0) */
/* WARNING: Removing unreachable block (ram,0x0059d5ed) */
/* WARNING: Removing unreachable block (ram,0x0059d715) */
/* WARNING: Removing unreachable block (ram,0x0059d5fb) */
/* WARNING: Removing unreachable block (ram,0x0059d5ff) */
/* WARNING: Removing unreachable block (ram,0x0059d60a) */
/* WARNING: Removing unreachable block (ram,0x0059d60e) */
/* WARNING: Removing unreachable block (ram,0x0059d62e) */
/* WARNING: Removing unreachable block (ram,0x0059d721) */
/* WARNING: Removing unreachable block (ram,0x0059d637) */
/* WARNING: Removing unreachable block (ram,0x0059d748) */
/* WARNING: Removing unreachable block (ram,0x0059d6c7) */
/* WARNING: Removing unreachable block (ram,0x0059d750) */
/* WARNING: Removing unreachable block (ram,0x0059d6d4) */
/* WARNING: Removing unreachable block (ram,0x0059d6f3) */
/* WARNING: Removing unreachable block (ram,0x0059d660) */

int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_0059d4b0(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000014;
  char acStack_910 [20];
  char acStack_8fc [2048];
  char acStack_fc [236];
  
  support_trisock_cpp_httpReaderInit_FUN_0059d330(&stack0xffffeed8,socket);
  iVar2 = support_trisock_cpp_httpReaderReadLine_FUN_0059d430
                    (&stack0xffffeee0,acStack_910,0x800,status_callback,in_stack_00000014);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar3 = "Unknown error";
  pcVar4 = acStack_fc;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  sscanf(acStack_8fc,"%*[^ ]%d %255[^\n]");
  (*status_callback)();
  return 0;
}
