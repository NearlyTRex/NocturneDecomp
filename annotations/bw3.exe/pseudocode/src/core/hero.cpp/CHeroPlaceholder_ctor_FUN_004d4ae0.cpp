// Name: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d4ae0
// Address: 004d4ae0
// Address Range: [[004d4ae0, 004d4b38]]
// Convention: __cdecl
// Signature: CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

CHeroPlaceholder * __cdecl core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d4ae0(CHeroPlaceholder *this_ptr)

{
  char cVar1;
  CHeroPlaceholder *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = &DAT_005c50eb;
  pCVar2 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CHeroPlaceholderVTable;
  (pCVar2->base).is_transparent = 1;
  pcVar4 = pCVar2->hero_name;
  pCVar2->index = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}
