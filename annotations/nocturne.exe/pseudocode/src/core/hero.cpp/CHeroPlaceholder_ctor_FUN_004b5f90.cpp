// Name: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004b5f90
// Address: 004b5f90
// Address Range: [[004b5f90, 004b5fbb]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004b5f90(CHeroPlaceholder *this_ptr)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)core_actor_cpp_FUN_00409d30(this_ptr);
  (pCVar1->base).vtable._ub =
       (CDemonActor_vtable *)&PTR_core_actor_cpp_CDemonActor_setup_FUN_00409fc0_0059ec84;
  (pCVar1->base).is_transparent = 1;
  pCVar1->index = 0;
  return pCVar1;
}
