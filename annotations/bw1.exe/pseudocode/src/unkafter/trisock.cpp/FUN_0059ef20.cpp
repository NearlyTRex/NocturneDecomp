// Name: unkafter_trisock.cpp_FUN_0059ef20
// Address: 0059ef20
// Address Range: [[0059ef20, 0059efad]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_trisock_cpp_FUN_0059ef20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl unkafter_trisock_cpp_FUN_0059ef20(void)

{
  int iVar1;
  
  wincore_winrun_cpp_FUN_005b3a90("killSockets\n");
  if (_DAT_02c8ae58 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c8ae58);
    while (_DAT_02c8ae5c != 0) {
      support_trisock_cpp_FUN_0059de90(_DAT_02c8ae5c);
    }
    wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c8ae58);
  }
  while (_DAT_02c8ae64 != 0) {
    wincore_winrun_cpp_sleep_FUN_005b3860(0.0);
  }
  iVar1 = WSACleanup();
  return iVar1;
}
