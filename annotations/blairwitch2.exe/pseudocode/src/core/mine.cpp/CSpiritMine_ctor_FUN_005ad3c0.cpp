// Name: core_mine.cpp_CSpiritMine_ctor_FUN_005ad3c0
// Address: 005ad3c0
// Address Range: [[005ad3c0, 005ad451]]
// Convention: unknown
// Signature: CSpiritMine * core_mine_cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritMine * core_mine_cpp_CSpiritMine_ctor_FUN_005ad3c0(CSpiritMine *this_ptr)

{
  CSpiritMine *pCVar1;
  
  pCVar1 = (CSpiritMine *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CSpiritMineVTable;
  pCVar1->sleep_time = 5.0;
  pCVar1->effect_time = 5.0;
  pCVar1->effect_damage = 25.0;
  pCVar1->sleep_timer = 0.0;
  pCVar1->emit_timer = 0.0;
  pCVar1->effect_timer = 0.0;
  (pCVar1->base).base.is_transparent = 0;
  pCVar1->unused_7d8 = 1.0;
  pCVar1->trigger_radius = 1.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar1->base).model,"rock_pile.kfm");
  pCVar1->unused_834 = 0;
  return pCVar1;
}
