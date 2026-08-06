// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_00478f80
// Address: 00478f80
// Address Range: [[00478f80, 004790e6]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_00478f80(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_00478f80(CEmitter *this_ptr)

{
  int iVar1;
  CVector3f *direction;
  SLaserInfo *laser_info;
  SLaserInfo local_cc;
  SLaserInfo local_78;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (((iVar1 == 0) && (this_ptr->emitter_type == 3)) && (this_ptr->emitter_state != 0)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,&this_ptr->base);
    core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_cc);
    local_cc.laser_type = this_ptr->laser_type;
    local_cc.color.r = (this_ptr->laser_color).r;
    local_cc.color.g = (this_ptr->laser_color).g;
    local_cc.color.b = (this_ptr->laser_color).b;
    local_78.beam_width = local_cc.beam_width;
    local_78.local_origin.x = local_cc.local_origin.x;
    local_78.local_origin.y = local_cc.local_origin.y;
    local_78.local_origin.z = local_cc.local_origin.z;
    local_78.local_hit_position.x = local_cc.local_hit_position.x;
    local_78.local_hit_position.y = local_cc.local_hit_position.y;
    local_78.local_hit_position.z = local_cc.local_hit_position.z;
    local_78.local_normal.x = local_cc.local_normal.x;
    local_78.local_normal.y = local_cc.local_normal.y;
    local_78.local_normal.z = local_cc.local_normal.z;
    local_78.incidence_angle = local_cc.incidence_angle;
    iVar1 = 0;
    local_78.reflectivity = local_cc.reflectivity;
    local_cc.intensity = 1.0;
    local_78.stored_angle = local_cc.stored_angle;
    local_cc.is_hero_weapon = 0;
    local_78.transparency = local_cc.transparency;
    laser_info = &local_78;
    local_cc.is_damaging = 0;
    local_78.intensity = 1.0;
    local_78.is_hero_weapon = 0;
    local_78.is_damaging = 0;
    local_18.x = 0.0;
    local_18.y = 0.0;
    local_18.z = 100.0;
    local_78.laser_type = local_cc.laser_type;
    local_78.color.r = local_cc.color.r;
    local_78.color.g = local_cc.color.g;
    local_78.color.b = local_cc.color.b;
    direction = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                          (&this_ptr->base,&local_24,&local_18);
    core_fire_cpp_CFireEffect_FUN_0048b6f0
              (g_CFireEffect_PTR_005b80f0,&(this_ptr->base).location.position,direction,laser_info,
               iVar1);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(g_CDemonSet_PTR_005be368);
    return 1;
  }
  return 0;
}
