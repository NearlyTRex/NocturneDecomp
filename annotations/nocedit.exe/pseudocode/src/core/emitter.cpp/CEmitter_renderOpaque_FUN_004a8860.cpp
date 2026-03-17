// Name: core_emitter.cpp_CEmitter_renderOpaque_FUN_004a8860
// Address: 004a8860
// Address Range: [[004a8860, 004a8a71]]
// Convention: __cdecl
// Signature: int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_004a8860(CEmitter *this_ptr)

#include "nocturne.h"

int __cdecl core_emitter_cpp_CEmitter_renderOpaque_FUN_004a8860(CEmitter *this_ptr)

{
  int iVar1;
  CVector3f *direction;
  int iVar2;
  uint text_color;
  SLaserInfo local_d0;
  SLaserInfo local_7c;
  CVector3f local_28;
  CVector3f local_1c;
  SLaserInfo *laser_info;
  CVector3f *pCVar2;
  UOrientationVector *orientation;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    if ((this_ptr->emitter_type == 3) && (this_ptr->emitter_state != 0)) {
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
      core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_7c);
      local_d0.laser_type = this_ptr->laser_type;
      local_d0.color.r = (this_ptr->laser_color).r;
      local_d0.color.g = (this_ptr->laser_color).g;
      local_d0.color.b = (this_ptr->laser_color).b;
      local_7c.is_hero_weapon = 0;
      local_7c.is_damaging = 0;
      iVar2 = 0;
      local_d0.beam_width = local_7c.beam_width;
      local_d0.local_origin.x = local_7c.local_origin.x;
      local_d0.local_origin.y = local_7c.local_origin.y;
      local_d0.local_origin.z = local_7c.local_origin.z;
      local_d0.local_hit_position.x = local_7c.local_hit_position.x;
      local_d0.local_hit_position.y = local_7c.local_hit_position.y;
      local_d0.local_hit_position.z = local_7c.local_hit_position.z;
      local_d0.local_normal.x = local_7c.local_normal.x;
      local_d0.local_normal.y = local_7c.local_normal.y;
      local_d0.local_normal.z = local_7c.local_normal.z;
      local_d0.incidence_angle = local_7c.incidence_angle;
      local_d0.reflectivity = local_7c.reflectivity;
      local_d0.stored_angle = local_7c.stored_angle;
      local_d0.transparency = local_7c.transparency;
      laser_info = &local_d0;
      local_7c.intensity = 1.0;
      local_d0.intensity = 1.0;
      local_d0.is_hero_weapon = 0;
      local_d0.is_damaging = 0;
      local_1c.x = 0.0;
      local_1c.y = 0.0;
      local_1c.z = 100.0;
      local_7c.laser_type = local_d0.laser_type;
      local_7c.color.r = local_d0.color.r;
      local_7c.color.g = local_d0.color.g;
      local_7c.color.b = local_d0.color.b;
      direction = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                            (&this_ptr->base,&local_28,&local_1c);
      core_fire_cpp_CFireEffect_traceLaser_FUN_004c8230
                (g_CFireEffectPtr,&(this_ptr->base).location.position,direction,laser_info,iVar2);
      core_setcolid_cpp_CDemonSet_init_FUN_00574180(g_CDemonSetPtr);
      return 1;
    }
    if (g_CDemonMissionPtr->is_in_editor != 0) {
      iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
      if (iVar2 == 0) {
        core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(&this_ptr->base,0xfb);
        if ((((this_ptr->emitter_type == 3) && (g_SlewTargetMode != 0)) &&
            (this_ptr == g_EditorSelectedEmitter)) &&
           (g_EditorSelectedEmitter == (CEmitter *)g_CDemonMissionPtr->selected_actor)) {
          orientation = &g_EmitterEditorOrientation;
          pCVar2 = &g_EmitterTarget;
          text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                 (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabelsAt_FUN_004a1e90
                    (g_CEditorToolsPtr,1.0,text_color,pCVar2,orientation);
          return 0;
        }
      }
    }
  }
  return 0;
}
