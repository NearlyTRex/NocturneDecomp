// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// Address Range: [[00542dd0, 00542fe3]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0()

#include "nocturne.h"

void core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_00000018;
  char acStack_b3 [80];
  uint uStack_63;
  char acStack_5f [20];
  uint auStack_4b [14];
  
  bVar8 = 0;
  if ((*in_stack_00000004 != 1) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8a8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((in_stack_0000000c < 0) || (*(int *)(in_stack_00000008 + 0x1c) <= in_stack_0000000c)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_63,2,&g_SPlayerTypeInfo);
  pcVar7 = acStack_b3;
  uStack_63 = *(uint *)(in_stack_0000000c + 0x1c);
  pcVar6 = (char *)(in_stack_0000000c + 0x118);
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x1c)) {
    pcVar2 = (char *)(in_stack_0000000c + 0x20);
    pcVar7 = acStack_5f;
    pcVar6 = pcVar2;
    pcVar5 = pcVar7;
    iVar3 = in_stack_0000000c;
LAB_00542ef5:
    do {
      cVar1 = *pcVar2;
      *pcVar7 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_00542ef5;
      }
      auStack_4b[iVar4 * 10] = *(uint *)(iVar3 + 0x3c);
      auStack_4b[iVar4 * 10 + (uint)bVar8 * -2 + 1] =
           *(uint *)(iVar3 + 0x40 + (uint)bVar8 * -8);
      auStack_4b[iVar4 * 10 + 4] = *(uint *)(iVar3 + 100);
      auStack_4b[iVar4 * 10 + 2] = *(uint *)(iVar3 + 0x34);
      pcVar7 = pcVar5 + 0x28;
      auStack_4b[iVar4 * 10 + 3] = *(uint *)(iVar3 + 0x38);
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar6 + 0x78;
      pcVar6 = pcVar2;
      pcVar5 = pcVar7;
      iVar3 = iVar3 + 0x78;
    } while (iVar4 < *(int *)(in_stack_0000000c + 0x1c));
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar4 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  g_LastPingTime = iVar4 / 0x12;
  *(uint *)(in_stack_00000018 * 0x78 + in_stack_00000014 + 0x58) = g_CurrentGameTime;
  return;
}
