// Name: core_hotdemon.cpp_CAngelSpirit_ctor_FUN_004d6390
// Address: 004d6390
// Address Range: [[004d6390, 004d63db]]
// Convention: unknown
// Signature: CAngelSpirit * core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(CAngelSpirit *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAngelSpirit * core_hotdemon_cpp_CAngelSpirit_ctor_FUN_004d6390(CAngelSpirit *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CAngelSpiritVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"hotdemon.dfm");
  (pCVar1->base).base.hit_points = 50.0;
  (pCVar1->base).attack_damage = 25.0;
  (pCVar1->base).pain_threshold = 15.0;
  return (CAngelSpirit *)pCVar1;
}
