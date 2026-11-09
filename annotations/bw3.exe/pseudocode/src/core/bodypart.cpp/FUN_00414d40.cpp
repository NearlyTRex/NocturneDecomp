// Name: core_bodypart.cpp_FUN_00414d40
// Address: 00414d40
// Address Range: [[00414d40, 00414e89]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00414d40(CBodyPart *param_1,int param_2)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00414d40(CBodyPart *param_1,int param_2)

{
  CConsole *pCVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar6 = 0;
  if (*(int *)&param_1->field_0xcc8 == 0) {
    if (*(int *)&param_1->field_0x158 == 0) {
      if ((((param_2 != 0) && (*(int *)&param_1->field_0xf2c == 0)) &&
          (*(int *)&param_1->field_0xf24 == 0)) &&
         (iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x74))(param_1),
         pCVar1 = g_CConsolePtr, iVar3 == 0)) {
        *(uint *)&param_1->field_0x158 = 1;
        engine_console_cpp_FUN_00441ff0(pCVar1,"%s going into background\n",param_1);
      }
      if (*(int *)&param_1->field_0x158 == 0) {
        return;
      }
    }
    if ((*(int *)&param_1->field_0x158 != 1) || (*(int *)&param_1->field_0xf24 == 0)) {
      *(uint *)&param_1->field_0x158 = 2;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)param_1);
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = *(uint *)&param_1->field_0xcb0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar4 = auStack_20;
      puVar5 = auStack_38;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_0041daf0(auStack_38);
      if ((iVar3 != 0) &&
         ((*(int *)&param_1->field_0xcb4 == 0 ||
          (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc),
          iVar2 != 0)))) {
        core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00414a60(param_1,-1);
      }
      engine_matrix_c_pop_FUN_0046d080();
      *(uint *)&g_CDemonSetPtr->field_0x15ac98 = 0;
      *(int *)&param_1->field_0xf30 = iVar3;
    }
  }
  return;
}
