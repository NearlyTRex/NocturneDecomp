// Name: core_fire.cpp_FUN_00497050
// Address: 00497050
// Address Range: [[00497050, 0049724e]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00497050(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00497050(CVector3f *param_1)

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
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&param_1[7].field_0x8,(CVector3f *)0x0);
  iStack_28 = (int)ROUND(*(float *)&param_1[10].field_0x8 * _DAT_005f64e4);
  iStack_24 = (int)ROUND(*(float *)(param_1 + 0xb) * _DAT_005f64e4);
  iStack_20 = (int)ROUND(*(float *)&param_1[0xb].field_0x4 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_28);
  iStack_1c = (int)ROUND(*(float *)&param_1[0xb].field_0x8 * _DAT_005f64e4);
  iStack_18 = (int)ROUND(*(float *)(param_1 + 0xc) * _DAT_005f64e4);
  iStack_14 = (int)ROUND(*(float *)&param_1[0xc].field_0x4 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_1c);
  iStack_34 = (int)ROUND(*(float *)&param_1[0xc].field_0x8 * _DAT_005f64e4);
  iStack_30 = (int)ROUND(*(float *)(param_1 + 0xd) * _DAT_005f64e4);
  iStack_2c = (int)ROUND(*(float *)&param_1[0xd].field_0x4 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_34);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&param_1[5].field_0x8);
  uStack_64 = 3;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_48 = 2;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,*(int *)&param_1[5].field_0x4);
  iStack_40 = (int)ROUND(*(float *)param_1 * _DAT_005f64e4);
  iStack_3c = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005f64e4);
  iStack_38 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005f64e4);
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,(CVector3i *)&iStack_40,(CVector3i *)0x0,0,3);
  DAT_0062202c = *(uint *)&param_1[8].field_0x8;
  _DAT_00622030 = *(uint *)&param_1[9].field_0x8;
  _DAT_0062205c = *(uint *)(param_1 + 9);
  _DAT_00622060 = *(uint *)(param_1 + 10);
  _DAT_0062208c = *(uint *)&param_1[9].field_0x4;
  DAT_00622090 = *(uint *)&param_1[10].field_0x4;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,aSStack_68);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
