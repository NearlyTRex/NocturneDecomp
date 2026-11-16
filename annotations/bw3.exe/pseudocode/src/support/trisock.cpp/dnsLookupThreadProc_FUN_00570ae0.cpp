// Name: support_trisock.cpp_dnsLookupThreadProc_FUN_00570ae0
// Address: 00570ae0
// Address Range: [[00570ae0, 00570d29]]
// Convention: __cdecl
// Signature: uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_00570ae0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trisock_cpp_dnsLookupThreadProc_FUN_00570ae0(void)

{
  char cVar1;
  uint ip_address;
  int iVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  byte bVar6;
  byte auStack_268 [8];
  uchar auStack_260 [40];
  char acStack_238 [8];
  CHAR aCStack_230 [512];
  char acStack_30 [32];
  
  bVar6 = 0;
  if (_DAT_02cfd8b4 == 1) {
    _DAT_02cfd8b4 = 2;
  }
  do {
    while( true ) {
      if (_DAT_02cfd8b4 < 2) {
        _DAT_02cfd8b4 = 0;
        return 1;
      }
      iVar2 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950(_DAT_02cfd8a8,0.05);
      if (iVar2 != 0) break;
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    _DAT_02cfd8b0 = (char *)0x0;
    if (_DAT_02cfd8ac == (char *)0x0) {
      _DAT_02cfd8b4 = 0xffffffff;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
      _DAT_02cfd8b4 = 0;
      return 1;
    }
    pcVar5 = acStack_238;
    pcVar3 = _DAT_02cfd8ac;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    _DAT_02cfd8b0 = _DAT_02cfd8ac;
    ip_address = *(uint *)(_DAT_02cfd8ac + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar2 = support_trisock_cpp_lookupHostByAddr_FUN_00572220(ip_address,&stack0xfffffb10);
    }
    else {
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6b85);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(acStack_238);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6b8b);
      iVar2 = support_trisock_cpp_lookupHostByName_FUN_00572190(acStack_238,&stack0xfffffb10);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6b8d);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(aCStack_230);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6b93);
      if (iVar2 == 0) {
        pcVar5 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_0056f580(auStack_260,acStack_30);
        pcVar5 = acStack_30;
      }
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(pcVar5);
      wincore_winrun_cpp_outputDebugString_FUN_00581c70((LPCSTR)0x5d6ba3);
    }
    wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cfd8a8);
    pcVar5 = _DAT_02cfd8b0;
    if (_DAT_02cfd8b0 != (char *)0x0) {
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
        puVar4 = (uint *)&stack0xfffffb10;
        pcVar5 = pcVar5 + 0x104;
        for (iVar2 = 0xae; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(uint *)pcVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
        }
      }
      support_trisock_cpp_dnsRequestUnlink_FUN_00570fb0(_DAT_02cfd8b0);
    }
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
  } while( true );
}
