// Name: core_hiram.cpp_CHiram_ctor_FUN_004f43f0
// Address: 004f43f0
// MANUAL RECONSTRUCTION
// Address Range: [[004f43f0, 004f444a]]
// Convention: __cdecl
// Signature: CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004f43f0(CHiram *this_ptr)

#include "nocturne.h"

CHiram * __cdecl core_hiram_cpp_CHiram_ctor_FUN_004f43f0(CHiram *this_ptr)

{
  CHiram *pCVar2;

  pCVar2 = (CHiram *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar2->base).base.base.vtable._ub = &g_CHiramVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base).base.model,"hiram.dfm");
  strcpy(pCVar2->kill_event,"killHiram");
  return pCVar2;
}
