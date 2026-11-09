// Name: core_hero.cpp_CHeroPlaceholder_ctor_FUN_004d0940
// Address: 004d0940
// Address Range: [[004d0940, 004d0998]]
// Convention: unknown
// Signature: CHeroPlaceholder * core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(CHeroPlaceholder *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHeroPlaceholder * core_hero_cpp_CHeroPlaceholder_ctor_FUN_004d0940(CHeroPlaceholder *this_ptr)

{
  char cVar1;
  CHeroPlaceholder *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = &DAT_005da037;
  pCVar2 = (CHeroPlaceholder *)core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr)
  ;
  *(byte **)&pCVar2->field_0x2b0 = &g_CHeroPlaceholderVTable;
  *(uint *)&pCVar2->field_0xfc = 1;
  pcVar4 = &pCVar2->field_0x2b8;
  *(uint *)&pCVar2->field_0x2b4 = 0;
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
