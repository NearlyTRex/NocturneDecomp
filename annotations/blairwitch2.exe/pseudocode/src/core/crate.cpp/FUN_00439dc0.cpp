// Name: core_crate.cpp_FUN_00439dc0
// Address: 00439dc0
// Address Range: [[00439dc0, 00439e9c]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_00439dc0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_crate_cpp_FUN_00439dc0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CBoundingBox3D *in_stack_ffffffbc;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  uint auStack_24 [6];
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,in_stack_ffffffbc);
  puVar4 = auStack_24;
  puVar5 = (uint *)&stack0xffffffbc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = (fStack_30 - fStack_3c) * (float)_DAT_005ce1cb;
  fVar2 = (fStack_28 - fStack_34) * (float)_DAT_005ce1cb;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  param_1[1].particle_systems[0].fade_duration = fVar2;
  param_1[1].particle_systems[0].stop_after_fade = -0x39e3c066;
  param_1[1].particle_systems[0].standalone = -0x39e3c066;
  param_1[1].particle_systems[0].particles = (void *)0xc61c3f9a;
  param_1[1].particle_systems[0].vtable = (void *)0xc61c3f9a;
  param_1[1].particle_systems[1].position.y = -9999.9;
  param_1[1].particle_systems[1].position.x = -9999.9;
  param_1[1].particle_systems[1].position.z = 9999.9;
  param_1[1].particle_systems[0].fade_end = 0.0;
  return;
}
