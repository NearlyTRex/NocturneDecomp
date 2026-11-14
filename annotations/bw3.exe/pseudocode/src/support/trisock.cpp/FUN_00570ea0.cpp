// Name: support_trisock.cpp_FUN_00570ea0
// Address: 00570ea0
// Address Range: [[00570ea0, 00570fac]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00570ea0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_00570ea0(int param_1)

{
  int iVar1;
  int *piVar2;
  HANDLE pvVar3;
  
  memset((void *)(param_1 + 0x104),0,0x2b8);
  wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cfd8a8);
  *(uint *)(param_1 + 0x3bc) = 1;
  piVar2 = (int *)&DAT_02cfd8ac;
  for (iVar1 = _DAT_02cfd8ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c0)) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0x3c0);
  }
  *piVar2 = param_1;
  *(uint *)(param_1 + 0x3c0) = 0;
  while ((_DAT_02cfd8b4 != 0 && (_DAT_02cfd8b4 != 2))) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
  }
  if (_DAT_02cfd8b4 < 1) {
    _DAT_02cfd8b4 = 1;
    pvVar3 = wincore_winrun_cpp_createThread_FUN_005819b0
                       (support_trisock_cpp_FUN_00570ae0,(LPVOID)0x0);
    while (_DAT_02cfd8b4 == 1) {
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    wincore_winrun_cpp_FUN_00581a20(pvVar3);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
  return;
}
