// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
// Address Range: [[0056a470, 0056aa00] [00604a0d, 00604a34]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr,int light_index)

{
  CVector3f *pCVar2;
  int iVar2;
  CVector3f *pCVar3;
  int iVar3;
  int iVar4;
  C3DSCamera *this_ptr_00;
  int iVar5;
  int iVar6;
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
  int local_40;
  CDemonSet *local_3c;
  C3DSLight *local_38;
  C3DSLight *local_34;
  CDemonSet *local_30;
  int local_2c;
  CDemonSet *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
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
    local_40 = 0;
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
        if (&this_ptr_00->box != (CBoundingBox3D *)pCVar3) {
          (this_ptr_00->box).min.x = pCVar3->x;
          (this_ptr_00->box).min.y = pCVar3->y;
          (this_ptr_00->box).min.z = pCVar3->z;
        }
        pCVar2 = &(this_ptr_00->box).max;
        if (pCVar2 != pCVar3 + 1) {
          pCVar2->x = pCVar3[1].x;
          (this_ptr_00->box).max.y = pCVar3[1].y;
          (this_ptr_00->box).max.z = pCVar3[1].z;
        }
        _sprintf(local_174,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)local_3c->cameras[0].box.min.x,(double)local_3c->cameras[0].box.min.y,
                   (double)local_3c->cameras[0].box.min.z,(double)local_3c->cameras[0].box.max.x,
                   (double)local_3c->cameras[0].box.max.y,(double)local_3c->cameras[0].box.max.z);
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
        local_18 = (int)this_ptr->cameras + local_14 * 0x1898 + local_20 + -4;
        iVar5 = (int)this_ptr->cameras + local_40 + local_14 * 0x1898 + -4;
        do {
          if (this_ptr->lights[local_14].light_type == 0) {
            iVar4 = 0;
            if (0 < g_MasterLightCount) {
              pCVar1 = this_ptr->lights;
              iVar6 = 0;
              do {
                iVar2 = _strcmp
                                  ((char *)(*(int *)((int)g_MasterLightList + iVar6) + 0x40),
                                   pCVar1[local_14].name);
                if (iVar2 == 0) break;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar4 < g_MasterLightCount);
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
              iVar3 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(local_18 + 0x19b58) = (char)iVar3;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
                        (&g_CDemonCameraInstance,light_source,&local_5c);
              *(int *)(iVar5 + 0x19c54) = local_5c.x_min;
              *(int *)(iVar5 + 0x19c58) = local_5c.x_max;
              *(int *)(iVar5 + 0x19c5c) = local_5c.y_min;
              *(int *)(iVar5 + 0x19c60) = local_5c.y_max;
              if (*(char *)(local_18 + 0x19b58) != '\0') {
                _sprintf(local_174,"Light %d, Box : %d,%d,%d,%d");
                engine_2d_c_drawText_FUN_00401fd0(local_174,0,local_1c);
                local_1c = local_1c + 0xb;
              }
            }
          }
          else if (local_3c->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
            iVar3 = core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(this_ptr->lights + local_14);
            this_ptr->lights[local_14].visible_flags[local_20] = (char)iVar3;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
            *(uint *)
             ((int)&this_ptr->lights[local_14].camera_light_bounds[0].x_min + local_40) = 0;
            *(uint *)
             ((int)&this_ptr->lights[local_14].camera_light_bounds[0].x_max + local_40) = 0;
            *(uint *)
             ((int)&this_ptr->lights[local_14].camera_light_bounds[0].y_min + local_40) = 0;
            *(uint *)
             ((int)&this_ptr->lights[local_14].camera_light_bounds[0].y_max + local_40) = 0;
          }
          else {
            this_ptr->lights[local_14].visible_flags[local_20] = '\0';
          }
          iVar5 = iVar5 + 0x1898;
          local_18 = local_18 + 0x1898;
          local_14 = local_14 + 1;
        } while (local_14 < local_24);
      }
      _sprintf(local_174,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00401fd0(local_174,0,0);
      local_20 = local_20 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_3c = (CDemonSet *)&local_3c->cameras[0].enabled;
      local_40 = local_40 + 0x10;
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
