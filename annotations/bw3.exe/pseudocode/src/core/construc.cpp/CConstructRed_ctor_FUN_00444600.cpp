// Name: core_construc.cpp_CConstructRed_ctor_FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 0044465a]]
// Convention: unknown
// Signature: CConstructRed * core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CConstructRed * core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

{
  CConstruct *pCVar1;
  CConstructRed *pCVar2;
  float10 fVar3;
  
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00442420(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CConstructRedVTable._ub;
  (pCVar1->base).base.hit_points = 65.0;
  (pCVar1->base).attack_damage = 20.0;
  (pCVar1->base).pain_threshold = 10.0;
  pCVar1->construct_variant = 2;
  pCVar1->trail_texture_type = 2;
  fVar3 = (float10)(pCVar1->base).base.hit_points;
  pCVar2 = (CConstructRed *)round();
  (pCVar2->base).initial_hit_points = (int)ROUND(fVar3);
  return pCVar2;
}
