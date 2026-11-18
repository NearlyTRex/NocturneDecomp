// Name: support_trisock.cpp_cleanupWinsock_FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f9d]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_cleanupWinsock_FUN_00571f10(void)

#include "nocturne.h"

int __cdecl support_trisock_cpp_cleanupWinsock_FUN_00571f10(void)

{
  int iVar1;
  
  wincore_winrun_cpp_outputDebugString_FUN_00581c70("killSockets\n");
  if (g_HANDLE_02cfd8a8 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_00581930(g_HANDLE_02cfd8a8);
    while (g_PTR_02cfd8ac != (byte *)0x0) {
      support_trisock_cpp_dnsRequestCancel_FUN_00570e80(g_PTR_02cfd8ac);
    }
    wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cfd8a8);
  }
  while (g_INT_02cfd8b4 != 0) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
  }
  iVar1 = WSACleanup();
  return iVar1;
}
