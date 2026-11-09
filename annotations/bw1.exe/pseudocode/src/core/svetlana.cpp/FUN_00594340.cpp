// Name: core_svetlana.cpp_FUN_00594340
// Address: 00594340
// Address Range: [[00594340, 005944b9]]
// Convention: unknown
// Signature: int core_svetlana_cpp_FUN_00594340(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_svetlana_cpp_FUN_00594340(CCharacter *param_1)

{
  uint *puVar1;
  uint uVar2;
  CDemonRenderer *this_ptr;
  int iVar3;
  int iVar4;
  CCharacter *pCVar5;
  uint auStack_fc [60];
  byte *puVar6;
  
  *(uint *)&g_CDemonSetPtr->field_0x15ae98 = 1;
  iVar4 = 0;
  pCVar5 = param_1;
  do {
    iVar3 = iVar4 + 1;
    puVar6 = &pCVar5->field_0x2298;
    pCVar5 = (CCharacter *)&pCVar5->field_0x4;
    auStack_fc[iVar4] = *(uint *)puVar6;
    iVar4 = iVar3;
  } while (iVar3 < 0x3c);
  iVar4 = core_charactr_cpp_FUN_0042f240(param_1);
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar3 == 0) && (_DAT_01c51cac < 0x4000)) {
    pCVar5 = param_1;
    do {
      puVar6 = &pCVar5->field_0x4;
      *(uint *)&pCVar5->field_0x2298 = 0;
      pCVar5 = (CCharacter *)puVar6;
    } while (puVar6 != &param_1->field_0xf0);
    *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[0xc].field_0x4068 * 4) = 1;
    this_ptr = DAT_00612560;
    *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[0xc].field_0x406c * 4) = 1;
    uVar2 = *(uint *)&g_CGamePtr->field_0x210;
    *(uint *)&g_CGamePtr->field_0x210 = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(this_ptr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,48000);
    if (iVar4 != 0) {
      core_charactr_cpp_FUN_0042f240(param_1);
    }
    *(uint *)&g_CGamePtr->field_0x210 = uVar2;
    iVar3 = 0;
    pCVar5 = param_1;
    do {
      puVar1 = auStack_fc + iVar3;
      iVar3 = iVar3 + 1;
      *(uint *)&pCVar5->field_0x2298 = *puVar1;
      pCVar5 = (CCharacter *)&pCVar5->field_0x4;
    } while (iVar3 < 0x3c);
  }
  *(uint *)&g_CDemonSetPtr->field_0x15ae98 = 0;
  if (iVar4 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
    core_cloth_cpp_CCloth_render_FUN_00441800
              ((CCloth *)&param_1[2].field_0x7c14,(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_00441800
              ((CCloth *)&param_1[7].field_0x5e34,(CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    return iVar4;
  }
  return 0;
}
