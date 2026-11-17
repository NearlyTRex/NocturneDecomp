// Name: support_trisock.cpp_cleanupWinsock_FUN_0059ef20
// Address: 0059ef20
// Address Range: [[0059ef20, 0059efad]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_cleanupWinsock_FUN_0059ef20(void)

#include "nocturne.h"

int __cdecl support_trisock_cpp_cleanupWinsock_FUN_0059ef20(void)

{
  int iVar1;
  
  wincore_winrun_cpp_outputDebugString_FUN_005b3a90("killSockets\n");
  if (g_HANDLE_02c8ae58 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(g_HANDLE_02c8ae58);
    while (g_PTR_02c8ae5c != (byte *)0x0) {
      support_trisock_cpp_dnsRequestCancel_FUN_0059de90(g_PTR_02c8ae5c);
    }
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_HANDLE_02c8ae58);
  }
  while (g_INT_02c8ae64 != 0) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  iVar1 = WSACleanup();
  return iVar1;
}
