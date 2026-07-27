// Name: core_fire.cpp_CRainDrop_render_FUN_00489d00
// Address: 00489d00
// Address Range: [[00489d00, 0048a0a0]]
// Convention: unknown
// Signature: void core_fire_cpp_CRainDrop_render_FUN_00489d00(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CRainDrop_render_FUN_00489d00(float *param_1)

{
  int iVar1;
  byte bVar2;
  float10 fVar3;
  int aiStackY_1020 [983];
  uint uVar4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int iStack_30;
  int local_2c;
  int local_28;
  uint local_20;
  int iStack_18;
  int local_14;
  int local_10;
  
  bVar2 = 0;
  local_74 = (int)ROUND(*param_1 * 256.0f);
  local_70 = (int)ROUND(param_1[1] * 256.0f);
  local_6c = (int)ROUND(param_1[2] * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25(*DAT_005ae704);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(DAT_005ae704);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_FUN_00460d90(DAT_005ae704);
  uVar4 = 0;
  local_20 = local_38;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * 0xfffffffe * 4);
  *(int *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       (&stack0xffffffd0)[(uint)bVar2 * -2 + (uint)bVar2 * -2];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
            (DAT_005ae704,&stack0xffffffe0,uVar4);
  local_5c = 0xbe000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_68 = (int)ROUND(256.0f * -0.125);
  local_64 = (int)ROUND(256.0f * -0.125);
  local_60 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&stack0xffffff98);
  local_5c = 0x3e000000;
  local_58 = 0xbe000000;
  local_54 = 0;
  local_80 = (int)ROUND(256.0f * 0.125);
  local_7c = (int)ROUND(256.0f * -0.125);
  local_78 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&stack0xffffff80);
  local_5c = 0x3e000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_44 = (int)ROUND(256.0f * 0.125);
  local_40 = (int)ROUND(256.0f * 0.125);
  local_3c = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&stack0xffffffbc);
  local_5c = 0xbe000000;
  local_58 = 0x3e000000;
  local_54 = 0;
  local_50 = (int)ROUND(256.0f * -0.125);
  local_4c = (int)ROUND(256.0f * 0.125);
  local_48 = (int)ROUND(256.0f * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&stack0xffffffb0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005b8bbc);
  core_dcamera_cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00447670(_DAT_007f7370,param_1,0);
  local_14 = 0xffff - _DAT_01c038f4;
  _DAT_005c5030 = 0xdc0000;
  _DAT_005c505c = 0xd00000;
  _DAT_005c5060 = 0xdc0000;
  DAT_005c502c = 0x800000;
  _DAT_005c508c = 0x800000;
  _DAT_005c50bc = 0x800000;
  _DAT_005c5090 = 0x900000;
  uVar4 = 0x489fa3;
  local_10 = local_14;
  fVar3 = (float10)round
                             ((float10)local_14 * (float10)param_1[6] * (float10)4);
  DAT_005c5040 = (int)ROUND(fVar3);
  _DAT_005c50c0 = 0x900000;
  iStack_30 = (int)ROUND(*param_1 * 256.0f);
  local_2c = (int)ROUND(param_1[1] * 256.0f);
  local_28 = (int)ROUND(param_1[2] * 256.0f);
  DAT_005c5070 = DAT_005c5040;
  _DAT_005c50a0 = DAT_005c5040;
  _DAT_005c50d0 = DAT_005c5040;
  iStack_18 = DAT_005c5040;
  core_set_cpp_CDemonSet_computeLighting_FUN_0050bb50
            (0x01E57284,&stack0xffffffd0,&DAT_01c08d14,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1,uVar4);
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_94 = 0;
  local_88 = 3;
  local_a8 = 4;
  local_90 = 1;
  local_8c = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (DAT_005ae704,&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0,uVar4);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
