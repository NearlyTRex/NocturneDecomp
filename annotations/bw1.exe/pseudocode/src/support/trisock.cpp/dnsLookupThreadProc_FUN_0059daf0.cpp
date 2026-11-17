// Name: support_trisock.cpp_dnsLookupThreadProc_FUN_0059daf0
// Address: 0059daf0
// Address Range: [[0059daf0, 0059dd39]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0059daf0(void)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0059daf0(void)

{
  char cVar1;
  uint ip_address;
  byte *puVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  uint *puVar7;
  byte bVar8;
  byte auStack_268 [8];
  uchar auStack_260 [40];
  char acStack_238 [8];
  CHAR aCStack_230 [512];
  char acStack_30 [32];
  
  bVar8 = 0;
  if (g_INT_02c8ae64 == 1) {
    g_INT_02c8ae64 = 2;
  }
  do {
    while( true ) {
      if (g_INT_02c8ae64 < 2) {
        g_INT_02c8ae64 = 0;
        return 1;
      }
      iVar3 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770(g_HANDLE_02c8ae58,0.05);
      if (iVar3 != 0) break;
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    g_PTR_02c8ae60 = (byte *)0x0;
    if (g_PTR_02c8ae5c == (byte *)0x0) {
      g_INT_02c8ae64 = -1;
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
      g_INT_02c8ae64 = 0;
      return 1;
    }
    pcVar6 = acStack_238;
    pcVar4 = g_PTR_02c8ae5c;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    g_PTR_02c8ae60 = g_PTR_02c8ae5c;
    ip_address = *(uint *)(g_PTR_02c8ae5c + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar3 = support_trisock_cpp_lookupHostByAddr_FUN_0059f230(ip_address,&stack0xfffffb10);
    }
    else {
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90(acStack_238);
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90((LPCSTR)0x5f861c);
      iVar3 = support_trisock_cpp_lookupHostByName_FUN_0059f1a0(acStack_238,&stack0xfffffb10);
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90(aCStack_230);
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90("  ->  ");
      if (iVar3 == 0) {
        pcVar6 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_0059c590(auStack_260,acStack_30);
        pcVar6 = acStack_30;
      }
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90(pcVar6);
      wincore_winrun_cpp_outputDebugString_FUN_005b3a90((LPCSTR)0x5f8634);
    }
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(g_HANDLE_02c8ae58);
    puVar2 = g_PTR_02c8ae60;
    if (g_PTR_02c8ae60 != (byte *)0x0) {
      if (iVar3 == 0) {
        *(uint *)(g_PTR_02c8ae60 + 0x3bc) = 0xffffffff;
      }
      else {
        *(uint *)(g_PTR_02c8ae60 + 0x3bc) = 2;
        puVar5 = (uint *)&stack0xfffffb10;
        puVar7 = (uint *)(puVar2 + 0x104);
        for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
      }
      support_trisock_cpp_dnsRequestUnlink_FUN_0059dfc0(g_PTR_02c8ae60);
    }
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
  } while( true );
}
