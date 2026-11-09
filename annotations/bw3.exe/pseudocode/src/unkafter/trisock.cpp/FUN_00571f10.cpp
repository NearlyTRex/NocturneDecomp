// Name: unkafter_trisock.cpp_FUN_00571f10
// Address: 00571f10
// Address Range: [[00571f10, 00571f9d]]
// Convention: __cdecl
// Signature: int __cdecl unkafter_trisock_cpp_FUN_00571f10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl unkafter_trisock_cpp_FUN_00571f10(void)

{
  int iVar1;
  
  wincore_winrun_cpp_FUN_00581c70("killSockets\n");
  if (_DAT_02cfd8a8 != (HANDLE)0x0) {
    wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cfd8a8);
    while (_DAT_02cfd8ac != 0) {
      support_trisock_cpp_FUN_00570e80(_DAT_02cfd8ac);
    }
    wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cfd8a8);
  }
  while (_DAT_02cfd8b4 != 0) {
    wincore_winrun_cpp_sleep_FUN_00581a40(0.0);
  }
  iVar1 = WSACleanup();
  return iVar1;
}
