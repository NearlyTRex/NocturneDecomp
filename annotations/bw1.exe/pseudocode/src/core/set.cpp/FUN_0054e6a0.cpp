// Name: core_set.cpp_FUN_0054e6a0
// Address: 0054e6a0
// Address Range: [[0054e6a0, 0054ec56]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0054e6a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_set_cpp_FUN_0054e6a0(void)

{
  CVector3f *pCVar1;
  char *pcVar2;
  CDemonLight *light_source;
  C3DSLight *pCVar3;
  int iVar4;
  int iVar5;
  C3DSCamera *this_ptr;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  byte bVar14;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  uint auStackY_1830 [1435];
  char acStack_184 [248];
  float afStack_8c [6];
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
  
  bVar14 = 0;
  CStack_54.y_min = 0;
  bVar13 = _DAT_01fe4cb4 == 0;
  if (bVar13) {
    core_set_cpp_CDemonSet_initScene_FUN_0054ec60(in_stack_00000004);
  }
  CStack_54.y_min = (int)bVar13;
  _DAT_01fe55bc = 0;
  _DAT_01fe5c88 = 0;
  iStack_20 = 0;
  _DAT_01fe4e38 = 0;
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
        core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(this_ptr,&g_CDemonCameraInstance);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(in_stack_00000004,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(&g_CDemonCameraInstance);
        core_dcamera_cpp_FUN_00454cc0();
        pfVar8 = afStack_8c;
        pfVar10 = &fStack_74;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar14 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
        }
        if (&this_ptr->box != (CBoundingBox3D *)&fStack_74) {
          (this_ptr->box).min.x = fStack_74;
          (this_ptr->box).min.y = fStack_70;
          (this_ptr->box).min.z = fStack_6c;
        }
        pCVar1 = &(this_ptr->box).max;
        if (pCVar1 != (CVector3f *)&fStack_68) {
          pCVar1->x = fStack_68;
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
        iVar6 = (int)in_stack_00000004->cameras + iStack_40 + iStack_14 * 0x1898 + -4;
        do {
          iVar7 = iStack_14;
          iVar5 = iStack_20;
          if (in_stack_00000004->lights[iStack_14].light_type == 0) {
            iVar5 = 0;
            if (0 < _DAT_01fe4cb4) {
              pCVar3 = pCStack_34 + iStack_14;
              iVar7 = 0;
              do {
                iVar4 = _strcmp
                                  ((char *)(*(int *)(&DAT_01fe4cb8 + iVar7) + 0x40),pCVar3->name);
                if (iVar4 == 0) break;
                iVar5 = iVar5 + 1;
                iVar7 = iVar7 + 4;
              } while (iVar5 < _DAT_01fe4cb4);
            }
            if (iVar5 == _DAT_01fe4cb4) {
              _DAT_01d1d400 = "..\\core\\set.cpp";
              _DAT_01d1d404 = 0x35c;
              core_main_c_FUN_005030e0();
            }
            light_source = *(CDemonLight **)(&DAT_01fe4cb8 + iVar5 * 4);
            if (pCStack_28->cameras[0].is_panning == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar5 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(unaff_EBP + 0x19b58) = (char)iVar5;
              core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0
                        (&g_CDemonCameraInstance,light_source,&CStack_54);
              puVar11 = (uint *)(iVar6 + 0x19c58 + (uint)bVar14 * -8);
              *(int *)(iVar6 + 0x19c54) = CStack_54.x_min;
              puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
              puVar9 = (uint *)((int)&CStack_54 + (uint)bVar14 * -8 + (uint)bVar14 * -8 + 8);
              *puVar11 = *(uint *)((int)&CStack_54 + (uint)bVar14 * -8 + 4);
              *puVar12 = *puVar9;
              puVar12[(uint)bVar14 * -2 + 1] = puVar9[(uint)bVar14 * -2 + 1];
              if (*(char *)(unaff_EBP + 0x19b58) != '\0') {
                _sprintf(acStack_184,"Light %d, Box : %d,%d,%d,%d");
                iVar5 = iStack_14 + 0xb;
                engine_2d_c_drawText_FUN_00401fe0(acStack_184,0,iStack_14);
                iStack_14 = iVar5;
              }
            }
          }
          else if (pCStack_30->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
            iVar4 = core_setutil_cpp_C3DSLight_isVisible_FUN_0055d9c0(pCStack_38 + iVar7);
            in_stack_00000004->lights[iVar7].visible_flags[iVar5] = (char)iVar4;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)(in_stack_00000004->lights[iVar7].visible_flags + 0xf8);
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)in_stack_00000004->lights[iVar7].camera_light_bounds;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)&in_stack_00000004->lights[iVar7].camera_light_bounds[0].x_max;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)&in_stack_00000004->lights[iVar7].camera_light_bounds[0].y_min;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
          }
          else {
            in_stack_00000004->lights[iStack_14].visible_flags[iStack_20] = '\0';
          }
          iVar6 = iVar6 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      iVar6 = iStack_20;
      _sprintf(&stack0xfffffe74,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0);
      iVar6 = iVar6 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      pCStack_3c = (CDemonSet *)&pCStack_3c->cameras[0].enabled;
      iStack_40 = iStack_40 + 0x10;
      iStack_20 = iVar6;
    } while (iVar6 < in_stack_00000004->camera_count);
  }
  if (CStack_54.y_min != 0) {
    core_set_cpp_CDemonSet_clearLights_FUN_00551b90(in_stack_00000004);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
