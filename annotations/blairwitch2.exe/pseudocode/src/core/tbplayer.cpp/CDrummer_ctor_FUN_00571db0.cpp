// Name: core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0
// Address: 00571db0
// Address Range: [[00571db0, 00571ddd]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(CDrummer *this_ptr)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_CNPC_ctor_FUN_00510460(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CDrummerVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&(pCVar1->base).base.model,"drummer.dfm");
  return pCVar1;
}
