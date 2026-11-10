// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00594340
// Address: 00594340
// Address Range: [[00594340, 005944b9]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00594340(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00594340(CSvetlana *this_ptr)

{
  uint *puVar1;
  uint uVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  int iVar4;
  CSvetlana *pCVar5;
  uint auStack_fc [60];
  byte *puVar6;
  
  g_CDemonSetPtr->skip_normal_normalization = 1;
  iVar4 = 0;
  pCVar5 = this_ptr;
  do {
    iVar3 = iVar4 + 1;
    puVar6 = &pCVar5->field_0x2298;
    pCVar5 = (CSvetlana *)&pCVar5->field_0x4;
    auStack_fc[iVar4] = *(uint *)puVar6;
    iVar4 = iVar3;
  } while (iVar3 < 0x3c);
  iVar4 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar3 == 0) && (_DAT_01c51cac < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      puVar6 = &pCVar5->field_0x4;
      *(uint *)&pCVar5->field_0x2298 = 0;
      pCVar5 = (CSvetlana *)puVar6;
    } while (puVar6 != &this_ptr->field_0xf0);
    *(uint *)(&this_ptr->field_0x2298 + this_ptr->part_indices[0] * 4) = 1;
    this_ptr_00 = DAT_00612560;
    *(uint *)(&this_ptr->field_0x2298 + this_ptr->part_indices[1] * 4) = 1;
    uVar2 = *(uint *)&g_CGamePtr->field_0x210;
    *(uint *)&g_CGamePtr->field_0x210 = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240((CCharacter *)this_ptr);
    }
    *(uint *)&g_CGamePtr->field_0x210 = uVar2;
    iVar3 = 0;
    pCVar5 = this_ptr;
    do {
      puVar1 = auStack_fc + iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)&pCVar5->field_0x2298 = *puVar1;
      pCVar5 = (CSvetlana *)&pCVar5->field_0x4;
    } while (iVar3 < 0x3c);
  }
  g_CDemonSetPtr->skip_normal_normalization = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_00441800
              ((CCloth *)&this_ptr->field_0x1ffb4,(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_00441800
              ((CCloth *)&this_ptr->field_0x5aae4,(CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
    return iVar4;
  }
  return 0;
}
