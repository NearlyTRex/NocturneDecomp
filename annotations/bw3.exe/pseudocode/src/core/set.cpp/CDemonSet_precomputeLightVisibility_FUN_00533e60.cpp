// Name: core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00533e60
// Address: 00533e60
// Address Range: [[00533e60, 00534416]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00533e60(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_00533e60(CDemonSet *this_ptr,int light_index)

{
  char *pcVar1;
  CDemonLight *light_source;
  C3DSLight *pCVar2;
  int iVar3;
  int iVar4;
  C3DSCamera *this_ptr_00;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  CVector3f *pCVar7;
  uint *puVar8;
  float *pfVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  byte bVar13;
  uint auStackY_1830 [1435];
  char acStack_184 [248];
  CVector3f aCStack_8c [2];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CRect CStack_54;
  int iStack_44;
  int iStack_40;
  CDemonSet *pCStack_3c;
  C3DSLight *pCStack_38;
  C3DSLight *pCStack_34;
  CDemonSet *pCStack_30;
  int iStack_2c;
  CDemonSet *pCStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar13 = 0;
  CStack_54.y_min = 0;
  bVar12 = g_MasterLightCount == 0;
  if (bVar12) {
    core_set_cpp_CDemonSet_initScene_FUN_00534420(this_ptr);
  }
  CStack_54.y_min = (int)bVar12;
  g_INT_0203ad1c = 0;
  g_INT_0203b3e8 = 0;
  iStack_20 = 0;
  g_SpotLightCount = 0;
  if (0 < this_ptr->camera_count) {
    pCStack_38 = this_ptr->lights;
    iStack_44 = light_index + 1;
    CStack_54.y_max = (int)this_ptr->cameras;
    iStack_40 = 0;
    pCStack_3c = this_ptr;
    pCStack_34 = pCStack_38;
    do {
      if (pCStack_3c->cameras[0].is_panning == 0) {
        this_ptr_00 = (C3DSCamera *)(CStack_54.y_max + iStack_20 * 0x1a4);
        core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(this_ptr_00,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(this_ptr,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00450e10
                  (&g_CDemonCameraInstance,aCStack_8c);
        pCVar7 = aCStack_8c;
        pfVar9 = &fStack_74;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar9 = pCVar7->x;
          pCVar7 = (CVector3f *)((int)pCVar7 + ((uint)bVar13 * -2 + 1) * 4);
          pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        }
        if (&this_ptr_00->box != (CBoundingBox3D *)&fStack_74) {
          (this_ptr_00->box).min.x = fStack_74;
          (this_ptr_00->box).min.y = fStack_70;
          (this_ptr_00->box).min.z = fStack_6c;
        }
        pCVar7 = &(this_ptr_00->box).max;
        if (pCVar7 != (CVector3f *)&fStack_68) {
          pCVar7->x = fStack_68;
          (this_ptr_00->box).max.y = fStack_64;
          (this_ptr_00->box).max.z = fStack_60;
        }
        _sprintf(&stack0xfffffe74,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)");
        engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0x16);
      }
      uStack_1c = 0x21;
      iStack_24 = this_ptr->light_count;
      iStack_14 = 0;
      if (light_index != -1) {
        iStack_24 = iStack_44;
        iStack_14 = light_index;
      }
      if (iStack_14 < iStack_24) {
        pCStack_28 = pCStack_3c;
        iStack_2c = iStack_40;
        pCStack_30 = pCStack_3c;
        iStack_18 = (int)this_ptr->cameras + iStack_14 * 0x1898 + iStack_20 + -4;
        iVar5 = (int)this_ptr->cameras + iStack_40 + iStack_14 * 0x1898 + -4;
        do {
          iVar6 = iStack_14;
          iVar4 = iStack_20;
          if (this_ptr->lights[iStack_14].light_type == 0) {
            iVar4 = 0;
            if (0 < g_MasterLightCount) {
              pCVar2 = pCStack_34 + iStack_14;
              iVar6 = 0;
              do {
                iVar3 = _strcmp
                                  ((char *)(*(int *)((int)g_CDemonLight_PTR_ARRAY_0203a418 + iVar6)
                                           + 0x40),pCVar2->name);
                if (iVar3 == 0) break;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar4 < g_MasterLightCount);
            }
            if (iVar4 == g_MasterLightCount) {
              g_CHAR_PTR_01d71de0 = "..\\core\\set.cpp";
              g_INT_01d71de4 = 0x36a;
              core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = g_CDemonLight_PTR_ARRAY_0203a418[iVar4];
            if (pCStack_28->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044aa20
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar4 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(unaff_EBP + 0x19b58) = (char)iVar4;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_0044de30
                        (&g_CDemonCameraInstance,light_source,&CStack_54);
              puVar10 = (uint *)(iVar5 + 0x19c58 + (uint)bVar13 * -8);
              *(int *)(iVar5 + 0x19c54) = CStack_54.x_min;
              puVar11 = puVar10 + (uint)bVar13 * -2 + 1;
              puVar8 = (uint *)((int)&CStack_54 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
              *puVar10 = *(uint *)((int)&CStack_54 + (uint)bVar13 * -8 + 4);
              *puVar11 = *puVar8;
              puVar11[(uint)bVar13 * -2 + 1] = puVar8[(uint)bVar13 * -2 + 1];
              if (*(char *)(unaff_EBP + 0x19b58) != '\0') {
                _sprintf(acStack_184,"Light %d, Box : %d,%d,%d,%d");
                iVar4 = iStack_14 + 0xb;
                engine_2d_c_drawText_FUN_00401fe0(acStack_184,0,iStack_14);
                iStack_14 = iVar4;
              }
            }
          }
          else if (pCStack_30->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
            iVar3 = core_setutil_cpp_C3DSLight_isVisible_FUN_00543380(pCStack_38 + iVar6);
            this_ptr->lights[iVar6].visible_flags[iVar4] = (char)iVar3;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)(this_ptr->lights[iVar6].visible_flags + 0xf8);
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name + (int)this_ptr->lights[iVar6].camera_light_bounds;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)&this_ptr->lights[iVar6].camera_light_bounds[0].x_max;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)&this_ptr->lights[iVar6].camera_light_bounds[0].y_min;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
          }
          else {
            this_ptr->lights[iStack_14].visible_flags[iStack_20] = '\0';
          }
          iVar5 = iVar5 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      iVar5 = iStack_20;
      _sprintf(&stack0xfffffe74,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0);
      iVar5 = iVar5 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      pCStack_3c = (CDemonSet *)&pCStack_3c->cameras[0].enabled;
      iStack_40 = iStack_40 + 0x10;
      iStack_20 = iVar5;
    } while (iVar5 < this_ptr->camera_count);
  }
  if (CStack_54.y_min != 0) {
    core_set_cpp_CDemonSet_clearLights_FUN_00537520(this_ptr);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
