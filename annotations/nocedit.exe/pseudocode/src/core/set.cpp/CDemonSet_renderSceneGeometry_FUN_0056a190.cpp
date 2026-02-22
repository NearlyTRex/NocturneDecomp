// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
// Address: 0056a190
// Address Range: [[0056a190, 0056a464]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_1c */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int visible_cube_count;
  int *visible_cube_indices;
  int iVar1;
  CDemonSet *pCVar2;
  CVector3f local_1c;
  
  engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_0048c6c0
            (g_CDemonRendererPtr2,&g_GlobalLightDirection);
  engine_drender_cpp_CDemonRenderer_setLightIntensity_FUN_0048c690(g_CDemonRendererPtr2,0.25);
  if ((render_mode == 0) || (iVar1 = this_ptr->selected_camera_index, iVar1 < 0)) {
LAB_0056a371:
    if (render_mode == 1) {
      iVar1 = 1;
      goto LAB_0056a1fb;
    }
  }
  else {
    visible_cube_count = this_ptr->cameras[iVar1].pvs_count;
    if ((0 < visible_cube_count) &&
       (visible_cube_indices = this_ptr->cameras[iVar1].pvs_list, visible_cube_indices != (int *)0x0
       )) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50
                (&g_CDemonRaytraceInstance,visible_cube_count,visible_cube_indices);
      goto LAB_0056a371;
    }
    render_mode = 2;
  }
  iVar1 = 0;
LAB_0056a1fb:
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
            (&g_CDemonRaytraceInstance,frustum_param,iVar1);
  if (render_mode == 2) {
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_00498fb0
              (&g_CDemonRaytraceInstance,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_count,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_list,(int **)local_1c.x);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 == 0) {
    if (g_UseExternalRenderer == 0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_00570b70(this_ptr);
    }
    if (g_UseExternalRenderer == 0) {
      if (this_ptr->use_enviro_model != 0) {
        local_1c.x = (float)g_UseExternalRenderer;
        local_1c.y = (float)g_UseExternalRenderer;
        local_1c.z = (float)g_UseExternalRenderer;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                  (&g_CKeyFramedModelInstance,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((this_ptr->disable_sky_rendering == 0) && (this_ptr->has_sky != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_004901f0
                  (g_SkyDomeTexturePtr,this_ptr->sky_texture_name,this_ptr->sky_brightness);
      }
      if ((this_ptr->disable_water_rendering == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(g_CWaterPtr),
         g_CWaterPtr->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_005ea320(g_CWaterPtr,1);
      }
      if (this_ptr->player_on_train != 0) {
        core_terrain_cpp_CTerrain_render_FUN_005e1f50(g_CTerrainPtr);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->mirror_glass_actor_count) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
                  (&pCVar2->mirror_glass_actors[0]->mirror);
        if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
          core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(pCVar2->mirror_glass_actors[0]);
        }
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
                  (&g_CDemonRaytraceInstance,frustum_param,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->mirror_glass_actor_count);
    }
  }
  else if ((g_RenderMirrorsFlag != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < this_ptr->mirror_glass_actor_count)) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00522800
                (&pCVar2->mirror_glass_actors[0]->mirror);
      if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
        core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e9ca0(pCVar2->mirror_glass_actors[0]);
      }
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50
                (&g_CDemonRaytraceInstance,frustum_param,0);
      pCVar2 = (CDemonSet *)pCVar2->cameras;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
    } while (iVar1 < this_ptr->mirror_glass_actor_count);
  }
  return;
}
