// Name: support_trisock.cpp_FUN_00570adc
// Address: 00570adc
// Address Range: [[00570adc, 00570d29]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00570adc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_trisock_cpp_FUN_00570adc(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  char *pcVar6;
  byte bVar7;
  uint auStack_4f0 [162];
  uchar auStack_268 [48];
  char acStack_238 [512];
  char acStack_38 [40];
  
  bVar7 = 0;
  if (_DAT_02cfd8b4 == 1) {
    _DAT_02cfd8b4 = 2;
  }
  do {
    while( true ) {
      if (_DAT_02cfd8b4 < 2) {
        _DAT_02cfd8b4 = 0;
        return 1;
      }
      iVar3 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950(_DAT_02cfd8a8,0.05);
      if (iVar3 != 0) break;
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    _DAT_02cfd8b0 = (char *)0x0;
    if (_DAT_02cfd8ac == (char *)0x0) {
      _DAT_02cfd8b4 = 0xffffffff;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
      _DAT_02cfd8b4 = 0;
      return 1;
    }
    pcVar6 = acStack_238;
    pcVar4 = _DAT_02cfd8ac;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    _DAT_02cfd8b0 = _DAT_02cfd8ac;
    uVar2 = *(uint *)(_DAT_02cfd8ac + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar3 = support_trisock_cpp_FUN_00572220(uVar2,auStack_4f0);
    }
    else {
      wincore_winrun_cpp_FUN_00581c70(0x5d6b85);
      wincore_winrun_cpp_FUN_00581c70(acStack_238);
      wincore_winrun_cpp_FUN_00581c70(0x5d6b8b);
      iVar3 = support_trisock_cpp_FUN_00572190(acStack_238,auStack_4f0);
      wincore_winrun_cpp_FUN_00581c70(0x5d6b8d);
      wincore_winrun_cpp_FUN_00581c70(acStack_238);
      wincore_winrun_cpp_FUN_00581c70(0x5d6b93);
      if (iVar3 == 0) {
        pcVar6 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_0056f580(auStack_268,acStack_38);
        pcVar6 = acStack_38;
      }
      wincore_winrun_cpp_FUN_00581c70(pcVar6);
      wincore_winrun_cpp_FUN_00581c70(0x5d6ba3);
    }
    wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cfd8a8);
    pcVar6 = _DAT_02cfd8b0;
    if (_DAT_02cfd8b0 != (char *)0x0) {
      if (iVar3 == 0) {
        pcVar6[0x3bc] = -1;
        pcVar6[0x3bd] = -1;
        pcVar6[0x3be] = -1;
        pcVar6[0x3bf] = -1;
      }
      else {
        pcVar6[0x3bc] = '\x02';
        pcVar6[0x3bd] = '\0';
        pcVar6[0x3be] = '\0';
        pcVar6[0x3bf] = '\0';
        puVar5 = auStack_4f0;
        pcVar6 = pcVar6 + 0x104;
        for (iVar3 = 0xae; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pcVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
        }
      }
      support_trisock_cpp_FUN_00570fb0(_DAT_02cfd8b0,1);
    }
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
  } while( true );
}
