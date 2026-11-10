// Name: core_hiram.cpp_CHiram_ctor_FUN_004d0f30
// Address: 004d0f30
// Address Range: [[004d0f30, 004d0f8a]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004d0f30(CHiram *this_ptr)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004d0f30(CHiram *this_ptr)

{
  char cVar1;
  CHiram *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHiram *)core_npc_cpp_CNPC_ctor_FUN_00510460(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHiramVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar2->base).base.model,(char *)0x5da0df);
  pcVar3 = "killHiram";
  pcVar4 = &pCVar2->field_0x24348;
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
