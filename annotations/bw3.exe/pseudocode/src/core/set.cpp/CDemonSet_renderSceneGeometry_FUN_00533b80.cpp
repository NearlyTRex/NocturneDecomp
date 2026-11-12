// Name: core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80
// Address: 00533b80
// Address Range: [[00533b80, 00533e54]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet *this_ptr,float frustum_param,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(CDemonSet *this_ptr,float frustum_param,int render_mode)

{
  int visible_cube_count;
  int *visible_cube_indices;
  int iVar1;
  CDemonSet *pCVar2;
  CVector3f local_1c;
  
  engine_drender_cpp_FUN_0046d100(DAT_005f2afc,&DAT_00603b2c);
  engine_drender_cpp_FUN_0046d0d0(DAT_005f2afc,0x3e800000);
  if ((render_mode == 0) || (iVar1 = this_ptr->selected_camera_index, iVar1 < 0)) {
LAB_00533d61:
    if (render_mode == 1) {
      iVar1 = 1;
      goto LAB_00533beb;
    }
  }
  else {
    visible_cube_count = this_ptr->cameras[iVar1].pvs_count;
    if ((0 < visible_cube_count) &&
       (visible_cube_indices = this_ptr->cameras[iVar1].pvs_list, visible_cube_indices != (int *)0x0
       )) {
      core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00477060
                (&g_CDemonRaytraceInstance,visible_cube_count,visible_cube_indices);
      goto LAB_00533d61;
    }
    render_mode = 2;
  }
  iVar1 = 0;
LAB_00533beb:
  core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070
            (&g_CDemonRaytraceInstance,frustum_param,iVar1);
  if (render_mode == 2) {
    core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_004771c0
              (&g_CDemonRaytraceInstance,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_count,
               &this_ptr->cameras[this_ptr->selected_camera_index].pvs_list);
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 == 0) {
    if (_DAT_01c6cee8 == 0.0) {
      core_set_cpp_CDemonSet_buildMirrorList_FUN_0053afa0(this_ptr);
    }
    if (_DAT_01c6cee8 == 0.0) {
      if (this_ptr->use_enviro_model != 0) {
        local_1c.x = _DAT_01c6cee8;
        local_1c.y = _DAT_01c6cee8;
        local_1c.z = _DAT_01c6cee8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,&local_1c);
        core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
                  (&g_CKeyFramedModelInstance,0,(CKeyFramedModelInstance *)0x0,-1);
      }
      if ((this_ptr->disable_sky_rendering == 0) && (this_ptr->has_sky != 0)) {
        core_dskybox_cpp_renderSkyDome_FUN_0046f480
                  (0x01C0B558,this_ptr->sky_texture_name,this_ptr->sky_brightness);
      }
      if ((this_ptr->disable_water_rendering == 0) &&
         (core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(g_CWaterPtr),
         g_CWaterPtr->wave_animation_enabled == 0)) {
        core_water_cpp_CWater_render_FUN_00577760(g_CWaterPtr,1);
      }
      if (this_ptr->player_on_train != 0) {
        core_terrain_cpp_CTerrain_render_FUN_005723d0(0x02CFD8B8,1);
      }
    }
    iVar1 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->mirror_glass_actor_count) {
      do {
        core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004f5610
                  (&pCVar2->mirror_glass_actors[0]->mirror);
        if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
          core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(pCVar2->mirror_glass_actors[0]);
        }
        core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar1,1);
        core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070
                  (&g_CDemonRaytraceInstance,frustum_param,0);
        iVar1 = iVar1 + 1;
        core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
        pCVar2 = (CDemonSet *)pCVar2->cameras;
      } while (iVar1 < this_ptr->mirror_glass_actor_count);
    }
  }
  else if ((DAT_00603b38 != 0) &&
          (iVar1 = 0, pCVar2 = this_ptr, 0 < this_ptr->mirror_glass_actor_count)) {
    do {
      core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004f5610
                (&pCVar2->mirror_glass_actors[0]->mirror);
      if (pCVar2->mirror_glass_actors[0]->shattered != 0) {
        core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(pCVar2->mirror_glass_actors[0]);
      }
      core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(this_ptr,iVar1,0);
      core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00476070
                (&g_CDemonRaytraceInstance,frustum_param,0);
      pCVar2 = (CDemonSet *)pCVar2->cameras;
      iVar1 = iVar1 + 1;
      core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20(this_ptr);
    } while (iVar1 < this_ptr->mirror_glass_actor_count);
  }
  return;
}
