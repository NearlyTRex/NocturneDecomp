// Name: core_werewolf.cpp_FUN_005b11c0
// Address: 005b11c0
// Address Range: [[005b11c0, 005b1329]]
// Convention: unknown
// Signature: undefined4 core_werewolf_cpp_FUN_005b11c0(CWerewolf *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_werewolf_cpp_FUN_005b11c0(CWerewolf *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1020 [1001];
  CVector3f *translation;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  bVar5 = 0;
  if ((*(int *)&param_1->field_0x27bc == 0) || (*(int *)&param_1->field_0xc1d4 != 0)) {
    return 0;
  }
  if (1.0 < *(float *)&param_1->field_0xc2ac) {
    *(float *)&param_1->field_0xc2ac = *(float *)&param_1->field_0xc2ac + _DAT_005f9b2e;
  }
  if (*(float *)&param_1->field_0xc2ac <= (float)_DAT_005f9b32) {
    if (*(int *)&param_1->field_0x27bc != 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)param_1);
      puVar3 = (uint *)(&param_1->field_0xfd8 + *(int *)&param_1->field_0xc27c * 0x30);
      puVar4 = (uint *)&stack0xffffff98;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_FUN_005b5930(&stack0xffffff98);
      CStack_2c._0_4_ = CStack_20._0_4_;
      *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      core_xform_cpp_FUN_005b6270(&stack0xffffff98);
      translation = &CStack_38;
      CStack_38._0_4_ = CStack_14._0_4_;
      *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           *(uint *)((int)&CStack_14 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,(CVector3f *)&DAT_02c8af28,translation);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                (DAT_00612560,&CStack_2c,(CVector3f *)0x0);
      core_werewolf_cpp_FUN_005b0c00(param_1,(CVector3f *)&DAT_02c9a544);
      core_werewolf_cpp_FUN_005b0c00(param_1,(CVector3f *)&DAT_02c9a550);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)param_1);
    }
    core_charactr_cpp_FUN_004301e0(param_1);
    return *(uint *)&param_1->field_0x27bc;
  }
  uVar1 = core_charactr_cpp_FUN_004301e0(param_1);
  return uVar1;
}
