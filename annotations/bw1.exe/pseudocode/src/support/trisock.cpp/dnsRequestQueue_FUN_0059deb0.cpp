// Name: support_trisock.cpp_dnsRequestQueue_FUN_0059deb0
// Address: 0059deb0
// Address Range: [[0059deb0, 0059dfbc]]
// Convention: __cdecl
// Signature: void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0059deb0(void *request)

#include "nocturne.h"

void __cdecl support_trisock_cpp_dnsRequestQueue_FUN_0059deb0(void *request)

{
  byte *puVar1;
  byte **ppuVar2;
  HANDLE thread_handle;
  
  memset((void *)((int)request + 0x104),0,0x2b8);
  wincore_winrun_cpp_waitForMutex_FUN_005b3750(g_HANDLE_02c8ae58);
  *(uint *)((int)request + 0x3bc) = 1;
  ppuVar2 = &g_PTR_02c8ae5c;
  for (puVar1 = g_PTR_02c8ae5c; puVar1 != (byte *)0x0; puVar1 = *(byte **)(puVar1 + 0x3c0)
      ) {
    puVar1 = *ppuVar2;
    ppuVar2 = (byte **)(puVar1 + 0x3c0);
  }
  *ppuVar2 = request;
  *(uint *)((int)request + 0x3c0) = 0;
  while ((g_INT_02c8ae64 != 0 && (g_INT_02c8ae64 != 2))) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  if (g_INT_02c8ae64 < 1) {
    g_INT_02c8ae64 = 1;
    thread_handle =
         wincore_winrun_cpp_createThread_FUN_005b37d0
                   (support_trisock_cpp_dnsLookupThreadProc_FUN_0059daf0,(LPVOID)0x0);
    while (g_INT_02c8ae64 == 1) {
      wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
    }
    wincore_winrun_cpp_closeThread_FUN_005b3840(thread_handle);
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
    return;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
  return;
}
