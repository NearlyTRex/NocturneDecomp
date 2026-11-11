// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0
// Address: 0054e3c0
// Address Range: [[0054e3c0, 0054e694]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int visible_cube_count;
  int *visible_cube_indices;
  int iVar1;
  CDemonSet *pCVar2;
  CVector3f local_1c;
  
  engine_matrix_c_FUN_00483a20(DAT_00612560,&DAT_00622c1c);
  engine_matrix_c_FUN_004839f0(DAT_00612560,0x3e800000);
  if ((render_mode == 0) || (iVar1 = this_ptr->selected_camera_index, iVar1 < 0)) {
LAB_0054e5a1:
    if (render_mode == 1) {
      iVar1 = 1;
      goto LAB_0054e42b;
    }
  }
  else {
    visible_cube_count = this_ptr->cameras[iVar1].pvs_count;
    if ((0 < visible_cube_count) &&
       (visible_cube_indices = this_ptr->cameras[iVar1].pvs_list, visible_cube_indices != (int *)0x0
       )) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0048e4e0
                (&g_CDemonRaytraceInstance,visible_cube_count,visible_cube_indices);
      goto LAB_0054e5a1;
    }
    render_mode = 2;
  }
  iVar1 = 0;
LAB_0054e42b:
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
            (&g_CDemonRaytraceInstance,frustum_param,iVar1);
  if (render_mode == 2) {
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0048e640
              (&g_CDemonRaytraceInstance,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_count,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_list);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar1 == 0) {
    if (_DAT_01c50948 == 0.0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_00555610(this_ptr);
    }
    if (_DAT_01c50948 == 0.0) {
      if (this_ptr->use_enviro_model != 0) {
        local_1c.x = _DAT_01c50948;
        local_1c.y = _DAT_01c50948;
        local_1c.z = _DAT_01c50948;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
                  (&g_CKeyFramedModelInstance,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((this_ptr->disable_sky_rendering == 0) && (this_ptr->has_sky != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_00486900
                  (0x01BEEFBC,this_ptr->sky_texture_name,this_ptr->sky_brightness);
      }
      if ((this_ptr->disable_water_rendering == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_005a9a40(g_CWaterPtr),
         g_CWaterPtr->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_005a9f10(g_CWaterPtr,1);
      }
      if (this_ptr->player_on_train != 0) {
        core_terrain_cpp_CTerrain_render_FUN_0059f3e0(0x02C8AE68,1);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->mirror_glass_actor_count) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40
                  (&pCVar2->mirror_glass_actors[0]->mirror);
        if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
          core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e1db0(pCVar2->mirror_glass_actors[0]);
        }
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
                  (&g_CDemonRaytraceInstance,frustum_param,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->mirror_glass_actor_count);
    }
  }
  else if ((DAT_00622c28 != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < this_ptr->mirror_glass_actor_count)) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_00519e40
                (&pCVar2->mirror_glass_actors[0]->mirror);
      if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
        core_glass_cpp_CGlass_renderBrokenGlass_FUN_004e1db0(pCVar2->mirror_glass_actors[0]);
      }
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
                (&g_CDemonRaytraceInstance,frustum_param,0);
      pCVar2 = (CDemonSet *)pCVar2->cameras;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590(this_ptr);
    } while (iVar1 < this_ptr->mirror_glass_actor_count);
  }
  return;
}
