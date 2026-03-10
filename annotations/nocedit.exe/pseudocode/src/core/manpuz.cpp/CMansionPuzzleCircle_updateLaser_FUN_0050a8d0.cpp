// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_0050a8d0
// Address: 0050a8d0
// Address Range: [[0050a8d0, 0050ab95]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_0050a8d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_0050a8d0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)

{
  SPanel *pSVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  SLaserInfo local_114;
  SLaserInfo local_c0;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  double local_24;
  CMatrix3x3f *local_1c;
  SPanel *local_18;
  int local_14;
  
  local_18 = this_ptr->panels;
  pSVar1 = local_18 + panel_index;
  local_14 = 0;
  if (pSVar1->exists == 0) {
    local_14 = 1;
    iVar4 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_0050aef0
                      (this_ptr,panel_index);
    if ((local_18[iVar4].exists == 0) || (local_18[iVar4].anim_speed <= 0.0)) goto LAB_0050a917;
  }
  else {
LAB_0050a917:
    if (local_14 != 0) {
      fVar2 = (float)this_ptr->laser_intensity[panel_index] + delta_time;
      goto LAB_0050a92e;
    }
  }
  fVar2 = (float)this_ptr->laser_intensity[panel_index] - delta_time;
LAB_0050a92e:
  this_ptr->laser_intensity[panel_index] = (int)fVar2;
  local_24 = (double)(float)this_ptr->laser_intensity[panel_index];
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      this_ptr->laser_intensity[panel_index] = 0x3f800000;
    }
    local_1c = &pSVar1->rotation_matrix;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (local_1c,&local_6c,&(this_ptr->emitter_pos).f);
    local_48.x = (pSVar1->local_position).x + pCVar3->x;
    local_48.y = (pSVar1->local_position).y + pCVar3->y;
    local_48.z = (pSVar1->local_position).z + pCVar3->z;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&local_3c,&local_48);
    local_60.x = 0.0;
    local_60.y = ((this_ptr->gem_pos).y - (this_ptr->emitter_pos).f.y) * 4.0f;
    local_60.z = -(this_ptr->panel_radius * 2.0f + (this_ptr->emitter_pos).f.z +
                  (this_ptr->gem_pos).z) * 4.0f;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(local_1c,&local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_54,&local_30);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_114);
    local_114.beam_width = 0.08;
    local_114.laser_type = 2;
    local_114.color.r = this_ptr->laser_color_r[panel_index];
    local_114.color.g = this_ptr->laser_color_g[panel_index];
    local_114.color.b = this_ptr->laser_color_b[panel_index];
    local_114.intensity = (float)this_ptr->laser_intensity[panel_index];
    local_114.is_hero_weapon = 0;
    local_114.is_damaging = 0;
    local_c0.beam_width = 0.08;
    local_c0.laser_type = 2;
    local_c0.is_damaging = 0;
    local_c0.local_origin.x = local_114.local_origin.x;
    local_c0.is_hero_weapon = 0;
    local_c0.local_origin.y = local_114.local_origin.y;
    local_c0.local_origin.z = local_114.local_origin.z;
    local_c0.local_hit_position.x = local_114.local_hit_position.x;
    local_c0.local_hit_position.y = local_114.local_hit_position.y;
    local_c0.local_hit_position.z = local_114.local_hit_position.z;
    local_c0.local_normal.x = local_114.local_normal.x;
    local_c0.local_normal.y = local_114.local_normal.y;
    local_c0.local_normal.z = local_114.local_normal.z;
    local_c0.incidence_angle = local_114.incidence_angle;
    local_c0.reflectivity = local_114.reflectivity;
    local_c0.stored_angle = local_114.stored_angle;
    local_c0.transparency = local_114.transparency;
    local_c0.intensity = local_114.intensity;
    local_c0.color.r = local_114.color.r;
    local_c0.color.g = local_114.color.g;
    local_c0.color.b = local_114.color.b;
    core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
              (g_CFireEffectPtr,&local_3c,&local_54,&local_c0,0);
    core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
    return;
  }
  this_ptr->laser_intensity[panel_index] = 0;
  return;
}
