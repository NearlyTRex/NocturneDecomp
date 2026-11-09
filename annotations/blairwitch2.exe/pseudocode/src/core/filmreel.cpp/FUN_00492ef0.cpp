// Name: core_filmreel.cpp_FUN_00492ef0
// Address: 00492ef0
// Address Range: [[00492ef0, 00492fe6]]
// Convention: unknown
// Signature: int core_filmreel_cpp_FUN_00492ef0(CDemonActor *param_1)

#include "nocturne.h"

int core_filmreel_cpp_FUN_00492ef0(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_58 [6];
  uint auStack_40 [6];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = auStack_58;
  puVar3 = auStack_40;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(auStack_40);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 0;
  }
  CStack_1c._0_4_ = 0;
  CStack_1c._8_4_ = *(uint *)&param_1[1].field_0x280;
  CStack_1c._4_4_ = 0;
  CStack_28._0_4_ = 0;
  CStack_28._8_4_ = 0;
  CStack_28._4_4_ = 0x40000000;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&DAT_0265370c,&CStack_28);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&CStack_1c,(CVector3f *)&DAT_0265370c);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)&param_1[1].field_0x9c,0.0,-1);
  engine_matrix_c_pop_FUN_0046b4a0();
  engine_matrix_c_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return iVar1;
}
