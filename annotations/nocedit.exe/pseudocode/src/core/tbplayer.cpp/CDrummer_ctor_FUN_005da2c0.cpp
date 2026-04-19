// Name: core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
// Address: 005da2c0
// Address Range: [[005da2c0, 005da2ed]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(CDrummer *this_ptr)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDrummerVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"drummer.dfm");
  return pCVar1;
}
