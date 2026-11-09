// Name: core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0
// Address: 00571db0
// Address Range: [[00571db0, 00571ddd]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(CDrummer *this_ptr)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_CNPC_ctor_FUN_00510460((CNPC *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CDrummerVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"drummer.dfm");
  return pCVar1;
}
