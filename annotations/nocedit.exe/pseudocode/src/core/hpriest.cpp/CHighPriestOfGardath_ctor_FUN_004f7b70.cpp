// Name: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f7b70
// Address: 004f7b70
// Address Range: [[004f7b70, 004f7bca]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl
core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr)

{
  char cVar1;
  CHighPriestOfGardath *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHighPriestOfGardath *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHighPriestOfGardathVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"priest.dfm");
  pcVar3 = "killPriest";
  pcVar4 = pCVar2->unk;
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
