// Name: core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990
// Address: 0056c990
// MANUAL RECONSTRUCTION
// Address Range: [[0056c990, 0056cd56]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_set_cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990(CDemonSet *this_ptr)

{
  CSkeleton *this_ptr_02;
  int iVar3;
  CVector3f *input_local_point;
  int iVar4;
  CDemonSet *pCVar5;
  CMatrix3x4f *matrix;
  int iVar5;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  CDemonLight *local_14;
  int iVar1;
  CHero *this_ptr_00;
  int iVar2;
  CDemonLight *this_ptr_01;
  
  this_ptr_00 = g_HeroActors[g_LocalHeroIndex];
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr_00->base).model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_02,"Bip01 Head",0);
  matrix = (this_ptr_00->base).model.bone_transform.bone_world_matrices + iVar3;
  local_44.y = 0.338;
  local_44.x = 0.0;
  local_44.z = 0.75;
  input_local_point = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_50,&local_44,matrix);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr_00,&local_2c,input_local_point);
  core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)matrix,&local_38);
  local_20.z = 0.0;
  local_20.x = local_38.x + (float)0.261799387791667;
  g_CDemonLightInstance.volumetric_enabled = 0;
  local_20.y = local_38.y + (this_ptr_00->base).base.orient.vec.y;
  g_CDemonLightInstance.base.base.position.f.x = local_2c.x;
  g_CDemonLightInstance.base.base.position.f.y = local_2c.y;
  g_CDemonLightInstance.base.base.position.f.z = local_2c.z;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&g_CDemonLightInstance.base.base.rotation_matrix,&local_20);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
  iVar5 = g_UseExternalRenderer;
  g_CDemonCameraInstance.base.position.f.x = local_2c.x;
  g_CDemonCameraInstance.base.position.f.y = local_2c.y;
  g_CDemonCameraInstance.base.position.f.z = local_2c.z;
  if (g_CGamePtr->geometry_debug_enabled == 0) {
    core_dlight_cpp_CDemonLight_beginScene_FUN_00472a80(&g_CDemonLightInstance,0);
    core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(&g_CDemonLightInstance);
    g_RenderMirrorsFlag = 0;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
              (this_ptr,g_CDemonLightInstance.base.max_distance,0);
    g_RenderMirrorsFlag = 1;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,0xffffffff);
    core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(this_ptr,1);
    iVar5 = 0;
    core_set_cpp_CDemonSet_buildDisplayList_FUN_0056fbd0(this_ptr,1);
    pCVar5 = this_ptr;
    if (0 < this_ptr->sorted_render_actor_count) {
      do {
        (*((pCVar5->sorted_render_actors[0]->vtable)._ub)->renderOpaque)
                  (pCVar5->sorted_render_actors[0]);
        pCVar5 = (CDemonSet *)pCVar5->cameras;
        iVar5 = iVar5 + 1;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
      } while (iVar5 < this_ptr->sorted_render_actor_count);
    }
    core_gore_cpp_CGore_renderParticles_FUN_004ed7b0(g_CGorePtr);
    core_fire_cpp_CFireEffect_render_FUN_004c7180(g_CFireEffectPtr);
    core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(&g_CDemonLightInstance,1);
    local_5c.x = (int)ROUND(local_2c.x * 256.0f);
    local_5c.y = (int)ROUND(local_2c.y * 256.0f);
    local_5c.z = (int)ROUND(local_2c.z * 256.0f);
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (this_ptr,(CVector3f *)0x0,(UOrientationVector *)0x0,(CVector3f *)0x0,(CVector3f *)0x0
               ,(CMatrix3x3f *)0x0);
    iVar5 = core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
                      (this_ptr,&local_5c,(CVector3i *)0x0);
    iVar4 = core_fire_cpp_CFireEffect_hasActiveMuzzleFlash_FUN_004c93d0(g_CFireEffectPtr);
    if (g_WindowHeight < 0xf1) {
      iVar1 = -g_CDemonLightInstance.shadow_map_width;
      iVar2 = -g_CDemonLightInstance.shadow_map_height;
    }
    else {
      iVar1 = g_CDemonLightInstance.shadow_map_width * -2;
      iVar2 = g_CDemonLightInstance.shadow_map_height * -2;
    }
    if ((g_HeroActors[g_LocalHeroIndex]->inventory).battery_charge <= 0.0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      return;
    }
    core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
              (&g_CDemonLightInstance,(g_WindowWidth + iVar1) / 2,(g_WindowHeight + iVar2) / 2,
               ((int)((iVar5 + (iVar5 >> 0x1f) * -0x80) - (uint)((iVar5 >> 0x1f) << 6 < 0)) >> 7) +
               iVar4 * 0x80 + g_CWeatherPtr->lightning_active * 0x8000);
    return;
  }
  g_UseExternalRenderer = 0;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr2,(CVector3i *)&local_2c);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650(g_CDemonRendererPtr2,32.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2,&local_20)
  ;
  g_CDemonRaytraceInstance.rendering_mode = 1;
  wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
  core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(g_CDemonSetPtr,9999.9,0);
  g_CDemonRaytraceInstance.rendering_mode = 0;
  g_UseExternalRenderer = iVar5;
  return;
}
