// Name: core_netgame.cpp_CNetGame_init_FUN_00503e20
// Address: 00503e20
// Address Range: [[00503e20, 00503ec1]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_init_FUN_00503e20(CNetGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_netgame_cpp_CNetGame_init_FUN_00503e20(CNetGame *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005a54b0("netlog.txt");
  _DAT_01da6478 = 1;
  _DAT_01da6474 = wincore_winrun_cpp_getTime_FUN_005806a0();
  _DAT_01da6474 = _DAT_01da6474 / 0x12;
  support_trisock_cpp_FUN_00571ea0();
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
  _DAT_01da648c = 0;
  _DAT_01dc2690 = 0;
  core_netgame_cpp_CNetGame_disconnect_FUN_005043b0(this_ptr,0);
  return;
}
