// Name: core_game.cpp_FUN_004b8030
// Address: 004b8030
// Address Range: [[004b8030, 004b8096]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b8030(int param_1,int param_2)

#include "nocturne.h"

void core_game_cpp_FUN_004b8030(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != *(int *)(param_1 + 0x260)) && (*(int *)(param_1 + 0x260) = param_2, param_2 == 0))
  {
    iVar1 = *(int *)&g_CDemonSetPtr->field_0x15aeb8;
    core_setdir_cpp_FUN_00538d10(g_CDemonSetPtr,*(uint *)&g_CScriptPtr->field_0xc,1);
    *(uint *)&g_CScriptPtr->field_0x10 = 0;
    if (iVar1 == *(int *)&g_CDemonSetPtr->field_0x15aeb8) {
      core_set_cpp_CDemonSet_setCameraView_FUN_0052ddf0
                (g_CDemonSetPtr,*(int *)&g_CDemonSetPtr->field_0x15aeb8);
      return;
    }
  }
  return;
}
