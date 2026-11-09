// Name: support_trisock.cpp_FUN_00571ea0
// Address: 00571ea0
// Address Range: [[00571ea0, 00571f09]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00571ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void support_trisock_cpp_FUN_00571ea0(void)

{
  WSADATA WStack_190;
  
  wincore_winrun_cpp_FUN_00581c70("initSockets\n");
  WSAStartup(0x101,&WStack_190);
  if (_DAT_02cfd8a8 == (HANDLE)0x0) {
    _DAT_02cfd8a8 = wincore_winrun_cpp_createMutex_FUN_00581920();
    if (_DAT_02cfd8a8 == (HANDLE)0x0) {
      _DAT_01d71de0 = "..\\support\\trisock.cpp";
      _DAT_01d71de4 = 0x927;
      core_main_c_FUN_004e4330("Can't create mutex");
      return;
    }
  }
  return;
}
