// Name: core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0
// Address: 00542dd0
// Address Range: [[00542dd0, 00542fe3]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0()

#include "nocturne.h"

void core_netgame_cpp_CNetGame_sendGameSetting_FUN_00542dd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  byte bVar8;
  int *in_stack_00000004;
  int in_stack_00000008;
  char local_bb [80];
  int local_6b;
  char local_67 [20];
  int local_53 [15];
  int *local_14;
  
  bVar8 = 0;
  if ((*in_stack_00000004 != 1) || (in_stack_00000004[1] != 1)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8a8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::sendGameSettingsPacket - should only call this in server lobby mode");
  }
  if ((in_stack_00000008 < 0) || (in_stack_00000004[7] <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x8ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::send - invalid player index");
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_67,2,&g_SPlayerTypeInfo);
  pcVar7 = local_bb;
  local_6b = in_stack_00000004[7];
  piVar5 = in_stack_00000004 + 0x46;
  do {
    iVar3 = *piVar5;
    *pcVar7 = (char)iVar3;
    if ((char)iVar3 == '\0') break;
    cVar1 = *(char *)((int)piVar5 + 1);
    piVar5 = (int *)((int)piVar5 + 2);
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  if (0 < in_stack_00000004[7]) {
    piVar6 = in_stack_00000004 + 8;
    pcVar7 = local_67;
    local_14 = piVar6;
    pcVar4 = pcVar7;
    piVar5 = in_stack_00000004;
LAB_00542ef5:
    do {
      iVar2 = *piVar6;
      *pcVar7 = (char)iVar2;
      if ((char)iVar2 != '\0') {
        cVar1 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 2);
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
        if (cVar1 != '\0') goto LAB_00542ef5;
      }
      local_53[iVar3 * 10] = piVar5[0xf];
      local_53[iVar3 * 10 + (uint)bVar8 * -2 + 1] = piVar5[(uint)bVar8 * -2 + 0x10];
      local_53[iVar3 * 10 + 4] = piVar5[0x19];
      local_53[iVar3 * 10 + 2] = piVar5[0xd];
      pcVar7 = pcVar4 + 0x28;
      local_53[iVar3 * 10 + 3] = piVar5[0xe];
      iVar3 = iVar3 + 1;
      piVar6 = local_14 + 0x1e;
      local_14 = piVar6;
      pcVar4 = pcVar7;
      piVar5 = piVar5 + 0x1e;
    } while (iVar3 < in_stack_00000004[7]);
  }
  core_netgame_cpp_CNetGame_send_FUN_005411c0();
  iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar3 / 0x12 - g_LastPingTime;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x20000 < iVar2) {
    iVar2 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar2;
  g_LastPingTime = iVar3 / 0x12;
  in_stack_00000004[in_stack_00000008 * 0x1e + 0x16] = g_CurrentGameTime;
  return;
}
