// Name: core_tbplayer.cpp_FUN_005433a0
// Address: 005433a0
// Address Range: [[005433a0, 005433cd]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_FUN_005433a0(CDrummer *this_ptr)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_FUN_005433a0(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_FUN_004ee950(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDrummerVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(pCVar1->base).base.model,"drummer.dfm");
  return pCVar1;
}
