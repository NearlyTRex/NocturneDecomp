// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_00487790
// Address: 00487790
// Address Range: [[00487790, 00487892]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_00487790(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_00487790(CEmitter *this_ptr)

{
  SLaserInfo laser_info;
  int iVar1;
  SLaserInfo *pSVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_101c [972];
  CFireEffect *this_ptr_00;
  CVector3f *origin;
  CVector3f *direction;
  byte auVar5 [12];
  byte auVar6 [12];
  byte auVar7 [12];
  byte auVar8 [12];
  byte in_stack_ffffff20 [76];
  uint uVar9;
  float fVar10;
  int recursion_depth;
  SLaserInfo SStack_88;
  float fStack_34;
  float afStack_30 [5];
  CVector3f CStack_1c;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (((iVar1 == 0) && (this_ptr->emitter_type == EMITTER_TYPE_LASER)) &&
     (this_ptr->emitter_state != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    uVar9 = 0x4877e5;
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,&this_ptr->base);
    fVar10 = 6.655183e-39;
    core_fire_cpp_SLaserInfo_ctor_FUN_0049dae0(&SStack_88);
    SStack_88.laser_type = this_ptr->laser_type;
    SStack_88.color.r = (this_ptr->laser_color).r;
    recursion_depth = 0;
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
    afStack_30[4] = 100.0;
    afStack_30[2] = 0.0;
    afStack_30[3] = 0.0;
    core_actor_cpp_FUN_00408cf0(this_ptr,afStack_30 + 2);
    direction = &CStack_1c;
    origin = &(this_ptr->base).location.position;
    CStack_1c.x = fStack_34;
    *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2];
    this_ptr_00 = 0x01C3DEB4;
    *(float *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    laser_info.stored_angle = (float)uVar9;
    auVar5 = in_stack_ffffff20._12_12_;
    auVar6 = in_stack_ffffff20._32_12_;
    auVar7 = in_stack_ffffff20._44_12_;
    auVar8 = in_stack_ffffff20._56_12_;
    laser_info.intensity = (float)in_stack_ffffff20._0_4_;
    laser_info.beam_width = (float)in_stack_ffffff20._4_4_;
    laser_info.laser_type = in_stack_ffffff20._8_4_;
    laser_info.color.r = auVar5._0_4_;
    laser_info.color.g = auVar5._4_4_;
    laser_info.color.b = auVar5._8_4_;
    laser_info.is_hero_weapon = in_stack_ffffff20._24_4_;
    laser_info.is_damaging = in_stack_ffffff20._28_4_;
    laser_info.local_origin.x = (float)auVar6._0_4_;
    laser_info.local_origin.y = (float)auVar6._4_4_;
    laser_info.local_origin.z = (float)auVar6._8_4_;
    laser_info.local_hit_position.x = (float)auVar7._0_4_;
    laser_info.local_hit_position.y = (float)auVar7._4_4_;
    laser_info.local_hit_position.z = (float)auVar7._8_4_;
    laser_info.local_normal.x = (float)auVar8._0_4_;
    laser_info.local_normal.y = (float)auVar8._4_4_;
    laser_info.local_normal.z = (float)auVar8._8_4_;
    laser_info.incidence_angle = (float)in_stack_ffffff20._68_4_;
    laser_info.reflectivity = (float)in_stack_ffffff20._72_4_;
    laser_info.transparency = fVar10;
    core_fire_cpp_CFireEffect_traceLaser_FUN_0049db20
              (this_ptr_00,origin,direction,laser_info,recursion_depth);
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    return 1;
  }
  return 0;
}
