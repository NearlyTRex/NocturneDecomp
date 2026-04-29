// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
// MANUAL RECONSTRUCTION
// Address Range: [[0056a470, 0056aa00] [00604a0d, 00604a34]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr,int light_index)

{
  CVector3f *pCVar3;
  int iVar1;
  int iVar4;
  C3DSCamera *this_ptr_00;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  byte bVar11;
  char local_174 [256];
  CVector3f local_74 [2];
  CRect local_5c;
  uint local_4c;
  int local_48;
  C3DSCamera *local_44;
  CDemonSet *local_3c;
  C3DSLight *local_38;
  C3DSLight *local_34;
  CDemonSet *local_30;
  int local_2c;
  CDemonSet *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  CDemonLight *light_source;
  C3DSLight *pCVar1;
  
  bVar10 = g_MasterLightCount == 0;
  if (bVar10) {
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  }
  g_DynamicLightCount = 0;
  g_OmniLightCount = 0;
  local_20 = 0;
  g_SpotLightCount = 0;
  if (0 < this_ptr->camera_count) {
    local_3c = this_ptr;
    do {
      if (local_3c->cameras[0].is_panning == 0) {
        this_ptr_00 = this_ptr->cameras + local_20;
        core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_00,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
        pCVar3 = core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
                           (&g_CDemonCameraInstance,local_74);
        if (&this_ptr_00->box_min != pCVar3) {
          (this_ptr_00->box_min).x = pCVar3->x;
          (this_ptr_00->box_min).y = pCVar3->y;
          (this_ptr_00->box_min).z = pCVar3->z;
        }
        if (&this_ptr_00->box_max != pCVar3 + 1) {
          (this_ptr_00->box_max).x = pCVar3[1].x;
          (this_ptr_00->box_max).y = pCVar3[1].y;
          (this_ptr_00->box_max).z = pCVar3[1].z;
        }
        _sprintf
                  (local_174,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)local_3c->cameras[0].box_min.x,(double)local_3c->cameras[0].box_min.y,
                   (double)local_3c->cameras[0].box_min.z,(double)local_3c->cameras[0].box_max.x,
                   (double)local_3c->cameras[0].box_max.y,(double)local_3c->cameras[0].box_max.z);
        engine_2d_c_drawText_FUN_00401fd0(local_174,0,0x16);
      }
      local_1c = 0x21;
      local_14 = 0;
      local_24 = this_ptr->light_count;
      if (light_index != -1) {
        local_14 = light_index;
        local_24 = light_index + 1;
      }
      if (local_14 < local_24) {
        do {
          if (this_ptr->lights[local_14].light_type == 0) {
            pCVar1 = this_ptr->lights;
            for (iVar4 = 0; iVar4 < g_MasterLightCount; iVar4++) {
              if (_strcmp(g_MasterLightList[iVar4]->base.camera_name,
                          pCVar1[local_14].name) == 0) break;
            }
            if (iVar4 == g_MasterLightCount) {
              g_CurrentFilename = "..\\core\\set.cpp";
              g_CurrentLineNumber = 0x2fc;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = g_MasterLightList[iVar4];
            if (local_3c->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar1 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
                                (&g_CDemonCameraInstance,light_source);
              this_ptr->lights[local_14].visible_flags[local_20] = (char)iVar1;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
                        (&g_CDemonCameraInstance,light_source,&local_5c);
              this_ptr->lights[local_14].camera_light_bounds[local_20].left = local_5c.left;
              this_ptr->lights[local_14].camera_light_bounds[local_20].top = local_5c.top;
              this_ptr->lights[local_14].camera_light_bounds[local_20].right = local_5c.right;
              this_ptr->lights[local_14].camera_light_bounds[local_20].bottom = local_5c.bottom;
              if (this_ptr->lights[local_14].visible_flags[local_20] != '\0') {
                _sprintf(local_174,"Light %d, Box : %d,%d,%d,%d",local_14,
                         local_5c.left,local_5c.top,local_5c.right,local_5c.bottom);
                engine_2d_c_drawText_FUN_00401fd0(local_174,0,local_1c);
                local_1c = local_1c + 0xb;
              }
            }
          }
          else if (local_3c->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
            iVar1 = core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(this_ptr->lights + local_14);
            this_ptr->lights[local_14].visible_flags[local_20] = (char)iVar1;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
            this_ptr->lights[local_14].camera_light_bounds[local_20].left = 0;
            this_ptr->lights[local_14].camera_light_bounds[local_20].top = 0;
            this_ptr->lights[local_14].camera_light_bounds[local_20].right = 0;
            this_ptr->lights[local_14].camera_light_bounds[local_20].bottom = 0;
          }
          else {
            this_ptr->lights[local_14].visible_flags[local_20] = '\0';
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_24);
      }
      _sprintf(local_174,"Precomputing lights from camera : %d",local_20);
      engine_2d_c_drawText_FUN_00401fd0(local_174,0,0);
      local_20 = local_20 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_3c = (CDemonSet *)&local_3c->cameras[0].enabled;
    } while (local_20 < this_ptr->camera_count);
  }
  if (bVar10) {
    core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
