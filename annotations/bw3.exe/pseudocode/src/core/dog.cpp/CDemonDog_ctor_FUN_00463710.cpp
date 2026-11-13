// Name: core_dog.cpp_CDemonDog_ctor_FUN_00463710
// Address: 00463710
// Address Range: [[00463710, 00463779]]
// Convention: __cdecl
// Signature: CDemonDog * __cdecl core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

#include "nocturne.h"

CDemonDog * __cdecl core_dog_cpp_CDemonDog_ctor_FUN_00463710(CDemonDog *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDemonDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"blackdog.dfm");
  (pCVar1->base).base.hit_points = 30.0;
  (pCVar1->base).attack_damage = 10.0;
  (pCVar1->base).pain_threshold = 10.0;
  (pCVar1->base).base.base.is_transparent = 1;
  (pCVar1->base).base.base.is_renderable = 0;
  pCVar1->dog_variant = 2;
  return (CDemonDog *)pCVar1;
}
