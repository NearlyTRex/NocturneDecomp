// Name: core_svetlana.cpp_CSvetlana_renderOpaque_FUN_00571700
// Address: 00571700
// Address Range: [[00571700, 00571863]]
// Convention: __cdecl
// Signature: int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00571700(CSvetlana *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_svetlana_cpp_CSvetlana_renderOpaque_FUN_00571700(CSvetlana *this_ptr)

{
  uint *puVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  CSvetlana *pCVar4;
  uint auStack_84 [30];
  byte *puVar5;
  
  g_CDemonSetPtr->skip_normal_normalization = 1;
  iVar3 = 0;
  pCVar4 = this_ptr;
  do {
    iVar2 = iVar3 + 1;
    puVar5 = &pCVar4->field_0x23f4;
    pCVar4 = (CSvetlana *)&pCVar4->field_0x4;
    auStack_84[iVar3] = *(uint *)puVar5;
    iVar3 = iVar2;
  } while (iVar2 < 0x1e);
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar2 == 0) && (_DAT_01c38aec < 0x4000)) {
    pCVar4 = this_ptr;
    do {
      puVar5 = &pCVar4->field_0x4;
      *(uint *)&pCVar4->field_0x23f4 = 0;
      pCVar4 = (CSvetlana *)puVar5;
    } while (puVar5 != &this_ptr->field_0x78);
    *(uint *)(&this_ptr->field_0x23f4 + this_ptr->part_indices[0] * 4) = 1;
    this_ptr_00 = DAT_0060b280;
    *(uint *)(&this_ptr->field_0x23f4 + this_ptr->part_indices[1] * 4) = 1;
    iVar2 = g_CGamePtr->render_mode;
    g_CGamePtr->render_mode = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,48000);
    if (iVar3 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_004254b0((CCharacter *)this_ptr);
    }
    g_CGamePtr->render_mode = iVar2;
    iVar2 = 0;
    pCVar4 = this_ptr;
    do {
      puVar1 = auStack_84 + iVar2;
      iVar2 = iVar2 + 1;
      *(uint *)&pCVar4->field_0x23f4 = *puVar1;
      pCVar4 = (CSvetlana *)&pCVar4->field_0x4;
    } while (iVar2 < 0x1e);
  }
  g_CDemonSetPtr->skip_normal_normalization = 0;
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&this_ptr->field_0x25648,(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&this_ptr->field_0x60178,(CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
    return iVar3;
  }
  return 0;
}
