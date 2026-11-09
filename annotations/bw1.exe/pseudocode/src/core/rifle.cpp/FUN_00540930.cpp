// Name: core_rifle.cpp_FUN_00540930
// Address: 00540930
// Address Range: [[00540930, 005409af]]
// Convention: unknown
// Signature: float core_rifle_cpp_FUN_00540930(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_rifle_cpp_FUN_00540930(int param_1)

{
  float fStack_c;
  
  if (*(int *)(param_1 + 0x56c) == 6) {
    return 0.0;
  }
  core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  fStack_c = (float)core_actor_cpp_FUN_0040cc00(0x41c80000,0x425c0000);
  if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
    fStack_c = fStack_c * _DAT_005edcb3;
  }
  return fStack_c;
}
