// Name: core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970
// Address: 00543970
// Address Range: [[00543970, 00543aa8]]
// Convention: unknown
// Signature: void core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_sendSimFrameAck(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_sendSimFrameAck_FUN_00543970(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int *in_stack_00000004;
  int local_3f [11];
  
  bVar4 = 0;
  if (*in_stack_00000004 != 2) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa29;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in client mode");
  }
  if (in_stack_00000004[1] != 3) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - should only be called in the game loop");
  }
  if (in_stack_00000004[0x44] < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - server not in player list");
  }
  if (in_stack_00000004[0x45] < 0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0xa2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendSimFrameAck - I'm not in player list");
  }
  piVar2 = in_stack_00000004 + in_stack_00000004[0x45] * 0x1e + 0x1b;
  piVar3 = local_3f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  DAT_02f7c8c8 = g_CurrentGameTime;
  return;
}
