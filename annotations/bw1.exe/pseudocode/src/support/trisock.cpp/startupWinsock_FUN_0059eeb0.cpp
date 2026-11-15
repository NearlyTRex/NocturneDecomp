// Name: support_trisock.cpp_startupWinsock_FUN_0059eeb0
// Address: 0059eeb0
// Address Range: [[0059eeb0, 0059ef19]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_startupWinsock_FUN_0059eeb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl support_trisock_cpp_startupWinsock_FUN_0059eeb0(void)

{
  HANDLE pvVar1;
  int extraout_EAX;
  WSADATA WStack_190;
  
  wincore_winrun_cpp_FUN_005b3a90("initSockets\n");
  pvVar1 = (HANDLE)WSAStartup(0x101,&WStack_190);
  if (_DAT_02c8ae58 == (HANDLE)0x0) {
    pvVar1 = wincore_winrun_cpp_createMutex_FUN_005b3740();
    _DAT_02c8ae58 = pvVar1;
    if (pvVar1 == (HANDLE)0x0) {
      _DAT_01d1d400 = "..\\support\\trisock.cpp";
      _DAT_01d1d404 = 0x927;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Can't create mutex");
      return extraout_EAX;
    }
  }
  return (int)pvVar1;
}
