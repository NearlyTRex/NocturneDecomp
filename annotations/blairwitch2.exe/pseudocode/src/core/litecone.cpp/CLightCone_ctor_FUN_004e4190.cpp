// Name: core_litecone.cpp_CLightCone_ctor_FUN_004e4190
// Address: 004e4190
// Address Range: [[004e4190, 004e4221]]
// Convention: __cdecl
// Signature: CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_004e4190(CLightCone *this_ptr)

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_CLightCone_ctor_FUN_004e4190(CLightCone *this_ptr)

{
  char cVar1;
  CLightCone *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CLightCone *)core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  (pCVar2->base).vtable._ub = &g_CLightConeVTable;
  pcVar3 = (char *)0x5dc105;
  pCVar2->fov = 56.0;
  pCVar2->falloff = 6.0;
  (pCVar2->base).is_transparent = 1;
  pcVar4 = pCVar2->on_event;
  pCVar2->state = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5dc10a;
  pcVar4 = pCVar2->off_event;
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
