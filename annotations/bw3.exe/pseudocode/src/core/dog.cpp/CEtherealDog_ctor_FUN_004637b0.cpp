// Name: core_dog.cpp_CEtherealDog_ctor_FUN_004637b0
// Address: 004637b0
// Address Range: [[004637b0, 0046380f]]
// Convention: __cdecl
// Signature: CEtherealDog * __cdecl core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog *this_ptr)

#include "nocturne.h"

CEtherealDog * __cdecl core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog *this_ptr)

{
  CZombieDog *pCVar1;
  
  pCVar1 = core_dog_cpp_CZombieDog_ctor_FUN_00462710(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CEtherealDogVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"ethereal_dog.dfm");
  (pCVar1->base).base.hit_points = 30.0;
  (pCVar1->base).attack_damage = 10.0;
  (pCVar1->base).pain_threshold = 10.0;
  (pCVar1->base).base.additive = 1;
  pCVar1->dog_variant = 3;
  return (CEtherealDog *)pCVar1;
}
