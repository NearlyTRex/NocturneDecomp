// Name: support_trisock.cpp_dnsRequestQueue_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059dfbc]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0059deb0(void *request)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0059deb0(void *request)

{
  int iVar1;
  int *piVar2;
  HANDLE thread_handle;
  
  memset((void *)((int)request + 0x104),0,0x2b8);
  wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c8ae58);
  *(uint *)((int)request + 0x3bc) = 1;
  piVar2 = (int *)&DAT_02c8ae5c;
  for (iVar1 = _DAT_02c8ae5c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c0)) {
    iVar1 = *piVar2;
    piVar2 = (int *)(iVar1 + 0x3c0);
  }
  *piVar2 = (int)request;
  *(uint *)((int)request + 0x3c0) = 0;
  while ((_DAT_02c8ae64 != 0 && (_DAT_02c8ae64 != 2))) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  if (_DAT_02c8ae64 < 1) {
    _DAT_02c8ae64 = 1;
    thread_handle =
         wincore_winrun_cpp_createThread_FUN_005b37d0
                   (support_trisock_cpp_dnsLookupThreadProc_FUN_0059daf0,(LPVOID)0x0);
    while (_DAT_02c8ae64 == 1) {
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    wincore_winrun_cpp_closeThread_FUN_005b3840(thread_handle);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
  return;
}
