// Name: core_set.cpp_FUN_00533e60
// Address: 00533e60
// Address Range: [[00533e60, 00534416]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00533e60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_set_cpp_FUN_00533e60(void)

{
  char *pcVar1;
  CDemonLight *light_source;
  C3DSLight *pCVar2;
  int iVar3;
  int iVar4;
  C3DSCamera *this_ptr;
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
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
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
  bVar12 = _DAT_0203a414 == 0;
  if (bVar12) {
    core_set_cpp_CDemonSet_initScene_FUN_00534420(in_stack_00000004);
  }
  CStack_54.y_min = (int)bVar12;
  _DAT_0203ad1c = 0;
  _DAT_0203b3e8 = 0;
  iStack_20 = 0;
  _DAT_0203a598 = 0;
  if (0 < in_stack_00000004->camera_count) {
    pCStack_38 = in_stack_00000004->lights;
    iStack_44 = in_stack_00000008 + 1;
    CStack_54.y_max = (int)in_stack_00000004->cameras;
    iStack_40 = 0;
    pCStack_3c = in_stack_00000004;
    pCStack_34 = pCStack_38;
    do {
      if (pCStack_3c->cameras[0].is_panning == 0) {
        this_ptr = (C3DSCamera *)(CStack_54.y_max + iStack_20 * 0x1a4);
        core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(this_ptr,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(in_stack_00000004,9999.9,0);
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
        if (&this_ptr->box != (CBoundingBox3D *)&fStack_74) {
          (this_ptr->box).min.x = fStack_74;
          (this_ptr->box).min.y = fStack_70;
          (this_ptr->box).min.z = fStack_6c;
        }
        pCVar7 = &(this_ptr->box).max;
        if (pCVar7 != (CVector3f *)&fStack_68) {
          pCVar7->x = fStack_68;
          (this_ptr->box).max.y = fStack_64;
          (this_ptr->box).max.z = fStack_60;
        }
        _sprintf(&stack0xfffffe74,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)");
        engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0x16);
      }
      uStack_1c = 0x21;
      iStack_24 = in_stack_00000004->light_count;
      iStack_14 = 0;
      if (in_stack_00000008 != -1) {
        iStack_24 = iStack_44;
        iStack_14 = in_stack_00000008;
      }
      if (iStack_14 < iStack_24) {
        pCStack_28 = pCStack_3c;
        iStack_2c = iStack_40;
        pCStack_30 = pCStack_3c;
        iStack_18 = (int)in_stack_00000004->cameras + iStack_14 * 0x1898 + iStack_20 + -4;
        iVar5 = (int)in_stack_00000004->cameras + iStack_40 + iStack_14 * 0x1898 + -4;
        do {
          iVar6 = iStack_14;
          iVar4 = iStack_20;
          if (in_stack_00000004->lights[iStack_14].light_type == 0) {
            iVar4 = 0;
            if (0 < _DAT_0203a414) {
              pCVar2 = pCStack_34 + iStack_14;
              iVar6 = 0;
              do {
                iVar3 = _strcmp
                                  ((char *)(*(int *)(&DAT_0203a418 + iVar6) + 0x40),pCVar2->name);
                if (iVar3 == 0) break;
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar4 < _DAT_0203a414);
            }
            if (iVar4 == _DAT_0203a414) {
              _DAT_01d71de0 = "..\\core\\set.cpp";
              _DAT_01d71de4 = 0x36a;
              core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonSet::precomuputeLightVisibility - Unable to find light in master list");
            }
            light_source = *(CDemonLight **)(&DAT_0203a418 + iVar4 * 4);
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
            in_stack_00000004->lights[iVar6].visible_flags[iVar4] = (char)iVar3;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)(in_stack_00000004->lights[iVar6].visible_flags + 0xf8);
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)in_stack_00000004->lights[iVar6].camera_light_bounds;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)&in_stack_00000004->lights[iVar6].camera_light_bounds[0].x_max;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pCStack_28->cameras[0].name +
                     (int)&in_stack_00000004->lights[iVar6].camera_light_bounds[0].y_min;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
          }
          else {
            in_stack_00000004->lights[iStack_14].visible_flags[iStack_20] = '\0';
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
    } while (iVar5 < in_stack_00000004->camera_count);
  }
  if (CStack_54.y_min != 0) {
    core_set_cpp_CDemonSet_clearLights_FUN_00537520(in_stack_00000004);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
