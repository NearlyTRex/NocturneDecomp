// Name: core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310
// Address: 004d6310
// Address Range: [[004d6310, 004d635b]]
// Convention: __cdecl
// Signature: CAngelForest * __cdecl core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest *this_ptr)

#include "nocturne.h"

CAngelForest * __cdecl core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CAngelForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"@hotdemon.dfm" + 1);
  (pCVar1->base).base.hit_points = 40.0;
  (pCVar1->base).attack_damage = 15.0;
  (pCVar1->base).pain_threshold = 15.0;
  return (CAngelForest *)pCVar1;
}
