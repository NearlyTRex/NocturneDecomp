// Name: core_grave.cpp_FUN_004ca290
// Address: 004ca290
// Address Range: [[004ca290, 004ca334]]
// Convention: unknown
// Signature: int core_grave_cpp_FUN_004ca290(CDemonActor *param_1)

#include "nocturne.h"

int core_grave_cpp_FUN_004ca290(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((*(int *)&param_1[1].field_0x184 == 0) &&
     (((*(int *)(0x01D182F0 + 0x1008) != 0 || (*(int *)&param_1[1].field_0x18c == 0)) ||
      (*(int *)&param_1[1].field_0x188 != 0)))) {
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
    if (iVar1 != 0) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)(param_1 + 1),*(float *)&param_1[1].field_0x17c,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(param_1);
    return iVar1;
  }
  return 0;
}
