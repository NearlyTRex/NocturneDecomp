// Name: core_set.cpp_updateHighlightedActors_FUN_0054cf40
// Address: 0054cf40
// Address Range: [[0054cf40, 0054cf7f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_updateHighlightedActors_FUN_0054cf40(void)

#include "nocturne.h"

void __cdecl core_set_cpp_updateHighlightedActors_FUN_0054cf40(void)

{
  CHero *pCVar1;
  
  g_INT_02026358 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (pCVar1 = g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4], pCVar1 != (CHero *)0x0)) &&
     (pCVar1->hero_action != 0)) {
    g_INT_02026358 = (int)pCVar1->hero_action_target;
  }
  return;
}
