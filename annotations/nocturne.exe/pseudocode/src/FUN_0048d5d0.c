// Name: FUN_0048d5d0
// Address: 0048d5d0
// Address Range: [[0048d5d0, 0048df0e]]
// Convention: unknown
// Signature: undefined4 FUN_0048d5d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048d5d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  int aiStackY_1090 [975];
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  byte auStack_118 [4];
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  byte local_f0 [24];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int aiStack_a8 [4];
  int iStack_98;
  int iStack_94;
  byte auStack_90 [12];
  uint uStack_84;
  float fStack_80;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int aiStack_2c [5];
  float fStack_18;
  int iStack_14;
  int iStack_10;
  float fStack_c;
  
  bVar5 = 0;
  if (((*(int *)(param_1 + 0x1ac) != 0) || (*(int *)(0x01CC9450 + 4) != 0)) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(), iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    if (*(int *)(param_1 + 0x290) != 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_f0,0);
      uVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar3);
      *(uint *)(param_1 + 0x288) = uVar3;
    }
    if ((*(int *)(param_1 + 0x288) != 0) &&
       (1.0 < SQRT(*(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                   *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150) +
                   *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154)) *
              *(float *)(param_1 + 0x1a4))) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(0x01E57284,param_1 + 0x160);
    }
    if ((*(int *)(param_1 + 0x288) != 0) && (*(int *)(param_1 + 0x1a0) != 3)) {
      FUN_00460d90(DAT_005ae704);
      aiStack_a8[0] = iStack_30;
      aiStack_a8[(uint)bVar5 * -2 + 1] = aiStack_2c[(uint)bVar5 * -2];
      aiStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           aiStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      aiStack_a8[0] = 0;
      aiStack_a8[1] = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(DAT_005ae704,aiStack_a8,0)
      ;
      iStack_14 = 1;
      uStack_c0 = 0;
      iStack_bc = 0;
      uStack_b8 = 0;
      FUN_00460d90(DAT_005ae704);
      aiStack_a8[0] = aiStack_2c[2];
      aiStack_a8[(uint)bVar5 * -2 + 1] = aiStack_2c[(uint)bVar5 * -2 + 3];
      aiStack_a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
           aiStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      if ((0x2000 < aiStack_a8[0]) || (aiStack_a8[0] < -0x2000)) {
        iStack_14 = 3;
      }
      iVar2 = 0;
      if (0 < iStack_14) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
                    (DAT_005ae704,&uStack_c0,0);
          fStack_3c = *(float *)(param_1 + 0x150) * 5.2220990168285998e-315._0_4_;
          fStack_38 = 0.0;
          fStack_34 = 0.0;
          iStack_6c = (int)ROUND(fStack_3c * _DAT_0059d560);
          iStack_68 = (int)ROUND(_DAT_0059d560 * 0.0);
          iStack_64 = (int)ROUND(_DAT_0059d560 * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&iStack_6c);
          fStack_38 = *(float *)(param_1 + 0x154);
          iStack_54 = (int)ROUND(fStack_3c * _DAT_0059d560);
          iStack_50 = (int)ROUND(fStack_38 * _DAT_0059d560);
          iStack_4c = (int)ROUND(fStack_34 * _DAT_0059d560);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&iStack_54);
          fStack_3c = -fStack_3c;
          iStack_cc = (int)ROUND(fStack_3c * _DAT_0059d560);
          iStack_c8 = (int)ROUND(fStack_38 * _DAT_0059d560);
          iStack_c4 = (int)ROUND(fStack_34 * _DAT_0059d560);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&iStack_cc);
          fStack_38 = 0.0;
          iStack_48 = (int)ROUND(fStack_3c * _DAT_0059d560);
          iStack_44 = (int)ROUND(_DAT_0059d560 * 0.0);
          iStack_40 = (int)ROUND(fStack_34 * _DAT_0059d560);
          wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&iStack_48);
          core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670
                    (_DAT_007f7370,param_1 + 0x20,0);
          DAT_005c5040 = 0xffff - _DAT_01c038f4;
          if (iStack_14 == 3) {
            DAT_005c5040 = DAT_005c5040 / 2;
          }
          if (*(int *)(param_1 + 0x1a0) == 4) {
            DAT_005c5040 = (int)((DAT_005c5040 + (DAT_005c5040 >> 0x1f) * -4) -
                                (uint)((DAT_005c5040 >> 0x1f) << 1 < 0)) >> 2;
          }
          if (*(int *)(param_1 + 0x1a0) == 1) {
            DAT_005c5040 = DAT_005c5040 / 2;
          }
          DAT_005c5034 = 0xffff;
          DAT_005c5038 = 0xffff;
          DAT_005c503c = 0xffff;
          DAT_005c5064 = 0xffff;
          DAT_005c5068 = 0xffff;
          DAT_005c506c = 0xffff;
          DAT_005c5094 = 0xffff;
          DAT_005c5098 = 0xffff;
          DAT_005c509c = 0xffff;
          DAT_005c50c4 = 0xffff;
          DAT_005c50c8 = 0xffff;
          DAT_005c50cc = 0xffff;
          if (*(int *)(param_1 + 0x28c) == 0) {
            DAT_005c502c = 0x80000;
            _DAT_005c505c = 0x80000;
            _DAT_005c508c = 0xf80000;
            _DAT_005c50bc = 0xf80000;
          }
          else {
            DAT_005c502c = 0xf80000;
            _DAT_005c505c = 0xf80000;
            _DAT_005c508c = 0x80000;
            _DAT_005c50bc = 0x80000;
          }
          _DAT_005c50c0 = 0xf80000;
          _DAT_005c5090 = 0x80000;
          _DAT_005c5060 = 0x80000;
          _DAT_005c5030 = 0xf80000;
          uVar3 = 0x48da11;
          DAT_005c5070 = DAT_005c5040;
          _DAT_005c50a0 = DAT_005c5040;
          _DAT_005c50d0 = DAT_005c5040;
          fVar6 = (float10)round((float10)*(float *)(param_1 + 0x15c));
          iStack_10 = (int)ROUND(fVar6);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                    (DAT_005ae704,
                     &DAT_005b8e00 + (iStack_10 % 8) * 0x18 + *(int *)(param_1 + 0x1a0) * 0xc0,uVar3
                    );
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
          uStack_140 = 4;
          uStack_130 = 0;
          uStack_134 = 0;
          uStack_138 = 0;
          uStack_13c = 0;
          uStack_124 = 2;
          uStack_12c = 0;
          uStack_128 = 1;
          uStack_120 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                    (DAT_005ae704,&stack0xfffffebc);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
          iVar2 = iVar2 + 1;
          iStack_bc = iStack_bc + 0x2aaa;
        } while (iVar2 < (int)fStack_18);
      }
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    if ((*(int *)(param_1 + 0x1a0) == 1) &&
       (fStack_18 = *(float *)(param_1 + 0x154) * (float)2,
       *(int *)(param_1 + 0x288) != 0)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                (DAT_005ae704,auStack_90);
      fStack_80 = *(float *)(param_1 + 0x154) * (float)0.5;
      uStack_84 = 0;
      uStack_7c = 0;
      fStack_c = fStack_80;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                (DAT_005ae704,auStack_90,&uStack_84);
      fStack_c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f7ae148,0x3f828f5c);
      fStack_b4 = fStack_c * fStack_18;
      fStack_ac = 0.0;
      iStack_d8 = (int)ROUND(fStack_b4 * _DAT_0059d560);
      iStack_d4 = (int)ROUND(fStack_b4 * _DAT_0059d560);
      iStack_d0 = (int)ROUND(_DAT_0059d560 * 0.0);
      fStack_b0 = fStack_b4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&iStack_d8);
      fStack_b4 = -fStack_b4;
      iStack_78 = (int)ROUND(fStack_b4 * _DAT_0059d560);
      iStack_74 = (int)ROUND(fStack_b0 * _DAT_0059d560);
      iStack_70 = (int)ROUND(fStack_ac * _DAT_0059d560);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&iStack_78);
      fStack_b0 = -fStack_b0;
      aiStack_a8[3] = (int)ROUND(fStack_b4 * _DAT_0059d560);
      iStack_98 = (int)ROUND(fStack_b0 * _DAT_0059d560);
      iStack_94 = (int)ROUND(fStack_ac * _DAT_0059d560);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,aiStack_a8 + 3);
      fStack_b4 = -fStack_b4;
      iStack_60 = (int)ROUND(fStack_b4 * _DAT_0059d560);
      iStack_5c = (int)ROUND(fStack_b0 * _DAT_0059d560);
      iStack_58 = (int)ROUND(fStack_ac * _DAT_0059d560);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&iStack_60);
      iStack_10 = 0;
      do {
        piVar4 = (int *)(*DAT_005ae704 + iStack_10);
        iVar2 = piVar4[2];
        if (0x200 < iVar2) {
          iVar1 = iVar2 + -0x100;
          *piVar4 = (int)(((longlong)*piVar4 * (longlong)iVar1) / (longlong)iVar2);
          piVar4[1] = (int)(((longlong)piVar4[1] * (longlong)iVar1) / (longlong)iVar2);
          piVar4[2] = iVar1;
          engine_matrix_c_projectTransformedPoint_FUN_004cd260(piVar4);
        }
        piVar4 = DAT_005ae704;
        iStack_10 = iStack_10 + 0x30;
      } while (iStack_10 != 0xc0);
      *(uint *)(*DAT_005ae704 + 0x2c) = 0x4000;
      *(uint *)(*piVar4 + 0x5c) = 0x4000;
      *(uint *)(*piVar4 + 0x8c) = 0x4000;
      *(uint *)(*piVar4 + 0xbc) = 0x4000;
      *(uint *)(*piVar4 + 0x18) = 0x80000;
      *(uint *)(*piVar4 + 0x1c) = 0xf80000;
      *(uint *)(*piVar4 + 0x48) = 0xf80000;
      *(uint *)(*piVar4 + 0x4c) = 0xf80000;
      *(uint *)(*piVar4 + 0x78) = 0xf80000;
      *(uint *)(*piVar4 + 0x7c) = 0x80000;
      *(uint *)(*piVar4 + 0xa8) = 0x80000;
      *(uint *)(*piVar4 + 0xac) = 0x80000;
      uStack_114 = 4;
      uStack_104 = 0;
      uStack_108 = 0;
      uStack_10c = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      uStack_f4 = 3;
      uStack_f8 = 2;
      uStack_fc = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(piVar4,&DAT_005b8de8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
                (DAT_005ae704,auStack_118,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
    }
    return *(uint *)(param_1 + 0x288);
  }
  return 0;
}
