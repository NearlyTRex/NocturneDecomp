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
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430((CHotDemon *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CAngelSpiritVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"hotdemon.dfm");
  (pCVar1->base).base.hit_points = 50.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x41c80000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x41700000;
  return (CAngelSpirit *)pCVar1;
}
