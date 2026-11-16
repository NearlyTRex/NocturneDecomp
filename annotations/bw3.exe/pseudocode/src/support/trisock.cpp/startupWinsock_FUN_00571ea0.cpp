// Name: support_trisock.cpp_startupWinsock_FUN_00571ea0
// Address: 00571ea0
// Address Range: [[00571ea0, 00571f09]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_startupWinsock_FUN_00571ea0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl support_trisock_cpp_startupWinsock_FUN_00571ea0(void)

{
  HANDLE pvVar1;
  int extraout_EAX;
  WSADATA WStack_190;
  
  wincore_winrun_cpp_outputDebugString_FUN_00581c70("initSockets\n");
  pvVar1 = (HANDLE)WSAStartup(0x101,&WStack_190);
  if (_DAT_02cfd8a8 == (HANDLE)0x0) {
    pvVar1 = wincore_winrun_cpp_createMutex_FUN_00581920();
    _DAT_02cfd8a8 = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      _DAT_01d71de0 = "..\\support\\trisock.cpp";
      _DAT_01d71de4 = 0x927;
      core_main_c_displayErrorAndQuit_FUN_004e4330("Can't create mutex");
      return extraout_EAX;
    }
  }
  return (int)pvVar1;
}
