// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0
// Address: 00505bc0
// Address Range: [[00505bc0, 00505eb4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  SLaserInfo *pSVar4;
  int unaff_EDI;
  float *pfVar5;
  byte bVar6;
  float afStackY_107c [970];
  uint uStack_104;
  SLaserInfo SStack_e8;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  float afStack_7c [3];
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float afStack_48 [5];
  uint auStack_34 [3];
  uint uStack_28;
  uint uStack_1c;
  SPanel *pSStack_14;
  
  bVar6 = 0;
  pSStack_14 = this_ptr->panels + panel_index;
  bVar2 = false;
  if (pSStack_14->exists == 0) {
    uStack_104 = 0x505e5f;
    iVar3 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
                      (this_ptr,panel_index);
    bVar2 = true;
    if ((this_ptr->panels[iVar3].exists == 0) || (this_ptr->panels[iVar3].anim_speed <= 0.0))
    goto LAB_00505c02;
  }
  else {
LAB_00505c02:
    if (bVar2) {
      fVar1 = (float)this_ptr->laser_intensity[panel_index] + delta_time;
      goto LAB_00505c17;
    }
  }
  fVar1 = (float)this_ptr->laser_intensity[panel_index] - delta_time;
LAB_00505c17:
  this_ptr->laser_intensity[panel_index] = (int)fVar1;
  if (0.0 < (float)this_ptr->laser_intensity[panel_index]) {
    if (1.0 < (float)this_ptr->laser_intensity[panel_index]) {
      this_ptr->laser_intensity[panel_index] = 0x3f800000;
    }
    core_dirmat_cpp_FUN_0045f690();
    fStack_64 = fStack_94;
    afStack_90[(uint)bVar6 * -2 + 0xc] = afStack_90[(uint)bVar6 * -2];
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    afStack_90[2] = *(float *)(unaff_EDI + 0xc) + fStack_64;
    afStack_90[3] = *(float *)(unaff_EDI + 0x10) + fStack_60;
    fStack_80 = *(float *)(unaff_EDI + 0x14) + fStack_5c;
    fStack_4c = afStack_90[2];
    afStack_48[(uint)bVar6 * -2] = afStack_90[(uint)bVar6 * -2 + 3];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_actor_cpp_FUN_00408b40();
    uStack_58 = 0;
    afStack_7c[0] = (float)uStack_70;
    afStack_90[(uint)bVar6 * -2 + 6] = afStack_90[(uint)bVar6 * -2 + 9];
    afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    fStack_54 = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).f.y) * _DAT_005e7541;
    fStack_50 = -(this_ptr->panel_radius * _DAT_005e753d + (this_ptr->emitter_pos).f.z +
                 (this_ptr->gem_pos).z) * _DAT_005e7541;
    core_dirmat_cpp_FUN_0045f690();
    afStack_48[2] = (float)uStack_28;
    afStack_48[(uint)bVar6 * -2 + 3] = afStack_48[(uint)bVar6 * -2 + 9];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_actor_cpp_FUN_00408ac0();
    auStack_34[0] = uStack_1c;
    afStack_48[(uint)bVar6 * -2 + 6] = afStack_48[(uint)bVar6 * -2 + 0xc];
    afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_48[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004b63e0(&SStack_e8);
    SStack_e8.laser_type = 2;
    SStack_e8.beam_width = 0.08;
    SStack_e8.color.r = this_ptr->laser_color_r[panel_index];
    SStack_e8.color.g = this_ptr->laser_color_g[panel_index];
    SStack_e8.color.b = this_ptr->laser_color_b[panel_index];
    SStack_e8.intensity = (float)this_ptr->laser_intensity[panel_index];
    SStack_e8.is_hero_weapon = 0;
    SStack_e8.is_damaging = 0;
    pSVar4 = &SStack_e8;
    pfVar5 = (float *)&stack0xfffffeb8;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pSVar4->intensity;
      pSVar4 = (SLaserInfo *)((int)pSVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    core_fire_cpp_FUN_004b6420(0x01C57074,afStack_90 + 5,afStack_48 + 5);
    core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
    return;
  }
  this_ptr->laser_intensity[panel_index] = 0;
  return;
}
