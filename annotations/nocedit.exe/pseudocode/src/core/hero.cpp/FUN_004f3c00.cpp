// Name: core_hero.cpp_FUN_004f3c00
// Address: 004f3c00
// Address Range: [[004f3c00, 004f3c2b]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * core_hero.cpp_FUN_004f3c00(CHeroPlaceholder * this_ptr)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_FUN_004f3c00(CHeroPlaceholder *this_ptr)

{
  CHeroPlaceholder *pCVar1;
  
  pCVar1 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).vtable = &g_CHeroPlaceholderVTable;
  (pCVar1->base_actor).is_transparent = 1;
  pCVar1->field1_0x158 = 0;
  return pCVar1;
}
