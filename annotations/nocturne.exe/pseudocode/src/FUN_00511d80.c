// Name: FUN_00511d80
// Address: 00511d80
// Address Range: [[00511d80, 00512596]]
// Convention: unknown
// Signature: float FUN_00511d80(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00511d80(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  byte *puVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  float local_d8;
  byte local_d4 [4];
  uint local_d0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int aiStack_ac [6];
  uint local_94;
  uint local_90;
  uint local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_58;
  uint local_54;
  uint *local_4c;
  float local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  float *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar14 = 0;
  if (*(int *)(param_5 + 0x19c) != 0) {
    fVar2 = *(float *)(param_5 + 0x100) - *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_5 + 0x104) - *(float *)(param_1 + 0x24);
    fVar3 = *(float *)(param_5 + 0x108) - *(float *)(param_1 + 0x28);
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= _DAT_005a1a88 * _DAT_005a1a88) {
      iVar6 = core_setutil_cpp_C3DSCamera_testSphereInFrustum_FUN_00514980
                        (param_5,param_1 + 0x20,param_6);
      if (iVar6 == 0) {
        return 0.0;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
                (DAT_005ae704,(float *)(param_5 + 0x100));
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
                (DAT_005ae704,*(uint *)(param_5 + 0x140));
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
                (DAT_005ae704,param_5 + 0x10c);
      local_38 = 0x800000ff;
      local_44 = 0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                (DAT_005ae704,param_1 + 0x20);
      local_94 = *(uint *)(param_1 + 0x30);
      local_8c = *(uint *)(param_1 + 0x38);
      local_90 = *(uint *)(param_5 + 0x110);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,&local_94,0);
      iVar6 = 0;
      do {
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar6,param_2);
        iVar9 = iVar6 + 0x30;
        param_2 = param_2 + 0xc;
        uVar1 = *(uint *)(iVar6 + 0x10 + *DAT_005ae704);
        local_38 = local_38 & uVar1;
        local_44 = local_44 | uVar1;
        iVar6 = iVar9;
      } while (iVar9 != 0x180);
      if (((local_38 & 0x80000000) != 0) && ((char)local_38 != '\0')) {
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
        return 0.0;
      }
      iVar9 = 0;
      local_24 = 0;
      iVar6 = param_3;
      do {
        *(int *)((int)aiStack_ac + iVar9) = iVar6;
        iVar9 = iVar9 + 4;
        local_24 = local_24 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar6 != param_3 + 0x1b0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      local_1c = 0;
      do {
        piVar10 = (int *)(*DAT_005ae704 + local_1c);
        iVar6 = piVar10[2];
        if (0 < iVar6) {
          iVar9 = iVar6 + 0x80;
          *piVar10 = (int)(((longlong)*piVar10 * (longlong)iVar9) / (longlong)iVar6);
          piVar10[1] = (int)(((longlong)piVar10[1] * (longlong)iVar9) / (longlong)piVar10[2]);
          piVar10[2] = iVar9;
          engine_matrix_c_projectTransformedPoint_FUN_004cd260(piVar10);
        }
        local_1c = local_1c + 0x30;
      } while (local_1c != 0x180);
      iVar6 = 0;
      local_d8 = 1.0;
      do {
        if ((*(byte *)(*DAT_005ae704 + iVar6 + 0x13) & 0x80) != 0) {
          dVar5 = _DAT_00590bcd;
          if (0 < *(int *)(*DAT_005ae704 + iVar6 + 8)) {
            dVar5 = _DAT_00590bc5;
          }
          local_d8 = local_d8 * (float)dVar5;
        }
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0x180);
      local_28 = 0;
      local_3c = 0;
      local_1c = 0x180;
      if (0 < _DAT_026639ec) {
        local_48 = _DAT_005a1a8c * _DAT_005a1a8c;
        local_30 = 0;
        local_2c = 0x2665930;
        local_4c = (uint *)(&DAT_020875f8 + param_4 * 0x3000);
        local_34 = (float *)(param_5 + 0x100);
        do {
          local_20 = *(int *)(&DAT_026639f0 + local_30);
          fVar2 = *(float *)(local_20 + 0x20) - *local_34;
          fVar4 = *(float *)(local_20 + 0x24) - local_34[1];
          fVar3 = *(float *)(local_20 + 0x28) - local_34[2];
          if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= local_48) {
            core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(local_20);
            local_54 = 0x800000ff;
            local_18 = 0;
            iVar9 = 0;
            local_58 = local_2c;
            iVar6 = 0x180;
            do {
              core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(local_58,&local_88,iVar9);
              local_7c = (int)ROUND(local_88 * _DAT_005a1a70);
              local_78 = (int)ROUND(local_84 * _DAT_005a1a70);
              local_74 = (int)ROUND(local_80 * _DAT_005a1a70);
              wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                        (*DAT_005ae704 + iVar6,&local_7c);
              iVar9 = iVar9 + 1;
              uVar1 = *(uint *)(iVar6 + 0x10 + *DAT_005ae704);
              local_54 = local_54 & uVar1;
              local_18 = local_18 | uVar1;
              iVar6 = iVar6 + 0x30;
            } while (iVar9 < 8);
            core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(local_20);
            if (((local_54 & 0x80000000) == 0) || ((char)local_54 == '\0')) {
              if (local_3c == 0) {
                local_3c = 1;
                puVar8 = local_4c;
                puVar12 = (uint *)&DAT_020845f4;
                for (iVar6 = 0xc00; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar12 = *puVar8;
                  puVar8 = puVar8 + (uint)bVar14 * -2 + 1;
                  puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *(byte *)puVar12 = *(byte *)puVar8;
                  puVar8 = (uint *)((int)puVar8 + (uint)bVar14 * -2 + 1);
                  puVar12 = (uint *)((int)puVar12 + (uint)bVar14 * -2 + 1);
                }
                puVar11 = &DAT_020845f4;
                iVar6 = 0;
                do {
                  *(byte **)(&DAT_01bd4260 + iVar6) = puVar11;
                  iVar6 = iVar6 + 4;
                  puVar11 = puVar11 + 0x100;
                } while (iVar6 != 0xc0);
                engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
              }
              local_d0 = 4;
              engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                        (DAT_005ae704,(local_18 & 0x80000000) != 0);
              local_b4 = 0xe;
              local_bc = 8;
              local_b8 = 0xc;
              local_b0 = 10;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
              local_b0 = 0xd;
              local_bc = 9;
              local_b8 = 0xb;
              local_b4 = 0xf;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
              local_bc = 8;
              local_b8 = 9;
              local_b4 = 0xd;
              local_b0 = 0xc;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
              local_bc = 10;
              local_b8 = 0xe;
              local_b4 = 0xf;
              local_b0 = 0xb;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
              local_bc = 8;
              local_b4 = 0xb;
              local_b8 = 10;
              local_b0 = 9;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
              local_b8 = 0xd;
              local_bc = 0xc;
              local_b4 = 0xf;
              local_b0 = 0xe;
              engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_0045ee60
                        (DAT_005ae704,local_d4);
            }
          }
          local_30 = local_30 + 4;
          local_2c = local_2c + 0x18;
          local_28 = local_28 + 1;
        } while (local_28 < _DAT_026639ec);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      if (local_3c == 0) {
        puVar11 = &DAT_020875f8 + param_4 * 0x3000;
        iVar6 = 0;
        do {
          *(byte **)(&DAT_01bd4260 + iVar6) = puVar11;
          iVar6 = iVar6 + 4;
          puVar11 = puVar11 + 0x100;
        } while (iVar6 != 0xc0);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                (DAT_005ae704,(local_44 & 0x80000000) != 0);
      iVar6 = 0;
      local_40 = 0;
      if (0 < local_24) {
        iVar9 = local_24 * 4;
        do {
          iVar7 = engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_0045f090
                            (DAT_005ae704,*(uint *)((int)aiStack_ac + iVar6));
          iVar6 = iVar6 + 4;
          local_40 = local_40 + iVar7;
        } while (iVar6 < iVar9);
      }
      if (*(int *)(0x01C775EC + 0x1e8) != 0) {
        puVar8 = (uint *)(param_4 * 0x3000 + 0x23755f8);
        iVar6 = 0;
        do {
          iVar7 = iVar6 + 4;
          puVar12 = *(uint **)(&DAT_01bd4260 + iVar6);
          puVar13 = puVar8;
          for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
            puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(byte *)puVar13 = *(byte *)puVar12;
            puVar12 = (uint *)((int)puVar12 + (uint)bVar14 * -2 + 1);
            puVar13 = (uint *)((int)puVar13 + (uint)bVar14 * -2 + 1);
          }
          *(uint **)(&DAT_01bd4260 + iVar6) = puVar8;
          puVar8 = puVar8 + 0x40;
          iVar6 = iVar7;
        } while (iVar7 != 0xc0);
        iVar6 = 0;
        if (0 < local_24) {
          do {
            engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
                      (DAT_005ae704,param_3);
            iVar6 = iVar6 + 1;
            param_3 = param_3 + 0x48;
          } while (iVar6 < local_24);
        }
      }
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
      return (float)local_40 * local_d8;
    }
  }
  return 0.0;
}
