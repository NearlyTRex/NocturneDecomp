// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80
// Address: 00507c80
// Address Range: [[00507c80, 00507f78]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00507c80(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int visible_cube_count;
  int *visible_cube_indices;
  int iVar1;
  CDemonSet *pCVar2;
  CVector3f local_1c;
  
  engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70
            (g_CDemonRenderer_PTR_005ae704,(CVector3i *)&DAT_005be36c);
  engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_00460c40
            (g_CDemonRenderer_PTR_005ae704,0.25);
  if (this_ptr->use_world_geometry_flag != 0) goto LAB_00507d51;
  if ((render_mode == 0) || (iVar1 = this_ptr->selected_camera_index, iVar1 < 0)) {
LAB_00507e84:
    if (render_mode != 1) goto LAB_00507d02;
    iVar1 = 1;
  }
  else {
    visible_cube_count = this_ptr->cameras[iVar1].pvs_count;
    if ((0 < visible_cube_count) &&
       (visible_cube_indices = this_ptr->cameras[iVar1].pvs_list, visible_cube_indices != (int *)0x0
       )) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0
                (&g_CDemonRaytrace_01fba938,visible_cube_count,visible_cube_indices);
      goto LAB_00507e84;
    }
    render_mode = 2;
LAB_00507d02:
    iVar1 = 0;
  }
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
            (&g_CDemonRaytrace_01fba938,frustum_param,iVar1);
  if (render_mode == 2) {
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40
              (&g_CDemonRaytrace_01fba938,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_count,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_list);
  }
LAB_00507d51:
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar1 == 0) {
    if (g_UseExternalRenderer == 0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_0050e210(this_ptr);
    }
    if (g_UseExternalRenderer == 0) {
      if (this_ptr->use_enviro_model != 0) {
        local_1c.x = (float)g_UseExternalRenderer;
        local_1c.y = (float)g_UseExternalRenderer;
        local_1c.z = (float)g_UseExternalRenderer;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (g_CDemonRenderer_PTR_005ae704,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
                  (&g_CKeyFramedModel_01fbacc8,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((this_ptr->disable_sky_rendering == 0) && (this_ptr->has_sky != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_00463580
                  (0x01B7B4E8,this_ptr->sky_texture_name,this_ptr->sky_brightness);
      }
      if ((this_ptr->disable_water_rendering == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(0x02DD1210),
         0x02DD1210->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_00550cb0(0x02DD1210,1);
      }
      if (this_ptr->player_on_train != 0) {
        core_terrain_cpp_CTerrain_render_FUN_00549310(0x02DD10C8,1);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->mirror_glass_actor_count) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
                  (&pCVar2->mirror_glass_actors[0]->mirror);
        if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
          core_glass_cpp_CGlass_FUN_004ac7c0(pCVar2->mirror_glass_actors[0]);
        }
        core_set_cpp_CDemonSet_FUN_0050e080(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
                  (&g_CDemonRaytrace_01fba938,frustum_param,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->mirror_glass_actor_count);
    }
  }
  else if ((DAT_005be378 != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < this_ptr->mirror_glass_actor_count)) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
                (&pCVar2->mirror_glass_actors[0]->mirror);
      if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
        core_glass_cpp_CGlass_FUN_004ac7c0(pCVar2->mirror_glass_actors[0]);
      }
      core_set_cpp_CDemonSet_FUN_0050e080(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00469ce0
                (&g_CDemonRaytrace_01fba938,frustum_param,0);
      pCVar2 = (CDemonSet *)pCVar2->cameras;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190(this_ptr);
    } while (iVar1 < this_ptr->mirror_glass_actor_count);
  }
  return;
}
