// Name: core_set.cpp_FUN_0054e69e
// Address: 0054e69e
// Address Range: [[0054e69e, 0054ec56]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0054e69e(CDemonSet *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_set_cpp_FUN_0054e69e(CDemonSet *param_1,int param_2)

{
  char *str2;
  CDemonLight *light_source;
  byte uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  byte *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  byte bVar10;
  uint auStackY_1838 [1437];
  CDemonCamera *pCStack_18c;
  CDemonLight *pCStack_188;
  uint auStack_8c [6];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint auStack_58 [4];
  byte *puStack_48;
  int iStack_44;
  int iStack_40;
  CDemonSet *pCStack_3c;
  byte *puStack_38;
  byte *puStack_34;
  CDemonSet *pCStack_30;
  int iStack_2c;
  CDemonSet *pCStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  byte *puStack_18;
  int iStack_14;
  
  bVar10 = 0;
  auStack_58[3] = 0;
  bVar9 = _DAT_01fe4cb4 == 0;
  if (bVar9) {
    core_set_cpp_CDemonSet_initScene_FUN_0054ec60(param_1);
  }
  auStack_58[3] = (uint)bVar9;
  _DAT_01fe55bc = 0;
  _DAT_01fe5c88 = 0;
  iStack_20 = 0;
  _DAT_01fe4e38 = 0;
  if (0 < *(int *)param_1) {
    puStack_38 = &param_1->field_0x19a30;
    iStack_44 = param_2 + 1;
    puStack_48 = &param_1->field_0x4;
    iStack_40 = 0;
    pCStack_3c = param_1;
    puStack_34 = puStack_38;
    do {
      if (*(int *)&pCStack_3c->field_0x144 == 0) {
        puVar4 = puStack_48 + iStack_20 * 0x1a4;
        core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(puVar4);
        core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,0);
        g_CDemonRaytraceInstance._0_4_ = 1;
        core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0(param_1,9999.9,0);
        core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
        core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044ef30(&g_CDemonCameraInstance);
        core_dcamera_cpp_FUN_00454cc0();
        puVar6 = auStack_8c;
        puVar7 = &uStack_74;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        }
        if ((uint *)(puVar4 + 0x17c) != &uStack_74) {
          *(uint *)(puVar4 + 0x17c) = uStack_74;
          *(uint *)(puVar4 + 0x180) = uStack_70;
          *(uint *)(puVar4 + 0x184) = uStack_6c;
        }
        if ((uint *)(puVar4 + 0x188) != &uStack_68) {
          *(uint *)(puVar4 + 0x188) = uStack_68;
          *(uint *)(puVar4 + 0x18c) = uStack_64;
          *(uint *)(puVar4 + 400) = uStack_60;
        }
        FUN_005bfb40
                  (&pCStack_18c,"Camera box (%7.2f, %7.2f, %7.2f) - (%7.2f, %7.2f, %7.2f)",
                   (double)*(float *)&pCStack_3c->field_0x180,
                   (double)*(float *)&pCStack_3c->field_0x184,
                   (double)*(float *)&pCStack_3c->field_0x188,
                   (double)*(float *)&pCStack_3c->field_0x18c,
                   (double)*(float *)&pCStack_3c->field_0x190,
                   (double)*(float *)&pCStack_3c->field_0x194);
        engine_2d_c_drawText_FUN_00401fe0((char *)&pCStack_18c,0,0x16);
      }
      iStack_1c = 0x21;
      iStack_24 = *(int *)&param_1->field_0x19a2c;
      iStack_14 = 0;
      if (param_2 != -1) {
        iStack_24 = iStack_44;
        iStack_14 = param_2;
      }
      if (iStack_14 < iStack_24) {
        pCStack_28 = pCStack_3c;
        iStack_2c = iStack_40;
        pCStack_30 = pCStack_3c;
        puStack_18 = &param_1->field_0x0 + iStack_14 * 0x1898 + iStack_20;
        puVar4 = &param_1->field_0x0 + iStack_40 + iStack_14 * 0x1898;
        do {
          iVar5 = iStack_14 * 0x1898;
          if (*(int *)(&param_1->field_0x19a30 + iVar5) == 0) {
            iVar3 = 0;
            if (0 < _DAT_01fe4cb4) {
              str2 = puStack_34 + iVar5 + 4;
              iVar5 = 0;
              do {
                iVar2 = _strcmp
                                  ((char *)(*(int *)(&DAT_01fe4cb8 + iVar5) + 0x40),str2);
                if (iVar2 == 0) break;
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 4;
              } while (iVar3 < _DAT_01fe4cb4);
            }
            if (iVar3 == _DAT_01fe4cb4) {
              _DAT_01d1d400 = "..\\core\\set.cpp";
              _DAT_01d1d404 = 0x35c;
              core_main_c_FUN_005030e0();
            }
            light_source = *(CDemonLight **)(&DAT_01fe4cb8 + iVar3 * 4);
            if (*(int *)&pCStack_28->field_0x144 == 0) {
              core_dcamera_cpp_CDemonCamera_precomputeLight_FUN_0044e8e0
                        (&g_CDemonCameraInstance,light_source,(CRect *)0x0);
              iVar5 = core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20
                                (&g_CDemonCameraInstance,light_source);
              pCStack_18c = &g_CDemonCameraInstance;
              *(char *)(unaff_EBP + 0x19b58) = (char)iVar5;
              pCStack_188 = light_source;
              core_dcamera_cpp_FUN_00451cf0();
              puVar8 = (uint *)(puVar4 + (uint)bVar10 * -8 + 0x19c58);
              *(uint *)(puVar4 + 0x19c54) = uStack_5c;
              *puVar8 = auStack_58[(uint)bVar10 * -2];
              puVar8[(uint)bVar10 * -2 + 1] = auStack_58[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
                   (auStack_58 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
              if (puStack_18[0x19b58] != '\0') {
                FUN_005bfb40();
                iVar5 = iStack_1c + 0xb;
                engine_2d_c_drawText_FUN_00401fe0((char *)&pCStack_18c,0,iStack_1c);
                iStack_1c = iVar5;
              }
            }
          }
          else {
            iVar3 = iStack_20 + iVar5;
            if (*(int *)&pCStack_30->field_0x144 == 0) {
              core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044ceb0(&g_CDemonCameraInstance,1);
              uVar1 = core_setutil_cpp_FUN_0055d9c0();
              (&param_1->field_0x19b58)[iVar3] = uVar1;
              core_dcamera_cpp_CDemonCamera_endScene_FUN_0044d610(&g_CDemonCameraInstance,0);
              *(uint *)(&param_1->field_0x19c54 + iStack_2c + iVar5) = 0;
              *(uint *)(&param_1->field_0x19c58 + iStack_2c + iVar5) = 0;
              *(uint *)(&param_1->field_0x19c5c + iStack_2c + iVar5) = 0;
              *(uint *)(&param_1->field_0x19c60 + iStack_2c + iVar5) = 0;
            }
            else {
              (&param_1->field_0x19b58)[iVar3] = 0;
            }
          }
          puVar4 = puVar4 + 0x1898;
          puStack_18 = puStack_18 + 0x1898;
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < iStack_24);
      }
      iVar5 = iStack_20;
      FUN_005bfb40();
      engine_2d_c_drawText_FUN_00401fe0((char *)&pCStack_18c,0,0);
      iVar5 = iVar5 + 1;
      wincore_wddvmem_cpp_FUN_005acff0();
      pCStack_3c = (CDemonSet *)&pCStack_3c->field_0x1a4;
      iStack_40 = iStack_40 + 0x10;
      iStack_20 = iVar5;
    } while (iVar5 < *(int *)param_1);
  }
  if (auStack_58[3] != 0) {
    core_set_cpp_FUN_00551b90(param_1);
    g_CDemonRaytraceInstance._0_4_ = 0;
    return;
  }
  g_CDemonRaytraceInstance._0_4_ = 0;
  return;
}
