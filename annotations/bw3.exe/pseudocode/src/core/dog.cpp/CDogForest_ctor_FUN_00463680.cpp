// Name: core_dog.cpp_CDogForest_ctor_FUN_00463680
// Address: 00463680
// Address Range: [[00463680, 004636d5]]
// Convention: __cdecl
// Signature: CDogForest * __cdecl core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

#include "nocturne.h"

CDogForest * __cdecl core_dog_cpp_CDogForest_ctor_FUN_00463680(CDogForest *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDogForestVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"blackdog.dfm");
  (pCVar1->base).base.hit_points = 20.0;
  (pCVar1->base).attack_damage = 5.0;
  (pCVar1->base).pain_threshold = 10.0;
  pCVar1->dog_variant = 1;
  return (CDogForest *)pCVar1;
}
