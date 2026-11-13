// Name: core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410
// Address: 004d6410
// Address Range: [[004d6410, 004d645b]]
// Convention: __cdecl
// Signature: CAngelDemon * __cdecl core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon *this_ptr)

#include "nocturne.h"

CAngelDemon * __cdecl core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon *this_ptr)

{
  CHotDemon *pCVar1;
  
  pCVar1 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CAngelDemonVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"hotdemon.dfm");
  (pCVar1->base).base.hit_points = 60.0;
  (pCVar1->base).attack_damage = 25.0;
  (pCVar1->base).pain_threshold = 20.0;
  return (CAngelDemon *)pCVar1;
}
