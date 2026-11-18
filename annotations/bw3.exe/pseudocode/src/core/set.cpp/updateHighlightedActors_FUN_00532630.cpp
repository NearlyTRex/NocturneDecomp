// Name: core_set.cpp_updateHighlightedActors_FUN_00532630
// Address: 00532630
// Address Range: [[00532630, 005326a3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_updateHighlightedActors_FUN_00532630(void)

#include "nocturne.h"

void __cdecl core_set_cpp_updateHighlightedActors_FUN_00532630(void)

{
  CHero *pCVar1;
  float10 fVar2;
  
  g_INT_0207bab8 = 0;
  g_INT_0207babc = 0;
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (pCVar1 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14], pCVar1 != (CHero *)0x0)) {
    if (pCVar1->hero_action != 0) {
      g_INT_0207bab8 = (int)pCVar1->hero_action_target;
    }
    g_INT_0207babc = (int)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->aim_target_actor;
    fVar2 = (float10)fcos((float10)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->aim_target_pulse);
    g_FLOAT_0207bac0 = (float)(fVar2 + (float10)2.25);
  }
  return;
}
