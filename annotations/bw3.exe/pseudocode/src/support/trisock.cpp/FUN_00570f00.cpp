// Name: support_trisock.cpp_FUN_00570f00
// Address: 00570f00
// Address Range: [[00570f00, 00570fac]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00570f00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_00570f00(void)

{
  int *in_EAX;
  HANDLE pvVar1;
  int unaff_EBX;
  
  *in_EAX = unaff_EBX;
  *(uint *)(unaff_EBX + 0x3c0) = 0;
  while ((_DAT_02cfd8b4 != 0 && (_DAT_02cfd8b4 != 2))) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
  }
  if (_DAT_02cfd8b4 < 1) {
    _DAT_02cfd8b4 = 1;
    pvVar1 = wincore_winrun_cpp_createThread_FUN_005819b0
                       ((LPTHREAD_START_ROUTINE)0x570ae0,(LPVOID)0x0);
    while (_DAT_02cfd8b4 == 1) {
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    wincore_winrun_cpp_FUN_00581a20(pvVar1);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
  return;
}
