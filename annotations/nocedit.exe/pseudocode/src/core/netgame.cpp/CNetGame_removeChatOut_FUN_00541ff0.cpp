// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
// Address Range: [[00541ff0, 0054236f]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0()

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_removeChatOut(CNetGame* param_1) */

void core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  BADSPACEBASE *in_ESP;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  float local_150;
  float local_14c;
  float local_148;
  char acStack_13b [259];
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int iStack_14;
  
  iVar2 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  iVar2 = iVar2 / 0x12;
  iVar3 = iVar2 - g_LastPingTime;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x20000 < iVar3) {
    iVar3 = 0x20000;
  }
  g_CurrentGameTime = g_CurrentGameTime + iVar3;
  local_30 = 0;
  g_LastPingTime = iVar2;
  if (0 < DAT_02f98ad0) {
    local_38 = in_stack_00000004 + 0x20;
    local_34 = &DAT_02f98ad4;
    do {
      local_24 = local_34;
      local_14c = (float)(int)(g_CurrentGameTime - *local_34) * (float)1.52587890625e-05;
      local_28 = 1;
      if (local_14c < 0.0) {
        local_14c = 0.0;
      }
      if ((float)30 < local_14c) {
        local_14c = 30.0;
      }
      if ((local_14c < (float)20) &&
         (local_20 = 0, 0 < *(int *)(in_stack_00000004 + 0x1c))) {
        local_2c = local_34 + 5;
        local_18 = local_34;
        local_1c = in_stack_00000004;
        iStack_14 = local_38 + 0x1c;
        piVar4 = local_34;
        do {
          if ((char)local_18[2] == '\0') {
            local_148 = *(float *)(local_1c + 0x48) * (float)4;
            local_28 = 0;
            if (local_148 < (float)2) {
              local_148 = 2.0;
            }
            if ((float)5 < local_148) {
              local_148 = 5.0;
            }
            local_150 = (float)(int)(g_CurrentGameTime - piVar4[3]) * (float)1.52587890625e-05;
            if (local_150 < 0.0) {
              local_150 = 0.0;
            }
            if ((float)30 < local_150) {
              local_150 = 30.0;
            }
            if (local_148 < local_150) {
              pcVar6 = acStack_13b;
              piVar5 = local_2c;
              do {
                iVar2 = *piVar5;
                *pcVar6 = (char)iVar2;
                if ((char)iVar2 == '\0') break;
                cVar1 = *(char *)((int)piVar5 + 1);
                piVar5 = (int *)((int)piVar5 + 2);
                pcVar6[1] = cVar1;
                pcVar6 = pcVar6 + 2;
              } while (cVar1 != '\0');
              core_netgame_cpp_CNetGame_FUN_00541230();
              piVar4[3] = g_CurrentGameTime;
            }
          }
          piVar4 = piVar4 + 1;
          local_18 = (int *)((int)local_18 + 1);
          local_1c = local_1c + 0x78;
          iStack_14 = iStack_14 + 0x78;
          local_20 = local_20 + 1;
        } while (local_20 < *(int *)(in_stack_00000004 + 0x1c));
      }
      piVar4 = local_34;
      if (local_2c == (int *)0x0) {
        local_34 = (int *)((int)local_34 + 1);
        local_38 = local_38 + 0x114;
      }
      else {
        if (((int)local_34 < 0) || (DAT_02f98ad0 <= (int)local_34)) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x107;
          core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
        }
        DAT_02f98ad0 = DAT_02f98ad0 + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  (&DAT_02f98ad4 + (int)piVar4 * 0x45,&DAT_02f98ad4 + ((int)piVar4 + 1) * 0x45,
                   (DAT_02f98ad0 - (int)piVar4) * 0x114);
      }
    } while (local_30 < DAT_02f98ad0);
  }
  return;
}
