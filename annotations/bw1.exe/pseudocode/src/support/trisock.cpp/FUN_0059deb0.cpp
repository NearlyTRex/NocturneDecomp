// Name: support_trisock.cpp_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059dfbc]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_0059deb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_0059deb0(int param_1)

{
  int iVar1;
  int *piVar2;
  HANDLE pvVar3;
  
  memset((void *)(param_1 + 0x104),0,0x2b8);
  wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c8ae58);
  *(uint *)(param_1 + 0x3bc) = 1;
  piVar2 = (int *)&DAT_02c8ae5c;
  for (iVar1 = _DAT_02c8ae5c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c0)) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0x3c0);
  }
  *piVar2 = param_1;
  *(uint *)(param_1 + 0x3c0) = 0;
  while ((_DAT_02c8ae64 != 0 && (_DAT_02c8ae64 != 2))) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  if (_DAT_02c8ae64 < 1) {
    _DAT_02c8ae64 = 1;
    pvVar3 = wincore_winrun_cpp_createThread_FUN_005b37d0
                       (support_trisock_cpp_FUN_0059daf0,(LPVOID)0x0);
    while (_DAT_02c8ae64 == 1) {
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    wincore_winrun_cpp_FUN_005b3840(pvVar3);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
  return;
}
