// Name: core_hpriest.cpp_CHighPriestOfGardath_ctor_FUN_004f7b70
// Address: 004f7b70
// MANUAL RECONSTRUCTION
// Address Range: [[004f7b70, 004f7bca]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_ctor_FUN_004f7b70(CHighPriestOfGardath *this_ptr)

{
  CHighPriestOfGardath *pCVar2;

  pCVar2 = (CHighPriestOfGardath *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHighPriestOfGardathVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"priest.dfm");
  strcpy(pCVar2->kill_event,"killPriest");
  return pCVar2;
}
