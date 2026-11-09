// Name: core_event.cpp_FUN_004a9a00
// Address: 004a9a00
// Address Range: [[004a9a00, 004a9a52]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004a9a00(int param_1)

#include "nocturne.h"

void core_event_cpp_FUN_004a9a00(int param_1)

{
  CGame *pCVar1;
  
  pCVar1 = g_CGamePtr;
  *(uint *)(param_1 + 0x1908) = 0;
  if (*(int *)&pCVar1->field_0xe4 == 1) {
    core_event_cpp_FUN_004a9a60(param_1,"puzzleModeHard",1);
  }
  if (*(int *)&g_CGamePtr->field_0xe8 != 1) {
    return;
  }
  core_event_cpp_FUN_004a9a60(param_1,"combatModeHard",1);
  return;
}
