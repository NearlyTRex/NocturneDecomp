// Name: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004e53f0
// Address: 004e53f0
// Address Range: [[004e53f0, 004e5462]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004e53f0(CGargoyle *this_ptr)

#include "nocturne.h"

void __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004e53f0(CGargoyle *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  pCVar2 = g_CDemonSetPtr;
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar1 = g_CDemonSetPtr->lighting_quality_mode;
    g_CDemonSetPtr->lighting_quality_mode = 3;
    (pCVar2->flat_color).r = this_ptr->stone_red << 8;
    (pCVar2->flat_color).g = this_ptr->stone_green << 8;
    (pCVar2->flat_color).b = this_ptr->stone_blue << 8;
    core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
    g_CDemonSetPtr->lighting_quality_mode = iVar1;
    return;
  }
  core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  return;
}
