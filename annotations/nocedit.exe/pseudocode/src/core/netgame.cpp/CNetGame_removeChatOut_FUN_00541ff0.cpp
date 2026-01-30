// Name: core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0
// Address: 00541ff0
// Address Range: [[00541ff0, 0054236f]]
// Convention: __cdecl
// Signature: void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(void)

#include "nocturne.h"

/* Signature: byte core_netgame.cpp_CNetGame_removeChatOut(CNetGame* param_1) */

void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_00541ff0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int in_stack_00000004;
  float local_158;
  float local_154;
  float local_150;
  char local_143 [259];
  int local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  
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
  local_38 = 0;
  g_LastPingTime = iVar2;
  if (0 < DAT_02f98ad0) {
    local_40 = in_stack_00000004 + 0x20;
    local_3c = &DAT_02f98ad4;
    do {
      local_2c = local_3c;
      local_18 = g_CurrentGameTime - *local_3c;
      local_154 = (float)local_18 * (float)1.52587890625e-05;
      local_30 = 1;
      if (local_154 < 0.0) {
        local_154 = 0.0;
      }
      if ((float)30 < local_154) {
        local_154 = 30.0;
      }
      if ((local_154 < (float)20) &&
         (local_28 = 0, 0 < *(int *)(in_stack_00000004 + 0x1c))) {
        local_34 = local_3c + 5;
        local_20 = local_3c;
        local_24 = in_stack_00000004;
        local_1c = local_40 + 0x1c;
        piVar4 = local_3c;
        do {
          if ((char)local_20[2] == '\0') {
            local_150 = *(float *)(local_24 + 0x48) * (float)4;
            local_30 = 0;
            if (local_150 < (float)2) {
              local_150 = 2.0;
            }
            if ((float)5 < local_150) {
              local_150 = 5.0;
            }
            local_18 = g_CurrentGameTime - piVar4[3];
            local_158 = (float)local_18 * (float)1.52587890625e-05;
            if (local_158 < 0.0) {
              local_158 = 0.0;
            }
            if ((float)30 < local_158) {
              local_158 = 30.0;
            }
            if (local_150 < local_158) {
              pcVar6 = local_143;
              piVar5 = local_34;
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
          local_20 = (int *)((int)local_20 + 1);
          local_24 = local_24 + 0x78;
          local_1c = local_1c + 0x78;
          local_28 = local_28 + 1;
        } while (local_28 < *(int *)(in_stack_00000004 + 0x1c));
      }
      iVar2 = local_38;
      if (local_30 == 0) {
        local_38 = local_38 + 1;
        local_3c = local_3c + 0x45;
      }
      else {
        if ((local_38 < 0) || (DAT_02f98ad0 <= local_38)) {
          g_CurrentFilename = "..\\core\\netgame.cpp";
          g_CurrentLineNumber = 0x107;
          core_main_c_displayErrorAndQuit_FUN_00506f10("removeChatOut - invalid index");
        }
        DAT_02f98ad0 = DAT_02f98ad0 + -1;
        memmove
                  (&DAT_02f98ad4 + iVar2 * 0x45,&DAT_02f98ad4 + (iVar2 + 1) * 0x45,
                   (DAT_02f98ad0 - iVar2) * 0x114);
      }
    } while (local_38 < DAT_02f98ad0);
  }
  return;
}
