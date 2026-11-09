// Name: core_fire.cpp_FUN_004a1040
// Address: 004a1040
// Address Range: [[004a1040, 004a13e1]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a1040(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a1040(CVector3f *param_1)

{
  SProjectedVertex *output;
  int iVar1;
  uint extraout_EDX;
  byte bVar2;
  float10 fVar3;
  int aiStackY_1020 [984];
  CVector3i *rotation;
  SMRGLHeaderPrimitive aSStack_a8 [4];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  int aiStack_34 [2];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  int aiStack_1c [4];
  
  bVar2 = 0;
  output = *(SProjectedVertex **)DAT_005f2afc;
  iStack_68 = (int)ROUND(*(float *)param_1 * _DAT_005df8e4);
  iStack_64 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005df8e4);
  iStack_60 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c(output,(CVector3i *)&iStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0
                    (DAT_005f2afc,(SRenderVertex *)output);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1);
  engine_matrix_c_FUN_0046d230(DAT_005f2afc);
  rotation = (CVector3i *)0x0;
  uStack_38 = uStack_20;
  aiStack_34[(uint)bVar2 * -2] = aiStack_1c[(uint)bVar2 * -2];
  aiStack_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)&uStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_50 = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_4c = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_48 = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  iStack_80 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_7c = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_78 = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_74 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_70 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_6c = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  iStack_44 = (int)ROUND(_DAT_005df8e4 * -0.125);
  iStack_40 = (int)ROUND(_DAT_005df8e4 * 0.125);
  iStack_3c = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&iStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fdbdc);
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
  aiStack_1c[2] = 0xffff - _DAT_01c6e24c;
  fVar3 = (float10)aiStack_1c[2] * (float10)*(float *)(param_1 + 3) * (float10)_DAT_005c0978;
  _DAT_0060b05c = 0xd00000;
  DAT_0060b02c = 0x800000;
  _DAT_0060b030 = 0xdc0000;
  _DAT_0060b060 = 0xdc0000;
  _DAT_0060b08c = 0x800000;
  _DAT_0060b0bc = 0x800000;
  DAT_0060b090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  round();
  DAT_0060b040 = (int)ROUND(fVar3);
  iStack_2c = (int)ROUND(*(float *)param_1 * _DAT_005df8e4);
  iStack_28 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005df8e4);
  iStack_24 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005df8e4);
  DAT_0060b070 = DAT_0060b040;
  _DAT_0060b0a0 = DAT_0060b040;
  _DAT_0060b0c0 = extraout_EDX;
  _DAT_0060b0d0 = DAT_0060b040;
  aiStack_1c[2] = DAT_0060b040;
  core_set_cpp_CDemonSet_computeLighting_FUN_00538400
            (g_CDemonSetPtr,(CVector3i *)&iStack_2c,(CVector3i *)&DAT_01c73664,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  uStack_a4 = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,aSStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
