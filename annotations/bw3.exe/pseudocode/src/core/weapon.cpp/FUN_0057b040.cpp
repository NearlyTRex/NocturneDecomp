// Name: core_weapon.cpp_FUN_0057b040
// Address: 0057b040
// Address Range: [[0057b040, 0057b117]]
// Convention: unknown
// Signature: int core_weapon_cpp_FUN_0057b040(CDemonActor *param_1)

#include "nocturne.h"

int core_weapon_cpp_FUN_0057b040(CDemonActor *param_1)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar5 = 0;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar3 = auStack_40;
  puVar4 = auStack_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(auStack_28);
  if (*(int *)&param_1[4].field_0x28 == 0x10000) {
    core_actor_cpp_FUN_004087d0(param_1);
  }
  else {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (DAT_005f2afc,*(int *)&param_1[4].field_0x28);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                ((CKeyFramedModelInstance *)(param_1 + 1),0.0,0x267);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    this_ptr = DAT_005f2afc;
    *(uint *)&param_1[4].field_0x24 = 0;
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(this_ptr);
    if ((iVar1 == 0) && (iVar2 != 0)) {
      *(uint *)&param_1[4].field_0x24 = 1;
      return iVar2;
    }
  }
  return iVar2;
}
