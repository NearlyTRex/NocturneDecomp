// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 0049fef2]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_0049fdf0(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_0049fdf0(CEmitter *this_ptr)

{
  int iVar1;
  SLaserInfo *pSVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_101c [972];
  uint uVar5;
  CLocation *pCVar6;
  uint *puVar7;
  uint uStack_94;
  SLaserInfo SStack_88;
  uint uStack_34;
  uint auStack_30 [6];
  uint auStack_18 [2];
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (((iVar1 == 0) && (this_ptr->emitter_type == EMITTER_TYPE_LASER)) &&
     (this_ptr->emitter_state != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    uStack_94 = 0x49fe45;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,&this_ptr->base);
    core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(&SStack_88);
    SStack_88.laser_type = this_ptr->laser_type;
    SStack_88.color.r = (this_ptr->laser_color).r;
    SStack_88.color.g = (this_ptr->laser_color).g;
    SStack_88.color.b = (this_ptr->laser_color).b;
    SStack_88.intensity = 1.0;
    SStack_88.is_hero_weapon = 0;
    SStack_88.is_damaging = 0;
    pSVar2 = &SStack_88;
    pfVar3 = (float *)&stack0xffffff20;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = pSVar2->intensity;
      pSVar2 = (SLaserInfo *)((int)pSVar2 + ((uint)bVar4 * -2 + 1) * 4);
      pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    }
    auStack_30[4] = 0x42c80000;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    core_actor_cpp_FUN_00408ac0(this_ptr,auStack_30 + 2);
    puVar7 = auStack_30 + 5;
    pCVar6 = &(this_ptr->base).location;
    auStack_30[5] = uStack_34;
    auStack_18[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2];
    uVar5 = 0x01C57074;
    auStack_18[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    core_fire_cpp_FUN_004b6420(uVar5,pCVar6,puVar7);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return 1;
  }
  return 0;
}
