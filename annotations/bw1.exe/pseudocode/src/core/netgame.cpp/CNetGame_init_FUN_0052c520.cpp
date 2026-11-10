// Name: core_netgame.cpp_CNetGame_init_FUN_0052c520
// Address: 0052c520
// Address Range: [[0052c520, 0052c5c1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_init_FUN_0052c520(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_init_FUN_0052c520(CNetGame *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005c25c0("netlog.txt");
  _DAT_01d51da0 = 1;
  _DAT_01d51d9c = wincore_winrun_cpp_getTime_FUN_005b2420();
  _DAT_01d51d9c = _DAT_01d51d9c / 0x12;
  support_trisock_cpp_FUN_0059eeb0();
  pcVar2 = getenv("USERNAME");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = getenv("COMPUTERNAME");
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "MyComputer";
  }
  pcVar3 = this_ptr->player_name;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01d51db4 = 0;
  _DAT_01d6dfb8 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_0052cab0(this_ptr,0);
  return;
}
