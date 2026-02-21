// Name: core_hiram.cpp_CHiram_ctor_FUN_004f43f0
// Address: 004f43f0
// Address Range: [[004f43f0, 004f444a]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004f43f0(CHiram *this_ptr)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004f43f0(CHiram *this_ptr)

{
  char cVar1;
  CHiram *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHiram *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHiramVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"hiram.dfm");
  pcVar3 = "killHiram";
  pcVar4 = pCVar2->kill_event;
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
