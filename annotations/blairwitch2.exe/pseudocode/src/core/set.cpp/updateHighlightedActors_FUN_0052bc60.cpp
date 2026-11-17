// Name: core_set.cpp_updateHighlightedActors_FUN_0052bc60
// Address: 0052bc60
// Address Range: [[0052bc60, 0052bc9f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_updateHighlightedActors_FUN_0052bc60(void)

#include "nocturne.h"

void __cdecl core_set_cpp_updateHighlightedActors_FUN_0052bc60(void)

{
  CHero *pCVar1;
  
  g_INT_0200a3a4 = 0;
  if (((g_CGamePtr->letterbox_mode == 0) &&
      (pCVar1 = g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4], pCVar1 != (CHero *)0x0)) &&
     (pCVar1->hero_action != 0)) {
    g_INT_0200a3a4 = (int)pCVar1->hero_action_target;
  }
  return;
}
