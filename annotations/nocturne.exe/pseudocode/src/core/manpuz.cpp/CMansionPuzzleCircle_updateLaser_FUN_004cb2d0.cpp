// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0
// Address: 004cb2d0
// Address Range: [[004cb2d0, 004cb595]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  SPanel *pSVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int local_114 [4];
  int local_104;
  int local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0 [4];
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  byte local_6c [12];
  uint local_60;
  float local_5c;
  float local_58;
  byte local_54 [12];
  CVector3f local_48;
  CVector3f local_3c;
  byte local_30 [12];
  double local_24;
  CMatrix3x3f *local_1c;
  SPanel *local_18;
  int local_14;
  
  local_18 = this_ptr->panels;
  pSVar1 = local_18 + panel_index;
  local_14 = 0;
  if (pSVar1->exists == 0) {
    local_14 = 1;
    iVar4 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0
                      (this_ptr,panel_index);
    if ((local_18[iVar4].exists == 0) || (local_18[iVar4].anim_speed <= 0.0)) goto LAB_004cb317;
  }
  else {
LAB_004cb317:
    if (local_14 != 0) {
      fVar2 = (float)this_ptr->laser_intensity[panel_index] + delta_time;
      goto LAB_004cb32e;
    }
  }
  fVar2 = (float)this_ptr->laser_intensity[panel_index] - delta_time;
LAB_004cb32e:
  this_ptr->laser_intensity[panel_index] = (int)fVar2;
  local_24 = (double)(float)this_ptr->laser_intensity[panel_index];
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      this_ptr->laser_intensity[panel_index] = 0x3f800000;
    }
    local_1c = &pSVar1->rotation_matrix;
    pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (local_1c,local_6c,&this_ptr->emitter_pos);
    local_48.x = (pSVar1->local_position).x + *pfVar3;
    local_48.y = (pSVar1->local_position).y + pfVar3[1];
    local_48.z = (pSVar1->local_position).z + pfVar3[2];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&local_3c,&local_48);
    local_60 = 0;
    local_5c = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).f.y) * 4.0f;
    local_58 = -(this_ptr->panel_radius * 2.0f + (this_ptr->emitter_pos).f.z +
                (this_ptr->gem_pos).z) * 4.0f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(local_1c,local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,local_54,local_30);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(local_114);
    local_114[1] = 0x3da3d70a;
    local_114[2] = 2;
    local_114[3] = this_ptr->laser_color_r[panel_index];
    local_104 = this_ptr->laser_color_g[panel_index];
    local_100 = this_ptr->laser_color_b[panel_index];
    local_114[0] = this_ptr->laser_intensity[panel_index];
    local_fc = 0;
    local_f8 = 0;
    local_c0[1] = 0x3da3d70a;
    local_c0[2] = 2;
    local_a4 = 0;
    local_a0 = local_f4;
    local_a8 = 0;
    local_9c = local_f0;
    local_98 = local_ec;
    local_94 = local_e8;
    local_90 = local_e4;
    local_8c = local_e0;
    local_88 = local_dc;
    local_84 = local_d8;
    local_80 = local_d4;
    local_7c = local_d0;
    local_78 = local_cc;
    local_74 = local_c8;
    local_70 = local_c4;
    local_c0[0] = local_114[0];
    local_c0[3] = local_114[3];
    local_b0 = local_104;
    local_ac = local_100;
    core_fire_cpp_FUN_0048b6f0(0x01C08D04,&local_3c,local_54,local_c0,0);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return;
  }
  this_ptr->laser_intensity[panel_index] = 0;
  return;
}
