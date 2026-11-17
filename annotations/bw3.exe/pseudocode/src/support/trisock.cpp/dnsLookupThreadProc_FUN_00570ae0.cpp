// Name: support_trisock.cpp_dnsLookupThreadProc_FUN_00570ae0
// Address: 00570ae0
// Address Range: [[00570ae0, 00570d29]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_00570ae0(void)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_00570ae0(void)

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
  if (g_INT_02cfd8b4 == 1) {
    g_INT_02cfd8b4 = 2;
  }
  do {
    while( true ) {
      if (g_INT_02cfd8b4 < 2) {
        g_INT_02cfd8b4 = 0;
        return 1;
      }
      iVar3 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950(g_HANDLE_02cfd8a8,0.05);
      if (iVar3 != 0) break;
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    g_PTR_02cfd8b0 = (byte *)0x0;
    if (g_PTR_02cfd8ac == (byte *)0x0) {
      g_INT_02cfd8b4 = -1;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
      g_INT_02cfd8b4 = 0;
      return 1;
    }
    pcVar6 = acStack_238;
    pcVar4 = g_PTR_02cfd8ac;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    g_PTR_02cfd8b0 = g_PTR_02cfd8ac;
    ip_address = *(uint *)(g_PTR_02cfd8ac + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar3 = support_trisock_cpp_lookupHostByAddr_FUN_00572220(ip_address,&stack0xfffffb10);
    }
    else {
      wincore_winrun_cpp_outputDebugString_FUN_00581c70("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(acStack_238);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6b8b);
      iVar3 = support_trisock_cpp_lookupHostByName_FUN_00572190(acStack_238,&stack0xfffffb10);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(aCStack_230);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70("  ->  ");
      if (iVar3 == 0) {
        pcVar6 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_0056f580(auStack_260,acStack_30);
        pcVar6 = acStack_30;
      }
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(pcVar6);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6ba3);
    }
    wincore_winrun_cpp_waitForMutex_FUN_00581930(g_HANDLE_02cfd8a8);
    puVar2 = g_PTR_02cfd8b0;
    if (g_PTR_02cfd8b0 != (byte *)0x0) {
      if (iVar3 == 0) {
        *(uint *)(g_PTR_02cfd8b0 + 0x3bc) = 0xffffffff;
      }
      else {
        *(uint *)(g_PTR_02cfd8b0 + 0x3bc) = 2;
        puVar5 = (uint *)&stack0xfffffb10;
        puVar7 = (uint *)(puVar2 + 0x104);
        for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
      }
      support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(g_PTR_02cfd8b0);
    }
    wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
  } while( true );
}
