// Name: core_netgame.cpp_CNetGame_send_FUN_005411c0
// Address: 005411c0
// Address Range: [[005411c0, 00541223]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_send_FUN_005411c0()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_send(CNetGame* param_1, uint param_2,
   uint param_3) */

void core_netgame_cpp_CNetGame_send_FUN_005411c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0) || (*(int *)(in_stack_00000004 + 0x1c) <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x5c5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  core_netgame_cpp_CNetGame_FUN_00541230();
  return;
}
