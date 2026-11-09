// Name: core_litecone.cpp_FUN_004e42a0
// Address: 004e42a0
// Address Range: [[004e42a0, 004e433a]]
// Convention: unknown
// Signature: int core_litecone_cpp_FUN_004e42a0(CDemonActor *param_1)

#include "nocturne.h"

int core_litecone_cpp_FUN_004e42a0(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)&param_1[1].field_0x8 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
      puVar2 = auStack_34;
      puVar3 = auStack_1c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iVar1 = core_box_cpp_FUN_0041a840(auStack_1c);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
      if (iVar1 != 0) {
        core_dlight_cpp_FUN_0044d060
                  ((CVector3f *)&param_1->field_0x20,(CVector3f *)&param_1->field_0x30,
                   *(float *)(param_1 + 1),*(float *)&param_1[1].field_0x4);
      }
      return iVar1;
    }
  }
  return 0;
}
