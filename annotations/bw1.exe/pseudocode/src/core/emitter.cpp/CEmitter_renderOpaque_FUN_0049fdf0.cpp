// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 0049fef2]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_0049fdf0(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_0049fdf0(CEmitter *this_ptr)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (((iVar1 == 0) && (*(int *)&this_ptr->field_0x158 == 3)) &&
     (*(int *)&this_ptr->field_0x168 != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    uStack_94 = 0x49fe45;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0((SLaserInfo *)auStack_88);
    uStack_80 = *(uint *)&this_ptr->field_0x238;
    uStack_7c = *(uint *)&this_ptr->field_0x23c;
    uStack_78 = *(uint *)&this_ptr->field_0x240;
    uStack_74 = *(uint *)&this_ptr->field_0x244;
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
    core_actor_cpp_FUN_00408ac0(this_ptr,auStack_30 + 2);
    puVar2 = auStack_30 + 5;
    puVar6 = &this_ptr->field_0x20;
    auStack_30[5] = uStack_34;
    auStack_18[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2];
    uVar5 = 0x01C57074;
    auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_fire_cpp_FUN_004b6420(uVar5,puVar6,puVar2);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 1;
  }
  return 0;
}
