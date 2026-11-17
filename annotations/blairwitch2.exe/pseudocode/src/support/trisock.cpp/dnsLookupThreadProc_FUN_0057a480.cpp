// Name: support_trisock.cpp_dnsLookupThreadProc_FUN_0057a480
// Address: 0057a480
// Address Range: [[0057a480, 0057a6c9]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0057a480(void)

#include "nocturne.h"

uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0057a480(void)

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
  uint auStack_4e8 [160];
  byte auStack_268 [8];
  uchar auStack_260 [40];
  char acStack_238 [8];
  CHAR aCStack_230 [512];
  char acStack_30 [32];
  
  bVar8 = 0;
  if (g_INT_02653648 == 1) {
    g_INT_02653648 = 2;
  }
  do {
    while( true ) {
      if (g_INT_02653648 < 2) {
        g_INT_02653648 = 0;
        return 1;
      }
      iVar3 = wincore_winrun_cpp_waitForMutexTimeout_FUN_0058fcc0(g_HANDLE_0265363c,0.05);
      if (iVar3 != 0) break;
      wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
    }
    g_PTR_02653644 = (byte *)0x0;
    if (g_PTR_02653640 == (byte *)0x0) {
      g_INT_02653648 = -1;
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_0265363c);
      g_INT_02653648 = 0;
      return 1;
    }
    pcVar6 = acStack_238;
    pcVar4 = g_PTR_02653640;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    g_PTR_02653644 = g_PTR_02653640;
    ip_address = *(uint *)(g_PTR_02653640 + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_0265363c);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar3 = support_trisock_cpp_lookupHostByAddr_FUN_005797b0(ip_address,&stack0xfffffb10);
    }
    else {
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(acStack_238);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed302);
      iVar3 = support_trisock_cpp_lookupHostByName_FUN_00579720(acStack_238,&stack0xfffffb10);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0("DNS: ");
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(aCStack_230);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0("  ->  ");
      if (iVar3 == 0) {
        pcVar6 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_00578cb0(auStack_260,acStack_30);
        pcVar6 = acStack_30;
      }
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(pcVar6);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed31a);
    }
    wincore_winrun_cpp_waitForMutex_FUN_0058fca0(g_HANDLE_0265363c);
    puVar2 = g_PTR_02653644;
    if (g_PTR_02653644 != (byte *)0x0) {
      if (iVar3 == 0) {
        *(uint *)(g_PTR_02653644 + 0x3bc) = 0xffffffff;
      }
      else {
        *(uint *)(g_PTR_02653644 + 0x3bc) = 2;
        puVar5 = auStack_4e8;
        puVar7 = (uint *)(puVar2 + 0x104);
        for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
      }
      support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(g_PTR_02653644);
    }
    wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_0265363c);
  } while( true );
}
