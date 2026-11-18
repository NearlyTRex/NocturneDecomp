// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0
// Address: 00505bc0
// Address Range: [[00505bc0, 00505eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  SLaserInfo laser_info;
  bool bVar1;
  int iVar2;
  SLaserInfo *pSVar3;
  int unaff_EDI;
  float *pfVar4;
  byte bVar5;
  float afStackY_107c [970];
  byte auVar6 [12];
  byte auVar7 [12];
  byte auVar8 [12];
  byte in_stack_fffffeb8 [68];
  byte auVar9 [12];
  uint in_stack_fffffefc;
  CMansionPuzzleCircle *in_stack_ffffff00;
  uint uVar10;
  float fVar11;
  CVector3f *pCVar12;
  int recursion_depth;
  SLaserInfo SStack_e8;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [2];
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  CStack_1c.z = (float)(this_ptr->panels + panel_index);
  bVar1 = false;
  if (((SPanel *)CStack_1c.z)->exists == 0) {
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
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(unaff_EDI + 0x24),&(this_ptr->emitter_pos).f,&CStack_94);
    fStack_64 = CStack_94.x;
    afStack_60[(uint)bVar5 * -2] = *(float *)((int)&CStack_94 + (uint)bVar5 * -8 + 4);
    afStack_60[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(float *)((int)&CStack_94 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    pCVar12 = &CStack_4c;
    fStack_88 = *(float *)(unaff_EDI + 0xc) + fStack_64;
    afStack_84[0] = *(float *)(unaff_EDI + 0x10) + afStack_60[0];
    afStack_84[1] = *(float *)(unaff_EDI + 0x14) + afStack_60[1];
    CStack_4c.x = fStack_88;
    *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + 4) = afStack_84[(uint)bVar5 * -2];
    *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_84[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(&this_ptr->base,pCVar12,&CStack_70);
    CStack_58.x = 0.0;
    CStack_7c.x = CStack_70.x;
    *(uint *)((int)&CStack_7c + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    CStack_58.y = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).f.y) * 4.0f;
    CStack_58.z = -(this_ptr->panel_radius * 2.0f + (this_ptr->emitter_pos).f.z +
                   (this_ptr->gem_pos).z) * 4.0f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(unaff_EDI + 0x24),&CStack_58,&CStack_28);
    pCVar12 = &CStack_40;
    CStack_40.x = CStack_28.x;
    *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    uVar10 = 0x505d9a;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408ac0(&this_ptr->base,pCVar12,&CStack_1c);
    CStack_34.x = CStack_1c.x;
    *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
              (g_CFireEffectPtr,&CStack_7c,&CStack_34,laser_info,recursion_depth);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return;
  }
  this_ptr->laser_intensity[panel_index] = 0;
  return;
}
