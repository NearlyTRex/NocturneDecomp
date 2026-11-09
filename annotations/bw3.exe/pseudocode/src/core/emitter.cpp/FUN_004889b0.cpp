// Name: core_emitter.cpp_FUN_004889b0
// Address: 004889b0
// Address Range: [[004889b0, 00488ab2]]
// Convention: unknown
// Signature: undefined4 core_emitter_cpp_FUN_004889b0(CDemonActor *param_1)

#include "nocturne.h"

uint core_emitter_cpp_FUN_004889b0(CDemonActor *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_101c [972];
  uint uVar5;
  byte *puVar6;
  uint uStack_94;
  uint auStack_88 [2];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_34;
  uint auStack_30 [6];
  uint auStack_18 [2];
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (((iVar1 == 0) && (*(int *)(param_1 + 1) == 3)) && (*(int *)&param_1[1].field_0x10 != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    uStack_94 = 0x488a05;
    core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
    core_fire_cpp_SLaserInfo_ctor_FUN_004a2de0((SLaserInfo *)auStack_88);
    uStack_80 = *(uint *)&param_1[1].field_0xe0;
    uStack_7c = *(uint *)&param_1[1].field_0xe4;
    uStack_78 = *(uint *)&param_1[1].field_0xe8;
    uStack_74 = *(uint *)&param_1[1].field_0xec;
    auStack_88[0] = 0x3f800000;
    uStack_70 = 0;
    uStack_6c = 0;
    puVar2 = auStack_88;
    puVar3 = (uint *)&stack0xffffff20;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    auStack_30[4] = 0x42c80000;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    core_actor_cpp_FUN_00408b00(param_1,auStack_30 + 2);
    puVar2 = auStack_30 + 5;
    puVar6 = &param_1->field_0x20;
    auStack_30[5] = uStack_34;
    auStack_18[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2];
    uVar5 = 0x01C73654;
    auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_fire_cpp_FUN_004a2e20(uVar5,puVar6,puVar2);
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    return 1;
  }
  return 0;
}
