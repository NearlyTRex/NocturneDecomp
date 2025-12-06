// Name: core_svetlana.cpp_CSvetlana_FUN_005d9bc0
// Address: 005d9bc0
// Address Range: [[005d9bc0, 005d9d23]]
// Convention: __cdecl
// Signature: int core_svetlana.cpp_CSvetlana_FUN_005d9bc0(CSvetlana * this_ptr)

#include "nocturne.h"

int __cdecl core_svetlana_cpp_CSvetlana_FUN_005d9bc0(CSvetlana *this_ptr)

{
  char **ppcVar1;
  CHero *pCVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  int iVar4;
  CSvetlana *pCVar5;
  BADSPACEBASE *in_ESP;
  char *apcStack_70 [2];
  CSvetlana *pCVar6;
  
  g_CDemonSetPtr->field40_0x15ae84 = 1;
  iVar3 = 0;
  pCVar5 = this_ptr;
  do {
    iVar3 = iVar3 + 1;
    pCVar2 = &pCVar5->base_hero;
    pCVar5 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
    *(int *)(&stack0xffffff78 + iVar3 * 4) = (pCVar2->base_character).model.part_visibility_flags[0]
    ;
  } while (iVar3 < 0x1e);
  iVar3 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if ((iVar4 == 0) && ((int)g_PerspectiveReciprocal < 0x4000)) {
    pCVar5 = this_ptr;
    do {
      pCVar6 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
      (pCVar5->base_hero).base_character.model.part_visibility_flags[0] = 0;
      pCVar5 = pCVar6;
    } while (pCVar6 != (CSvetlana *)(this_ptr->base_hero).base_character.base_actor.create_event);
    (this_ptr->base_hero).base_character.model.part_visibility_flags
    [*(int *)(this_ptr->field1_0x1fbd4 + 0x7fcfc)] = 1;
    this_ptr_00 = g_CDemonRendererPtr;
    (this_ptr->base_hero).base_character.model.part_visibility_flags
    [*(int *)(this_ptr->field1_0x1fbd4 + 0x7fd00)] = 1;
    iVar4 = g_CGamePtr->field62_0x1f4;
    g_CGamePtr->field62_0x1f4 = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(this_ptr_00,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,48000);
    if (iVar3 != 0) {
      core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
    }
    g_CGamePtr->field62_0x1f4 = iVar4;
    iVar4 = 0;
    pCVar5 = this_ptr;
    do {
      ppcVar1 = apcStack_70 + iVar4;
      iVar4 = iVar4 + 1;
      (pCVar5->base_hero).base_character.model.part_visibility_flags[0] = (int)*ppcVar1;
      pCVar5 = (CSvetlana *)((pCVar5->base_hero).base_character.base_actor.actor_name + 4);
    } while (iVar4 < 0x1e);
  }
  g_CDemonSetPtr->field40_0x15ae84 = 0;
  if (iVar3 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    apcStack_70[0] = (char *)0x0;
    core_cloth_cpp_FUN_0043bae0();
    apcStack_70[1] = (char *)0x0;
    apcStack_70[0] = this_ptr->field1_0x1fbd4 + 0x3fe78;
    core_cloth_cpp_FUN_0043bae0();
    apcStack_70[1] = (char *)0x5d9d18;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    return iVar3;
  }
  return 0;
}
