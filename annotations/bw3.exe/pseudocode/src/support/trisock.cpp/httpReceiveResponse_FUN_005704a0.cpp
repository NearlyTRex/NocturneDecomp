// Name: support_trisock.cpp_httpReceiveResponse_FUN_005704a0
// Address: 005704a0
// Address Range: [[005704a0, 00570745]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_005704a0(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0057068a) */
/* WARNING: Removing unreachable block (ram,0x0057055e) */
/* WARNING: Removing unreachable block (ram,0x0057056a) */
/* WARNING: Removing unreachable block (ram,0x00570576) */
/* WARNING: Removing unreachable block (ram,0x0057058a) */
/* WARNING: Removing unreachable block (ram,0x00570592) */
/* WARNING: Removing unreachable block (ram,0x005705a2) */
/* WARNING: Removing unreachable block (ram,0x005705a5) */
/* WARNING: Removing unreachable block (ram,0x005705d0) */
/* WARNING: Removing unreachable block (ram,0x005705dd) */
/* WARNING: Removing unreachable block (ram,0x00570705) */
/* WARNING: Removing unreachable block (ram,0x005705eb) */
/* WARNING: Removing unreachable block (ram,0x005705ef) */
/* WARNING: Removing unreachable block (ram,0x005705fa) */
/* WARNING: Removing unreachable block (ram,0x005705fe) */
/* WARNING: Removing unreachable block (ram,0x0057061e) */
/* WARNING: Removing unreachable block (ram,0x00570711) */
/* WARNING: Removing unreachable block (ram,0x00570627) */
/* WARNING: Removing unreachable block (ram,0x00570738) */
/* WARNING: Removing unreachable block (ram,0x005706b7) */
/* WARNING: Removing unreachable block (ram,0x00570740) */
/* WARNING: Removing unreachable block (ram,0x005706c4) */
/* WARNING: Removing unreachable block (ram,0x005706e3) */
/* WARNING: Removing unreachable block (ram,0x00570650) */

int __cdecl support_trisock_cpp_httpReceiveResponse_FUN_005704a0(CSocket *socket,void *out_stream,char *status_text,void *status_callback)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000014;
  char acStack_910 [20];
  char acStack_8fc [2048];
  char acStack_fc [236];
  
  support_trisock_cpp_httpReaderInit_FUN_00570320(&stack0xffffeed8,socket);
  iVar2 = support_trisock_cpp_httpReaderReadLine_FUN_00570420
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
