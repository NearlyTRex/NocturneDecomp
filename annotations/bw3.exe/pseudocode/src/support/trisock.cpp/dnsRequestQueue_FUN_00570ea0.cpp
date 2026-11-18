// Name: support_trisock.cpp_dnsRequestQueue_FUN_00570ea0
// Address: 00570ea0
// Address Range: [[00570ea0, 00570fac]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_00570ea0(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_00570ea0(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  HANDLE thread_handle;
  
  memset((void *)((int)request + 0x104),0,0x2b8);
  wincore_winrun_cpp_waitForMutex_FUN_00581930(g_HANDLE_02cfd8a8);
  *(uint *)((int)request + 0x3bc) = 1;
  ppuVar2 = &g_PTR_02cfd8ac;
  for (puVar1 = g_PTR_02cfd8ac; puVar1 != (byte *)0x0; puVar1 = *(byte **)(puVar1 + 0x3c0)
      ) {
    puVar1 = *ppuVar2;
    ppuVar2 = (byte **)(puVar1 + 0x3c0);
  }
  *ppuVar2 = request;
  *(uint *)((int)request + 0x3c0) = 0;
  while ((g_INT_02cfd8b4 != 0 && (g_INT_02cfd8b4 != 2))) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
  }
  if (g_INT_02cfd8b4 < 1) {
    g_INT_02cfd8b4 = 1;
    thread_handle =
         wincore_winrun_cpp_createThread_FUN_005819b0
                   (support_trisock_cpp_dnsLookupThreadProc_FUN_00570ae0,(LPVOID)0x0);
    while (g_INT_02cfd8b4 == 1) {
      wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
    }
    wincore_winrun_cpp_closeThread_FUN_00581a20(thread_handle);
    wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
  return;
}
