// Name: core_litecone.cpp_FUN_004e40d0
// Address: 004e40d0
// Address Range: [[004e40d0, 004e416a]]
// Convention: unknown
// Signature: int core_litecone_cpp_FUN_004e40d0(CDemonActor *param_1)

#include "nocturne.h"

int core_litecone_cpp_FUN_004e40d0(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1[1].field_0x8 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar2 = auStack_34;
      puVar3 = auStack_1c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_0041daf0(auStack_1c);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      if (iVar1 != 0) {
        core_dlight_cpp_FUN_0045f5a0
                  ((CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
                   *(float *)(param_1 + 1),*(float *)&param_1[1].field_0x4);
      }
      return iVar1;
    }
  }
  return 0;
}
