// Name: core_set.cpp_FUN_0054e69e
// Address: 0054e69e
// Address Range: [[0054e69e, 0054ec56]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0054e69e(CDemonSet *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0054e69e(CDemonSet *param_1,int param_2)

{
  CVector3f *pCVar1;
  char *pcVar2;
  CDemonLight *light_source;
  C3DSLight *pCVar3;
  int iVar4;
  int iVar5;
  C3DSCamera *pCVar6;
  int unaff_EBP;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  byte bVar14;
  float afStackY_1838 [1437];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  uint uStack_4c;
  C3DSCamera *pCStack_48;
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
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar14 = 0;
  uStack_4c = 0;
  bVar13 = _DAT_01fe4cb4 == 0;
  if (bVar13) {
    core_set_cpp_CDemonSet_initScene_FUN_0054ec60(param_1);
  }
  uStack_4c = (uint)bVar13;
  _DAT_01fe55bc = 0;
  _DAT_01fe5c88 = 0;
  iStack_20 = 0;
  _DAT_01fe4e38 = 0;
  if (0 < param_1->camera_count) {
    pCStack_38 = param_1->lights;
    iStack_44 = param_2 + 1;
    pCStack_48 = param_1->cameras;
    iStack_40 = 0;
    pCStack_3c = param_1;
    pCStack_34 = pCStack_38;
    do {
      if (pCStack_3c->cameras[0].is_panning == 0) {
        pCVar6 = pCStack_48 + iStack_20;
        core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(pCVar6);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(param_1,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(&g_CDemonCameraInstance);
        core_dcamera_cpp_FUN_00454cc0();
        pfVar9 = (float *)&stack0xffffff74;
        pfVar10 = &stack0xffffff8c;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar10 = *pfVar9;
          pfVar9 = pfVar9 + (uint)bVar14 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
        }
        if (&pCVar6->box != (CBoundingBox3D *)&stack0xffffff8c) {
          (pCVar6->box).min.x = fStack_74;
          (pCVar6->box).min.y = fStack_70;
          (pCVar6->box).min.z = fStack_6c;
        }
        pCVar1 = &(pCVar6->box).max;
        if (pCVar1 != (CVector3f *)&stack0xffffff98) {
          pCVar1->x = fStack_68;
          (pCVar6->box).max.y = fStack_64;
          (pCVar6->box).max.z = fStack_60;
        }
        _sprintf(&stack0xfffffe74,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)");
        engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0x16);
      }
      iStack_1c = 0x21;
      iStack_24 = param_1->light_count;
      iStack_14 = 0;
      if (param_2 != -1) {
        iStack_24 = iStack_44;
        iStack_14 = param_2;
      }
      if (iStack_14 < iStack_24) {
        pCStack_28 = pCStack_3c;
        iStack_2c = iStack_40;
        pCStack_30 = pCStack_3c;
        iStack_18 = (int)param_1->cameras + iStack_14 * 0x1898 + iStack_20 + -4;
        iVar7 = (int)param_1->cameras + iStack_40 + iStack_14 * 0x1898 + -4;
        do {
          iVar8 = iStack_14;
          iVar5 = iStack_20;
          if (param_1->lights[iStack_14].light_type == 0) {
            iVar5 = 0;
            if (0 < _DAT_01fe4cb4) {
              pCVar3 = pCStack_34 + iStack_14;
              iVar8 = 0;
              do {
                iVar4 = _strcmp
                                  ((char *)(*(int *)(&DAT_01fe4cb8 + iVar8) + 0x40),pCVar3->name);
                if (iVar4 == 0) break;
                iVar5 = iVar5 + 1;
                iVar8 = iVar8 + 4;
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
              core_dcamera_cpp_FUN_00451cf0();
              puVar11 = (uint *)(iVar7 + 0x19c58 + (uint)bVar14 * -8);
              *(uint *)(iVar7 + 0x19c54) = uStack_5c;
              puVar12 = puVar11 + (uint)bVar14 * -2 + 1;
              *puVar11 = *(uint *)((int)&stack0xffffffa8 + (uint)bVar14 * 0xfffffffe * 4);
              *puVar12 = *(uint *)(&stack0xffffffac + (uint)bVar14 * -8 + (uint)bVar14 * -8);
              puVar12[(uint)bVar14 * -2 + 1] =
                   *(uint *)
                    ((int)(&stack0xffffffac + (uint)bVar14 * -8 + (uint)bVar14 * -8) +
                    ((uint)bVar14 * -2 + 1) * 4);
              if (*(char *)(iStack_18 + 0x19b58) != '\0') {
                _sprintf(&stack0xfffffe74,"Light %d, Box : %d,%d,%d,%d");
                iVar5 = iStack_1c + 0xb;
                engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,iStack_1c);
                iStack_1c = iVar5;
              }
            }
          }
          else if (pCStack_30->cameras[0].is_panning == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
            iVar4 = core_setutil_cpp_FUN_0055d9c0(pCStack_38 + iVar8);
            param_1->lights[iVar8].visible_flags[iVar5] = (char)iVar4;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)(param_1->lights[iVar8].visible_flags + 0xf8);
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name + (int)param_1->lights[iVar8].camera_light_bounds;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)&param_1->lights[iVar8].camera_light_bounds[0].x_max;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2 = pCStack_28->cameras[0].name +
                     (int)&param_1->lights[iVar8].camera_light_bounds[0].y_min;
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
          }
          else {
            param_1->lights[iStack_14].visible_flags[iStack_20] = '\0';
          }
          iVar7 = iVar7 + 0x1898;
          iStack_18 = iStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      iVar7 = iStack_20;
      _sprintf(&stack0xfffffe74,"Precomputing lights from camera : %d");
      engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,0);
      iVar7 = iVar7 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      pCStack_3c = (CDemonSet *)&pCStack_3c->cameras[0].enabled;
      iStack_40 = iStack_40 + 0x10;
      iStack_20 = iVar7;
    } while (iVar7 < param_1->camera_count);
  }
  if (uStack_4c != 0) {
    core_set_cpp_CDemonSet_clearLights_FUN_00551b90(param_1);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
