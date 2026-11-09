// Name: core_fire.cpp_FUN_0049a9f0
// Address: 0049a9f0
// Address Range: [[0049a9f0, 0049ac03]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049a9f0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049a9f0(CVector3f *param_1)

{
  SMRGLHeaderPrimitive aSStack_68 [4];
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&param_1[0xb].field_0x8,(CVector3f *)0x0);
  iStack_28 = (int)ROUND(*(float *)&param_1[0xe].field_0x8 * _DAT_005df8e4);
  iStack_24 = (int)ROUND(*(float *)(param_1 + 0xf) * _DAT_005df8e4);
  iStack_20 = (int)ROUND(*(float *)&param_1[0xf].field_0x4 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_28);
  iStack_1c = (int)ROUND(*(float *)&param_1[0xf].field_0x8 * _DAT_005df8e4);
  iStack_18 = (int)ROUND(*(float *)(param_1 + 0x10) * _DAT_005df8e4);
  iStack_14 = (int)ROUND(*(float *)&param_1[0x10].field_0x4 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_1c);
  iStack_34 = (int)ROUND(*(float *)&param_1[0x10].field_0x8 * _DAT_005df8e4);
  iStack_30 = (int)ROUND(*(float *)(param_1 + 0x11) * _DAT_005df8e4);
  iStack_2c = (int)ROUND(*(float *)&param_1[0x11].field_0x4 * _DAT_005df8e4);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&param_1[5].field_0x8);
  uStack_64 = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (DAT_005f2afc,*(int *)&param_1[5].field_0x4);
  iStack_40 = (int)ROUND(*(float *)param_1 * _DAT_005df8e4);
  iStack_3c = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005df8e4);
  iStack_38 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005df8e4);
  core_set_cpp_CDemonSet_computeLighting_FUN_00538400
            (g_CDemonSetPtr,(CVector3i *)&iStack_40,(CVector3i *)0x0,0,3);
  DAT_0060b02c = *(uint *)&param_1[0xc].field_0x8;
  _DAT_0060b030 = *(uint *)&param_1[0xd].field_0x8;
  _DAT_0060b05c = *(uint *)(param_1 + 0xd);
  _DAT_0060b060 = *(uint *)(param_1 + 0xe);
  _DAT_0060b08c = *(uint *)&param_1[0xd].field_0x4;
  DAT_0060b090 = *(uint *)&param_1[0xe].field_0x4;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,aSStack_68);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
