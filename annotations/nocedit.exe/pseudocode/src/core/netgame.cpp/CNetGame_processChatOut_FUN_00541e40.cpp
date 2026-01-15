// Name: core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40
// Address: 00541e40
// Address Range: [[00541e40, 00541fe2]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40()

#include "nocturne.h"

void core_netgame_cpp_CNetGame_processChatOut_FUN_00541e40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  if (0x31 < DAT_02f98ad0) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 0x76c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CNetGame::processChatOut - too many pending outgoing chat messages");
  }
  iVar4 = DAT_02f98ad0;
  iVar1 = DAT_02f98ad0 * 0x114;
  puVar7 = &DAT_02f98ad4 + DAT_02f98ad0 * 0x45;
  DAT_02f98ad0 = DAT_02f98ad0 + 1;
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar3 = iVar2 / 0x12 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  DAT_02f9c0bc = DAT_02f9c0bc + 1;
  g_LastPingTime = iVar2 / 0x12;
  (&DAT_02f98ad8)[iVar4 * 0x45] = DAT_02f9c0bc;
  *puVar7 = g_CurrentGameTime;
  crt_memory_c_memset_FUN_005fde40(&DAT_02f98adc + iVar1,1,2);
  if (in_stack_0000000c < 0) {
    iVar4 = 0;
    puVar5 = puVar7;
    puVar6 = puVar7;
    if (0 < *(int *)(in_stack_00000004 + 0x1c)) {
      do {
        *(byte *)(puVar6 + 2) = 0;
        puVar5[3] = g_CurrentGameTime - 0x3c0000;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (iVar4 < *(int *)(in_stack_00000004 + 0x1c));
    }
  }
  else {
    *(byte *)((int)puVar7 + in_stack_0000000c + 8) = 0;
    *(uint *)(&DAT_02f98ae0 + in_stack_0000000c * 4 + iVar1) = g_CurrentGameTime - 0x3c0000;
  }
  *(byte *)(*(int *)(in_stack_00000004 + 0x114) + 8 + (int)puVar7) = 1;
  crt_memory_c_memset_FUN_005fde40(&DAT_02f98ae8 + iVar1,0,0x100);
  crt_string_c_strncpy_FUN_00600f40(&DAT_02f98ae8 + iVar1,in_stack_00000008,0xff);
  core_netgame_cpp_CNetGame_FUN_00542370();
  return;
}
