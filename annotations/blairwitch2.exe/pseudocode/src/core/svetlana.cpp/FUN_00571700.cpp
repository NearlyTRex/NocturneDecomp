// Name: core_svetlana.cpp_FUN_00571700
// Address: 00571700
// Address Range: [[00571700, 00571863]]
// Convention: unknown
// Signature: int core_svetlana_cpp_FUN_00571700(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_svetlana_cpp_FUN_00571700(CDemonActor *param_1)

{
  uint *puVar1;
  uint uVar2;
  CDemonActor *pCVar3;
  CDemonRenderer *this_ptr;
  int iVar4;
  int iVar5;
  CDemonActor *pCVar6;
  uint auStack_84 [30];
  byte *puVar7;
  
  *(uint *)&g_CDemonSetPtr->field_0x15ae98 = 1;
  iVar5 = 0;
  pCVar6 = param_1;
  do {
    iVar4 = iVar5 + 1;
    pCVar3 = pCVar6 + 0xd;
    pCVar6 = (CDemonActor *)&pCVar6->field_0x4;
    auStack_84[iVar5] = *(uint *)&pCVar3->field_0xd0;
    iVar5 = iVar4;
  } while (iVar4 < 0x1e);
  iVar5 = core_charactr_cpp_FUN_004254b0();
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar4 == 0) && (_DAT_01c38aec < 0x4000)) {
    pCVar6 = param_1;
    do {
      puVar7 = &pCVar6->field_0x4;
      *(uint *)&pCVar6[0xd].field_0xd0 = 0;
      pCVar6 = (CDemonActor *)puVar7;
    } while (puVar7 != &param_1->field_0x78);
    *(uint *)(&param_1[0xd].field_0xd0 + *(int *)&param_1[0x394].field_0xac * 4) = 1;
    this_ptr = DAT_0060b280;
    *(uint *)(&param_1[0xd].field_0xd0 + *(int *)&param_1[0x394].field_0xb0 * 4) = 1;
    uVar2 = *(uint *)&g_CGamePtr->field_0x210;
    *(uint *)&g_CGamePtr->field_0x210 = 2;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,48000);
    if (iVar5 != 0) {
      core_charactr_cpp_FUN_004254b0(param_1);
    }
    *(uint *)&g_CGamePtr->field_0x210 = uVar2;
    iVar4 = 0;
    pCVar6 = param_1;
    do {
      puVar1 = auStack_84 + iVar4;
      iVar4 = iVar4 + 1;
      *(uint *)&pCVar6[0xd].field_0xd0 = *puVar1;
      pCVar6 = (CDemonActor *)&pCVar6->field_0x4;
    } while (iVar4 < 0x1e);
  }
  *(uint *)&g_CDemonSetPtr->field_0x15ae98 = 0;
  if (iVar5 != 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&param_1[0xdd].field_0xe4,(CDeformableModelInstance *)0x0);
    core_cloth_cpp_CCloth_render_FUN_005b0fe0
              ((CCloth *)&param_1[0x238].field_0x218,(CDeformableModelInstance *)0x0);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return iVar5;
  }
  return 0;
}
