// Name: support_trisock.cpp_FUN_0059df10
// Address: 0059df10
// Address Range: [[0059df10, 0059dfbc]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059df10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_0059df10(void)

{
  int *in_EAX;
  HANDLE pvVar1;
  int unaff_EBX;
  
  *in_EAX = unaff_EBX;
  *(uint *)(unaff_EBX + 0x3c0) = 0;
  while ((_DAT_02c8ae64 != 0 && (_DAT_02c8ae64 != 2))) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  if (_DAT_02c8ae64 < 1) {
    _DAT_02c8ae64 = 1;
    pvVar1 = wincore_winrun_cpp_createThread_FUN_005b37d0
                       ((LPTHREAD_START_ROUTINE)0x59daf0,(LPVOID)0x0);
    while (_DAT_02c8ae64 == 1) {
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    wincore_winrun_cpp_FUN_005b3840(pvVar1);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
  return;
}
