// Name: support_trisock.cpp_FUN_0059daec
// Address: 0059daec
// Address Range: [[0059daec, 0059dd39]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_0059daec(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint support_trisock_cpp_FUN_0059daec(void)

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
  if (_DAT_02c8ae64 == 1) {
    _DAT_02c8ae64 = 2;
  }
  do {
    while( true ) {
      if (_DAT_02c8ae64 < 2) {
        _DAT_02c8ae64 = 0;
        return 1;
      }
      iVar3 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770(_DAT_02c8ae58,0.05);
      if (iVar3 != 0) break;
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    _DAT_02c8ae60 = (char *)0x0;
    if (_DAT_02c8ae5c == (char *)0x0) {
      _DAT_02c8ae64 = 0xffffffff;
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
      _DAT_02c8ae64 = 0;
      return 1;
    }
    pcVar6 = acStack_238;
    pcVar4 = _DAT_02c8ae5c;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    _DAT_02c8ae60 = _DAT_02c8ae5c;
    uVar2 = *(uint *)(_DAT_02c8ae5c + 0x100);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
    __arrinit(auStack_268,0xc,&g_IpAddrTypeInfo);
    if (acStack_238[0] == '\0') {
      iVar3 = support_trisock_cpp_FUN_0059f230(uVar2,auStack_4f0);
    }
    else {
      wincore_winrun_cpp_FUN_005b3a90(0x5f8616);
      wincore_winrun_cpp_FUN_005b3a90(acStack_238);
      wincore_winrun_cpp_FUN_005b3a90(0x5f861c);
      iVar3 = support_trisock_cpp_FUN_0059f1a0(acStack_238,auStack_4f0);
      wincore_winrun_cpp_FUN_005b3a90(0x5f861e);
      wincore_winrun_cpp_FUN_005b3a90(acStack_238);
      wincore_winrun_cpp_FUN_005b3a90(0x5f8624);
      if (iVar3 == 0) {
        pcVar6 = "(FAILED)";
      }
      else {
        support_trisock_cpp_formatIPAddress_FUN_0059c590(auStack_268,acStack_38);
        pcVar6 = acStack_38;
      }
      wincore_winrun_cpp_FUN_005b3a90(pcVar6);
      wincore_winrun_cpp_FUN_005b3a90(0x5f8634);
    }
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c8ae58);
    pcVar6 = _DAT_02c8ae60;
    if (_DAT_02c8ae60 != (char *)0x0) {
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
      support_trisock_cpp_FUN_0059dfc0(_DAT_02c8ae60,1);
    }
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
  } while( true );
}
