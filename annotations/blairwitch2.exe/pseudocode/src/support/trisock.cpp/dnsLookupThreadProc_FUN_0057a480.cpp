// Name: support_trisock.cpp_dnsLookupThreadProc_FUN_0057a480
// Address: 0057a480
// Address Range: [[0057a480, 0057a6c9]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0057a480(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_0057a480(void)

{
  char cVar1;
  uint ip_address;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  uint auStack_4e8 [160];
  byte auStack_268 [8];
  uchar auStack_260 [40];
  char acStack_238 [8];
  CHAR aCStack_230 [512];
  char acStack_30 [32];
  
  bVar6 = 0;
  if (_DAT_02653648 == 1) {
    _DAT_02653648 = 2;
  }
  do {
    while( true ) {
      if (_DAT_02653648 < 2) {
        _DAT_02653648 = 0;
        return 1;
      }
      iVar2 = wincore_winrun_cpp_waitForMutexTimeout_FUN_0058fcc0(_DAT_0265363c,0.05);
      if (iVar2 != 0) break;
      wincore_winrun_cpp_sleep_FUN_0058fd90(0.0);
    }
    _DAT_02653644 = (char *)0x0;
    if (_DAT_02653640 == (char *)0x0) {
      _DAT_02653648 = 0xffffffff;
      wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
      _DAT_02653648 = 0;
      return 1;
    }
    pcVar5 = acStack_238;
    pcVar3 = _DAT_02653640;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _DAT_02653644 = _DAT_02653640;
    ip_address = *(uint *)(_DAT_02653640 + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar2 = support_trisock_cpp_lookupHostByAddr_FUN_005797b0(ip_address,&stack0xfffffb10);
    }
    else {
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed2fc);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(acStack_238);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed302);
      iVar2 = support_trisock_cpp_lookupHostByName_FUN_00579720(acStack_238,&stack0xfffffb10);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed304);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(aCStack_230);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed30a);
      if (iVar2 == 0) {
        pcVar5 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_00578cb0(auStack_260,acStack_30);
        pcVar5 = acStack_30;
      }
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0(pcVar5);
      wincore_winrun_cpp_outputDebugString_FUN_0058ffc0((LPCSTR)0x5ed31a);
    }
    wincore_winrun_cpp_waitForMutex_FUN_0058fca0(_DAT_0265363c);
    pcVar5 = _DAT_02653644;
    if (_DAT_02653644 != (char *)0x0) {
      if (iVar2 == 0) {
        pcVar5[0x3bc] = -1;
        pcVar5[0x3bd] = -1;
        pcVar5[0x3be] = -1;
        pcVar5[0x3bf] = -1;
      }
      else {
        pcVar5[0x3bc] = '\x02';
        pcVar5[0x3bd] = '\0';
        pcVar5[0x3be] = '\0';
        pcVar5[0x3bf] = '\0';
        puVar4 = auStack_4e8;
        pcVar5 = pcVar5 + 0x104;
        for (iVar2 = 0xae; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pcVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
        }
      }
      support_trisock_cpp_dnsRequestUnlink_FUN_0057a980(_DAT_02653644);
    }
    wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_0265363c);
  } while( true );
}
