// Name: core_trash.cpp_FUN_00577480
// Address: 00577480
// Address Range: [[00577480, 0057755a]]
// Convention: unknown
// Signature: int core_trash_cpp_FUN_00577480(CDemonActor *param_1)

#include "nocturne.h"

int core_trash_cpp_FUN_00577480(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_1010 [1000];
  CVector3f *translation;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
  puVar2 = (uint *)&stack0xffffff9c;
  puVar3 = (uint *)&stack0xffffffb4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = core_box_cpp_FUN_0041a840(&stack0xffffffb4);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return 0;
  }
  uStack_30 = *(uint *)&param_1[1].field_0x1b8;
  uStack_34 = 0;
  uStack_2c = 0;
  core_actor_cpp_FUN_00408d30(param_1,&stack0xffffffcc);
  translation = &CStack_1c;
  CStack_1c._0_4_ = CStack_28._0_4_;
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&DAT_0265370c,translation);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)(param_1 + 1),0.0,-1);
  engine_matrix_c_pop_FUN_0046b4a0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
  return iVar1;
}
