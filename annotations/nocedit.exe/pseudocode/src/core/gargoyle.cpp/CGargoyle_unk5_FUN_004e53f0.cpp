// Name: core_gargoyle.cpp_CGargoyle_unk5_FUN_004e53f0
// Address: 004e53f0
// Address Range: [[004e53f0, 004e5462]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_unk5_FUN_004e53f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_unk5(CGargoyle* param_1) */

void __cdecl core_gargoyle_cpp_CGargoyle_unk5_FUN_004e53f0(void)

{
  int iVar1;
  CDemonSet *pCVar2;
  CCharacter *in_stack_00000004;
  
  pCVar2 = g_CDemonSetPtr;
  if (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) {
    iVar1 = g_CDemonSetPtr->lighting_quality_mode;
    g_CDemonSetPtr->lighting_quality_mode = 3;
    pCVar2->light_scale_factor = *(int *)(in_stack_00000004[1].base.create_event + 0x50) << 8;
    pCVar2->color_scale_factor = *(int *)(in_stack_00000004[1].base.create_event + 0x54) << 8;
    pCVar2->fog_scale_factor = *(int *)(in_stack_00000004[1].base.create_event + 0x58) << 8;
    core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
    g_CDemonSetPtr->lighting_quality_mode = iVar1;
    return;
  }
  core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  return;
}
