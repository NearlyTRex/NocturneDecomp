// Name: support_trisock.cpp_httpReceiveResponse_FUN_00579e40
// Address: 00579e40
// Address Range: [[00579e40, 0057a0e5]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_00579e40(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0057a02a) */
/* WARNING: Removing unreachable block (ram,0x00579efe) */
/* WARNING: Removing unreachable block (ram,0x00579f0a) */
/* WARNING: Removing unreachable block (ram,0x00579f16) */
/* WARNING: Removing unreachable block (ram,0x00579f2a) */
/* WARNING: Removing unreachable block (ram,0x00579f32) */
/* WARNING: Removing unreachable block (ram,0x00579f42) */
/* WARNING: Removing unreachable block (ram,0x00579f45) */
/* WARNING: Removing unreachable block (ram,0x00579f70) */
/* WARNING: Removing unreachable block (ram,0x00579f7d) */
/* WARNING: Removing unreachable block (ram,0x0057a0a5) */
/* WARNING: Removing unreachable block (ram,0x00579f8b) */
/* WARNING: Removing unreachable block (ram,0x00579f8f) */
/* WARNING: Removing unreachable block (ram,0x00579f9a) */
/* WARNING: Removing unreachable block (ram,0x00579f9e) */
/* WARNING: Removing unreachable block (ram,0x00579fbe) */
/* WARNING: Removing unreachable block (ram,0x0057a0b1) */
/* WARNING: Removing unreachable block (ram,0x00579fc7) */
/* WARNING: Removing unreachable block (ram,0x0057a0d8) */
/* WARNING: Removing unreachable block (ram,0x0057a057) */
/* WARNING: Removing unreachable block (ram,0x0057a0e0) */
/* WARNING: Removing unreachable block (ram,0x0057a064) */
/* WARNING: Removing unreachable block (ram,0x0057a083) */
/* WARNING: Removing unreachable block (ram,0x00579ff0) */

int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_00579e40(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000014;
  char acStack_910 [20];
  char acStack_8fc [2048];
  char acStack_fc [236];
  
  support_trisock_cpp_httpReaderInit_FUN_00579cc0(&stack0xffffeed8,socket);
  iVar2 = support_trisock_cpp_httpReaderReadLine_FUN_00579dc0
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
  sscanf(acStack_8fc,(char *)0x5ed15d);
  (*status_callback)();
  return 0;
}
