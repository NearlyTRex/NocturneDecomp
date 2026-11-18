// Name: core_construc.cpp_CConstructRed_ctor_FUN_00444600
// Address: 00444600
// Address Range: [[00444600, 0044465a]]
// Convention: __cdecl
// Signature: CConstructRed * __cdecl core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

#include "nocturne.h"

CConstructRed * __cdecl core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)

{
  CConstruct *pCVar1;
  double dVar2;
  
  pCVar1 = core_construc_cpp_CConstruct_ctor_FUN_00442420(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CConstructRedVTable._ub;
  (pCVar1->base).base.hit_points = 65.0;
  (pCVar1->base).attack_damage = 20.0;
  (pCVar1->base).pain_threshold = 10.0;
  pCVar1->construct_variant = 2;
  pCVar1->trail_texture_type = 2;
  dVar2 = round((double)(pCVar1->base).base.hit_points);
  pCVar1->initial_hit_points = (int)ROUND(dVar2);
  return (CConstructRed *)pCVar1;
}
