// Name: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004e53f0
// Address: 004e53f0
// Address Range: [[004e53f0, 004e5462]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004e53f0(CGargoyle *this_ptr)

#include "nocturne.h"

int __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004e53f0(CGargoyle *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = g_CDemonSetPtr;
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar3 = g_CDemonSetPtr->lighting_quality_mode;
    g_CDemonSetPtr->lighting_quality_mode = 3;
    (pCVar1->flat_color).r = this_ptr->stone_red << 8;
    (pCVar1->flat_color).g = this_ptr->stone_green << 8;
    (pCVar1->flat_color).b = this_ptr->stone_blue << 8;
    iVar2 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
    g_CDemonSetPtr->lighting_quality_mode = iVar3;
    return iVar2;
  }
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return iVar3;
}
