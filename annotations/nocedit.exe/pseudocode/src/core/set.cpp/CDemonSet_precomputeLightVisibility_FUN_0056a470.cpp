// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
// Address: 0056a470
// Address Range: [[0056a470, 0056aa00]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet *this_ptr)

{
  CDemonSet *pCVar1;
  char *pcVar2;
  CDemonLight *light_source;
  int iVar3;
  CVector3f *pCVar4;
  int unaff_EBX;
  int iVar5;
  C3DSCamera *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  int unaff_retaddr;
  CDemonSet *in_stack_00000008;
  int in_stack_0000000c;
  uint auStackY_1848 [1443];
  ulonglong in_stack_fffffe74;
  CBoundingBox3D *bounding_box;
  CVector3f aCStack_88 [2];
  CRect aCStack_70 [2];
  int iStack_50;
  int local_4c;
  int local_48;
  CDemonSet *local_44;
  C3DSCamera *local_40;
  int local_3c;
  CDemonSet *local_38;
  C3DSLight *local_34;
  CDemonSet *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CDemonSet *local_1c;
  
  bVar12 = 0;
  local_4c = 0;
  if (g_MasterLightCount == 0) {
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
    local_48 = 1;
  }
  g_DynamicLightCount = 0;
  DAT_03277d80 = 0;
  local_1c = (CDemonSet *)0x0;
  g_ActiveLightCount = 0;
  if (0 < in_stack_00000008->camera_count) {
    local_34 = in_stack_00000008->lights;
    local_44 = (CDemonSet *)(in_stack_0000000c + 1);
    local_40 = in_stack_00000008->cameras;
    local_3c = 0;
    local_38 = in_stack_00000008;
    local_30 = (CDemonSet *)local_34;
    do {
      bounding_box = (CBoundingBox3D *)((ulonglong)in_stack_fffffe74 >> 0x20);
      if (local_38->cameras[0].is_panning == 0) {
        this_ptr_00 = local_40 + (int)local_1c;
        core_setutil_cpp_C3DSCamera_apply_FUN_00585870(this_ptr_00,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(local_1c,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044e360(&g_CDemonCameraInstance);
        pCVar4 = core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060
                           (&g_CDemonCameraInstance,aCStack_88,bounding_box);
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
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffe7c,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)*(float *)(local_4c + 0x180),(double)*(float *)(local_4c + 0x184),
                   (double)*(float *)(local_4c + 0x188),(double)*(float *)(local_4c + 0x18c),
                   (double)*(float *)(local_4c + 400),(double)*(float *)(local_4c + 0x194));
        engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,0x16);
      }
      local_24 = 0x21;
      local_2c = *(int *)(unaff_EBX + 0x19a2c);
      local_1c = (CDemonSet *)0;
      if (unaff_retaddr != -1) {
        local_2c = iStack_50;
        local_1c = (CDemonSet *)unaff_retaddr;
      }
      if ((int)local_1c < local_2c) {
        local_30 = local_44;
        local_34 = (C3DSLight *)local_48;
        local_38 = local_44;
        local_20 = (int)local_1c * 0x1898 + local_28 + unaff_EBX;
        iVar6 = local_48 + (int)local_1c * 0x1898 + unaff_EBX;
        do {
          pCVar1 = local_1c;
          iVar7 = (int)local_1c * 0x1898;
          if (*(int *)(unaff_EBX + iVar7 + 0x19a30) == 0) {
            iVar5 = 0;
            if (0 < g_MasterLightCount) {
              iVar7 = iVar7 + local_3c;
              iVar8 = 0;
              do {
                iVar3 = crt_string_c_strcmp_FUN_005fef20
                                  ((char *)(*(int *)((int)g_MasterLightList + iVar8) + 0x40),
                                   (char *)(iVar7 + 4));
                if (iVar3 == 0) break;
                iVar5 = iVar5 + 1;
                iVar8 = iVar8 + 4;
              } while (iVar5 < g_MasterLightCount);
            }
            if (iVar5 == g_MasterLightCount) {
              g_CurrentFilename = "..\\core\\set.cpp";
              g_CurrentLineNumber = 0x2fc;
              core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = g_MasterLightList[iVar5];
            if (local_30->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044de10
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar7 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(local_2c + 0x19b58) = (char)iVar7;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451090
                        (&g_CDemonCameraInstance,light_source,aCStack_70);
              puVar10 = (uint *)(iVar6 + 0x19c58 + (uint)bVar12 * -8);
              *(int *)(iVar6 + 0x19c54) = aCStack_70[0].top;
              puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
              puVar9 = (uint *)((int)aCStack_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 0xc)
              ;
              *puVar10 = *(uint *)((int)aCStack_70 + (uint)bVar12 * -8 + 8);
              *puVar11 = *puVar9;
              puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
              if (*(char *)(local_28 + 0x19b58) != '\0') {
                crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe7c,"Light %d, Box : %d,%d,%d,%d");
                iVar7 = local_28 + 0xb;
                engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe80,0,local_28);
                local_24 = iVar7;
              }
            }
          }
          else {
            iVar5 = local_28 + unaff_EBX + iVar7;
            if (local_38->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
              iVar7 = core_setutil_cpp_C3DSLight_isVisible_FUN_00587df0
                                ((C3DSLight *)(iVar7 + local_48));
              *(char *)(iVar5 + 0x19b58) = (char)iVar7;
              core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x18;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x1c;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x20;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
              pcVar2 = local_34[(int)pCVar1 + 0x10].filter_names[5] + unaff_EBX + 0x24;
              pcVar2[0] = '\0';
              pcVar2[1] = '\0';
              pcVar2[2] = '\0';
              pcVar2[3] = '\0';
            }
            else {
              *(byte *)(iVar5 + 0x19b58) = 0;
            }
          }
          iVar6 = iVar6 + 0x1898;
          local_20 = local_20 + 0x1898;
          local_1c = (CDemonSet *)((int)local_1c + 1);
        } while ((int)local_1c < local_2c);
      }
      iVar6 = local_28;
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffe84,"Precomputing lights from camera : %d");
      in_stack_fffffe74 = 0x56a6c600000000;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffe88,0,0);
      pCVar1 = (CDemonSet *)(iVar6 + 1);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      local_38 = (CDemonSet *)&local_38->cameras[0].field17_0x1a0;
      local_3c = local_3c + 0x10;
      local_1c = pCVar1;
    } while ((int)pCVar1 < in_stack_00000008->camera_count);
  }
  if (local_48 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000008);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
