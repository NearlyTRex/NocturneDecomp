// Name: core_set.cpp_FUN_00533e5e
// Address: 00533e5e
// Address Range: [[00533e5e, 00534416]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00533e5e(CDemonSet *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_00533e5e(CDemonSet *param_1,int param_2)

{
  CDemonLight *light_source;
  C3DSLight *pCVar1;
  int iVar2;
  int iVar3;
  C3DSCamera *pCVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  uint auStackY_1838 [1437];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
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
  
  bVar10 = 0;
  uStack_4c = 0;
  bVar9 = _DAT_0203a414 == 0;
  if (bVar9) {
    core_set_cpp_CDemonSet_initScene_FUN_00534420(param_1);
  }
  uStack_4c = (uint)bVar9;
  _DAT_0203ad1c = 0;
  _DAT_0203b3e8 = 0;
  iStack_20 = 0;
  _DAT_0203a598 = 0;
  if (0 < param_1->camera_count) {
    pCStack_38 = param_1->lights;
    iStack_44 = param_2 + 1;
    pCStack_48 = param_1->cameras;
    iStack_40 = 0;
    pCStack_3c = param_1;
    pCStack_34 = pCStack_38;
    do {
      if (*(int *)&pCStack_3c->cameras[0].field_0x140 == 0) {
        pCVar4 = pCStack_48 + iStack_20;
        core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(pCVar4);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance.rendering_mode = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_00533b80(param_1,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(&g_CDemonCameraInstance);
        core_dcamera_cpp_FUN_00450e10();
        puVar8 = (uint *)&stack0xffffff74;
        puVar7 = &stack0xffffff8c;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        }
        if ((uint *)&pCVar4->field_0x17c != &stack0xffffff8c) {
          *(uint *)&pCVar4->field_0x17c = uStack_74;
          *(uint *)&pCVar4->field_0x180 = uStack_70;
          *(uint *)&pCVar4->field_0x184 = uStack_6c;
        }
        if ((uint *)&pCVar4->field_0x188 != &stack0xffffff98) {
          *(uint *)&pCVar4->field_0x188 = uStack_68;
          *(uint *)&pCVar4->field_0x18c = uStack_64;
          *(uint *)&pCVar4->field_0x190 = uStack_60;
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
        iVar5 = (int)param_1->cameras + iStack_40 + iStack_14 * 0x1898 + -4;
        do {
          iVar6 = iStack_14;
          iVar3 = iStack_20;
          if (*(int *)(param_1->lights + iStack_14) == 0) {
            iVar3 = 0;
            if (0 < _DAT_0203a414) {
              pCVar1 = pCStack_34 + iStack_14;
              iVar6 = 0;
              do {
                iVar2 = _strcmp
                                  ((char *)(*(int *)(&DAT_0203a418 + iVar6) + 0x40),
                                   &pCVar1->field_0x4);
                if (iVar2 == 0) break;
                iVar3 = iVar3 + 1;
                iVar6 = iVar6 + 4;
              } while (iVar3 < _DAT_0203a414);
            }
            if (iVar3 == _DAT_0203a414) {
              _DAT_01d71de0 = "..\\core\\set.cpp";
              _DAT_01d71de4 = 0x36a;
              core_main_c_FUN_004e4330();
            }
            light_source = *(CDemonLight **)(&DAT_0203a418 + iVar3 * 4);
            if (*(int *)&pCStack_28->cameras[0].field_0x140 == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044aa20
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar3 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_0044dd60
                                (&g_CDemonCameraInstance,light_source);
              *(char *)(unaff_EBP + 0x19b58) = (char)iVar3;
              core_dcamera_cpp_FUN_0044de30();
              puVar8 = (uint *)(iVar5 + 0x19c58 + (uint)bVar10 * -8);
              *(uint *)(iVar5 + 0x19c54) = uStack_5c;
              puVar7 = puVar8 + (uint)bVar10 * -2 + 1;
              *puVar8 = *(uint *)((int)&stack0xffffffa8 + (uint)bVar10 * 0xfffffffe * 4);
              *puVar7 = *(uint *)(&stack0xffffffac + (uint)bVar10 * -8 + (uint)bVar10 * -8);
              puVar7[(uint)bVar10 * -2 + 1] =
                   *(uint *)
                    ((int)(&stack0xffffffac + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                    ((uint)bVar10 * -2 + 1) * 4);
              if (*(char *)(iStack_18 + 0x19b58) != '\0') {
                _sprintf(&stack0xfffffe74,"Light %d, Box : %d,%d,%d,%d");
                iVar3 = iStack_1c + 0xb;
                engine_2d_c_drawText_FUN_00401fe0(&stack0xfffffe74,0,iStack_1c);
                iStack_1c = iVar3;
              }
            }
          }
          else if (*(int *)&pCStack_30->cameras[0].field_0x140 == 0) {
            core_dcamera_cpp_CDemonCamera_beginScene_FUN_00448ff0(&g_CDemonCameraInstance,1);
            iVar2 = core_setutil_cpp_FUN_00543380(pCStack_38 + iVar6);
            (&param_1->lights[iVar6].field_0x128)[iVar3] = (char)iVar2;
            core_dcamera_cpp_CDemonCamera_endScene_FUN_00449750(&g_CDemonCameraInstance,0);
            *(uint *)
             (&pCStack_28->cameras[0].field_0x0 + (int)&param_1->lights[iVar6].field_0x220) = 0;
            *(uint *)
             (&pCStack_28->cameras[0].field_0x0 + (int)&param_1->lights[iVar6].field_0x224) = 0;
            *(uint *)
             (&pCStack_28->cameras[0].field_0x0 + (int)&param_1->lights[iVar6].field_0x228) = 0;
            *(uint *)
             (&pCStack_28->cameras[0].field_0x0 + (int)&param_1->lights[iVar6].field_0x22c) = 0;
          }
          else {
            (&param_1->lights[iStack_14].field_0x128)[iStack_20] = 0;
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
      pCStack_3c = (CDemonSet *)&pCStack_3c->cameras[0].field_0x1a0;
      iStack_40 = iStack_40 + 0x10;
      iStack_20 = iVar5;
    } while (iVar5 < param_1->camera_count);
  }
  if (uStack_4c != 0) {
    core_set_cpp_CDemonSet_clearLights_FUN_00537520(param_1);
    g_CDemonRaytraceInstance.rendering_mode = 0;
    return;
  }
  g_CDemonRaytraceInstance.rendering_mode = 0;
  return;
}
