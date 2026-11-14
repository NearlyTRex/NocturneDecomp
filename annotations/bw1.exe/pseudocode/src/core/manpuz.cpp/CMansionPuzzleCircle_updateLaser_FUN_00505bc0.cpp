// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0
// Address: 00505bc0
// Address Range: [[00505bc0, 00505eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  SLaserInfo laser_info;
  bool bVar1;
  int iVar2;
  SLaserInfo *pSVar3;
  int unaff_EDI;
  float *pfVar4;
  byte bVar5;
  float afStackY_107c [30];
  SPanel *apSStackY_1004 [940];
  byte auVar6 [12];
  byte auVar7 [12];
  byte auVar8 [12];
  byte in_stack_fffffeb8 [68];
  byte auVar9 [12];
  uint in_stack_fffffefc;
  CMansionPuzzleCircle *in_stack_ffffff00;
  uint uVar10;
  float fVar11;
  int recursion_depth;
  SLaserInfo SStack_e8;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [5];
  CVector3f CStack_34;
  uint uStack_28;
  float afStack_24 [4];
  SPanel *pSStack_14;
  
  bVar5 = 0;
  pSStack_14 = this_ptr->panels + panel_index;
  bVar1 = false;
  if (pSStack_14->exists == 0) {
    in_stack_fffffefc = 0x505e5f;
    in_stack_ffffff00 = this_ptr;
    iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,panel_index);
    bVar1 = true;
    if ((this_ptr->panels[iVar2].exists == 0) || (this_ptr->panels[iVar2].anim_speed <= 0.0))
    goto LAB_00505c02;
  }
  else {
LAB_00505c02:
    if (bVar1) {
      fVar11 = (float)this_ptr->laser_intensity[panel_index] + delta_time;
      goto LAB_00505c17;
    }
  }
  fVar11 = (float)this_ptr->laser_intensity[panel_index] - delta_time;
LAB_00505c17:
  this_ptr->laser_intensity[panel_index] = (int)fVar11;
  if (0.0 < (float)this_ptr->laser_intensity[panel_index]) {
    if (1.0 < (float)this_ptr->laser_intensity[panel_index]) {
      this_ptr->laser_intensity[panel_index] = 0x3f800000;
    }
    core_dirmat_cpp_FUN_0045f690();
    afStack_6c[2] = fStack_94;
    afStack_6c[(uint)bVar5 * -2 + 3] = afStack_90[(uint)bVar5 * -2];
    afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_90[2] = *(float *)(unaff_EDI + 0xc) + afStack_6c[2];
    afStack_90[3] = *(float *)(unaff_EDI + 0x10) + afStack_6c[3];
    fStack_80 = *(float *)(unaff_EDI + 0x14) + fStack_5c;
    fStack_4c = afStack_90[2];
    afStack_48[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2 + 3];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_actor_cpp_FUN_00408b40();
    uStack_58 = 0;
    CStack_7c.x = fStack_70;
    *(float *)((int)&CStack_7c + (uint)bVar5 * -8 + 4) = afStack_6c[(uint)bVar5 * -2];
    *(float *)((int)&CStack_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_6c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    fStack_54 = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).f.y) * _DAT_005e7541;
    fStack_50 = -(this_ptr->panel_radius * _DAT_005e753d + (this_ptr->emitter_pos).f.z +
                 (this_ptr->gem_pos).z) * _DAT_005e7541;
    core_dirmat_cpp_FUN_0045f690();
    afStack_48[2] = (float)uStack_28;
    afStack_48[(uint)bVar5 * -2 + 3] = afStack_24[(uint)bVar5 * -2];
    afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    uVar10 = 0x505d9a;
    core_actor_cpp_FUN_00408ac0();
    CStack_34.x = afStack_24[2];
    *(float *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) = afStack_24[(uint)bVar5 * -2 + 3];
    *(SPanel **)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         (&pSStack_14)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    fVar11 = 7.380471e-39;
    core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(&SStack_e8);
    SStack_e8.laser_type = 2;
    SStack_e8.beam_width = 0.08;
    SStack_e8.color.r = this_ptr->laser_color_r[panel_index];
    SStack_e8.color.g = this_ptr->laser_color_g[panel_index];
    SStack_e8.color.b = this_ptr->laser_color_b[panel_index];
    recursion_depth = 0;
    SStack_e8.intensity = (float)this_ptr->laser_intensity[panel_index];
    SStack_e8.is_hero_weapon = 0;
    SStack_e8.is_damaging = 0;
    pSVar3 = &SStack_e8;
    pfVar4 = (float *)&stack0xfffffeb8;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = pSVar3->intensity;
      pSVar3 = (SLaserInfo *)((int)pSVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    laser_info.incidence_angle = (float)in_stack_fffffefc;
    auVar6 = in_stack_fffffeb8._12_12_;
    auVar7 = in_stack_fffffeb8._32_12_;
    auVar8 = in_stack_fffffeb8._44_12_;
    auVar9 = in_stack_fffffeb8._56_12_;
    laser_info.intensity = (float)in_stack_fffffeb8._0_4_;
    laser_info.beam_width = (float)in_stack_fffffeb8._4_4_;
    laser_info.laser_type = in_stack_fffffeb8._8_4_;
    laser_info.color.r = auVar6._0_4_;
    laser_info.color.g = auVar6._4_4_;
    laser_info.color.b = auVar6._8_4_;
    laser_info.is_hero_weapon = in_stack_fffffeb8._24_4_;
    laser_info.is_damaging = in_stack_fffffeb8._28_4_;
    laser_info.local_origin.x = (float)auVar7._0_4_;
    laser_info.local_origin.y = (float)auVar7._4_4_;
    laser_info.local_origin.z = (float)auVar7._8_4_;
    laser_info.local_hit_position.x = (float)auVar8._0_4_;
    laser_info.local_hit_position.y = (float)auVar8._4_4_;
    laser_info.local_hit_position.z = (float)auVar8._8_4_;
    laser_info.local_normal.x = (float)auVar9._0_4_;
    laser_info.local_normal.y = (float)auVar9._4_4_;
    laser_info.local_normal.z = (float)auVar9._8_4_;
    laser_info.reflectivity = (float)in_stack_ffffff00;
    laser_info.stored_angle = (float)uVar10;
    laser_info.transparency = fVar11;
    core_fire_cpp_CFireEffect_traceLaser_FUN_004b6420
              (0x01C57074,&CStack_7c,&CStack_34,laser_info,recursion_depth);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return;
  }
  this_ptr->laser_intensity[panel_index] = 0;
  return;
}
