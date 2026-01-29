// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
// Address Range: [[0056a470, 0056aa00]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr)

{
  char *pcVar1;
  CDemonLight *light_source;
  C3DSLight *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  C3DSCamera *this_ptr_00;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  byte bVar12;
  int in_stack_00000008;
  uint auStackY_1838 [1443];
  CBoundingBox3D *in_stack_fffffe8c;
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
  
  bVar12 = 0;
  local_4c = 0;
  bVar11 = g_MasterLightCount == 0;
  if (bVar11) {
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  }
  local_4c = (uint)bVar11;
  g_DynamicLightCount = 0;
  DAT_03277d80 = 0;
  local_20 = 0;
  g_ActiveLightCount = 0;
  if (0 < this_ptr->camera_count) {
    local_38 = this_ptr->lights;
    local_48 = in_stack_00000008 + 1;
    local_44 = this_ptr->cameras;
    local_40 = 0;
    local_3c = this_ptr;
    local_34 = local_38;
    do {
      if (local_3c->cameras[0].is_panning == 0) {
        this_ptr_00 = local_44 + local_20;
        core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_00,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
        pCVar4 = core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
                           (&g_CDemonCameraInstance,local_74,in_stack_fffffe8c);
        if (&this_ptr_00->box_min != pCVar4) {
          (this_ptr_00->box_min).x = pCVar4->x;
          (this_ptr_00->box_min).y = pCVar4->y;
          (this_ptr_00->box_min).z = pCVar4->z;
        }
        if (&this_ptr_00->box_max != pCVar4 + 1) {
          (this_ptr_00->box_max).x = pCVar4[1].x;
          (this_ptr_00->box_max).y = pCVar4[1].y;
          (this_ptr_00->box_max).z = pCVar4[1].z;
        }
        sprintf
                  (&stack0xfffffe8c,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)local_3c->cameras[0].box_min.x,(double)local_3c->cameras[0].box_min.y,
                   (double)local_3c->cameras[0].box_min.z,(double)local_3c->cameras[0].box_max.x,
                   (double)local_3c->cameras[0].box_max.y,(double)local_3c->cameras[0].box_max.z);
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe8c,0,0x16);
      }
      local_1c = 0x21;
      local_24 = this_ptr->light_count;
      local_14 = 0;
      if (in_stack_00000008 != -1) {
        local_24 = local_48;
        local_14 = in_stack_00000008;
      }
      if (local_14 < local_24) {
        local_28 = local_3c;
        local_2c = local_40;
        local_30 = local_3c;
        local_18 = (int)this_ptr->cameras + local_14 * 0x1898 + local_20 + -4;
        iVar6 = (int)this_ptr->cameras + local_40 + local_14 * 0x1898 + -4;
        do {
          iVar7 = local_14;
          iVar5 = local_20;
          if (this_ptr->lights[local_14].light_type == 0) {
            iVar5 = 0;
            if (0 < g_MasterLightCount) {
              pCVar2 = local_34 + local_14;
              iVar7 = 0;
              do {
                iVar3 = strcmp
                                  ((char *)(*(int *)((int)g_MasterLightList + iVar7) + 0x40),
                                   pCVar2->name);
                if (iVar3 == 0) break;
                iVar5 = iVar5 + 1;
                iVar7 = iVar7 + 4;
              } while (iVar5 < g_MasterLightCount);
            }
            if (iVar5 == g_MasterLightCount) {
              g_CurrentFilename = "..\\core\\set.cpp";
              g_CurrentLineNumber = 0x2fc;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = g_MasterLightList[iVar5];
            if (local_28->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar5 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(local_18 + 0x19b58) = (char)iVar5;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
                        (&g_CDemonCameraInstance,light_source,&local_5c);
              puVar9 = (uint *)(iVar6 + 0x19c58 + (uint)bVar12 * -8);
              *(int *)(iVar6 + 0x19c54) = local_5c.left;
              puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
              puVar8 = (uint *)((int)&local_5c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
              *puVar9 = *(uint *)((int)&local_5c + (uint)bVar12 * -8 + 4);
              *puVar10 = *puVar8;
              puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
              if (*(char *)(local_18 + 0x19b58) != '\0') {
                sprintf(&stack0xfffffe8c,"Light %d, Box : %d,%d,%d,%d");
                iVar5 = local_1c + 0xb;
                engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe8c,0,local_1c);
                local_1c = iVar5;
              }
            }
          }
          else if (local_30->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
            iVar3 = core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0(local_38 + iVar7);
            this_ptr->lights[iVar7].visible_flags[iVar5] = (char)iVar3;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
            pcVar1 = this_ptr->lights[iVar7].unk1 + local_2c + 6;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = this_ptr->lights[iVar7].unk1 + local_2c + 10;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = this_ptr->lights[iVar7].unk1 + local_2c + 0xe;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = this_ptr->lights[iVar7].unk1 + local_2c + 0x12;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
          }
          else {
            this_ptr->lights[local_14].visible_flags[local_20] = '\0';
          }
          iVar6 = iVar6 + 0x1898;
          local_18 = local_18 + 0x1898;
          local_14 = local_14 + 1;
        } while (local_14 < local_24);
      }
      iVar6 = local_20;
      sprintf(&stack0xfffffe8c,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe8c,0,0);
      iVar6 = iVar6 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_3c = (CDemonSet *)&local_3c->cameras[0].unk4;
      local_40 = local_40 + 0x10;
      local_20 = iVar6;
    } while (iVar6 < this_ptr->camera_count);
  }
  if (local_4c != 0) {
    core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
