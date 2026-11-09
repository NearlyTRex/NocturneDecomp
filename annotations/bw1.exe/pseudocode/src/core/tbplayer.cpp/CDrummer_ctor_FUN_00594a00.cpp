// Name: core_tbplayer.cpp_CDrummer_ctor_FUN_00594a00
// Address: 00594a00
// Address Range: [[00594a00, 00594a2d]]
// Convention: __cdecl
// Signature: CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00(CDrummer *this_ptr)

#include "nocturne.h"

CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00594a00(CDrummer *this_ptr)

{
  CDrummer *pCVar1;
  
  pCVar1 = (CDrummer *)core_npc_cpp_CNPC_ctor_FUN_00531670((CNPC *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CDrummerVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"drummer.dfm");
  return pCVar1;
}
