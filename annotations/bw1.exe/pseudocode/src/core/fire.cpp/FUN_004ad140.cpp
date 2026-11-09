// Name: core_fire.cpp_FUN_004ad140
// Address: 004ad140
// Address Range: [[004ad140, 004ad84b]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004ad140(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004ad140(CVector3f *param_1)

{
  SProjectedVertex *output;
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10d8 [1013];
  CVector3f *world_position;
  SMRGLTextureBasic *texture;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  byte auStack_e4 [4];
  float afStack_e0 [6];
  float afStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  float afStack_74 [2];
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
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar4 = 0;
  output = *(SProjectedVertex **)DAT_00612560;
  iStack_b4 = (int)ROUND(*(float *)param_1 * _DAT_005fff94);
  iStack_b0 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005fff94);
  iStack_ac = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005fff94);
  fStack_24 = 0.4;
  engine_special_cpp_FUN_0058043c(output,(CVector3i *)&iStack_b4);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                    (DAT_00612560,(SRenderVertex *)output);
  if (iVar2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
  afStack_e0[2] = -0.4;
  afStack_e0[3] = -0.4;
  afStack_e0[4] = 0.0;
  iStack_a8 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_a4 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_a0 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_a8);
  afStack_e0[2] = 0.4;
  afStack_e0[3] = -0.4;
  afStack_e0[4] = 0.0;
  iStack_48 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_44 = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_40 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_48);
  afStack_e0[2] = 0.4;
  afStack_e0[3] = 0.4;
  afStack_e0[4] = 0.0;
  iStack_3c = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_38 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_34 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_3c);
  afStack_e0[2] = -0.4;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = 0.4;
  iStack_6c = (int)ROUND(_DAT_005fff94 * -0.4);
  iStack_68 = (int)ROUND(_DAT_005fff94 * 0.4);
  iStack_64 = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_6c);
  switch(*(uint *)&param_1[6].field_0x4) {
  case 0:
    texture = (SMRGLTextureBasic *)&DAT_0061c3ec;
    break;
  case 1:
    texture = (SMRGLTextureBasic *)&DAT_0061c404;
    break;
  case 2:
    texture = (SMRGLTextureBasic *)&DAT_0061c41c;
    break;
  case 3:
    texture = (SMRGLTextureBasic *)&DAT_0061c434;
    break;
  default:
    goto switchD_004ad845_default;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
switchD_004ad845_default:
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
  lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c51cac);
  DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  DAT_00629034 = 0xffff;
  DAT_00629038 = 0xffff;
  DAT_0062903c = 0xffff;
  DAT_00629064 = 0xffff;
  DAT_00629068 = 0xffff;
  DAT_0062906c = 0xffff;
  DAT_00629094 = 0xffff;
  DAT_00629098 = 0xffff;
  DAT_0062909c = 0xffff;
  DAT_006290c4 = 0xffff;
  DAT_006290c8 = 0xffff;
  DAT_006290cc = 0xffff;
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290d0 = DAT_00629040;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_matrix_c_pop_FUN_004839a0();
  pfVar3 = (float *)((int)param_1 + (uint)bVar4 * -8 + 4);
  auStack_e4 = (byte  [4])*(float *)param_1;
  afStack_e0[(uint)bVar4 * -2] = *pfVar3;
  afStack_e0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  iStack_18 = 0;
  pfVar3 = (float *)((int)param_1 + (uint)bVar4 * -8 + 0x10);
  fStack_78 = *(float *)(param_1 + 1);
  afStack_74[(uint)bVar4 * -2] = *pfVar3;
  afStack_74[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  pCStack_1c = param_1 + 2;
  fStack_f4 = 1.0;
  fStack_f8 = 0.025;
  do {
    fStack_f8 = fStack_f8 * (float)_DAT_005df1ec;
    afStack_e0[5] = *(float *)pCStack_1c * fStack_f8;
    afStack_c8[0] = *(float *)&pCStack_1c->field_0x4 * fStack_f8;
    afStack_c8[1] = *(float *)&pCStack_1c->field_0x8 * fStack_f8;
    fStack_9c = *(float *)pCStack_1c * fStack_f8;
    afStack_98[(uint)bVar4 * -2] = afStack_c8[(uint)bVar4 * -2];
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_78 = fStack_78 - fStack_9c;
    fStack_f0 = fStack_78 * fStack_f8;
    afStack_74[0] = afStack_74[0] - afStack_98[0];
    afStack_74[1] = afStack_74[1] - afStack_98[1];
    fStack_f4 = fStack_f4 * (float)_DAT_005df1ec;
    world_position = (CVector3f *)auStack_e4;
    fStack_ec = afStack_74[0] * fStack_f8;
    fStack_e8 = afStack_74[1] * fStack_f8;
    afStack_98[2] = fStack_f0;
    afStack_98[(uint)bVar4 * -2 + 3] = *(float *)((int)&stack0xffffff14 + (uint)bVar4 * -8);
    afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&stack0xffffff18 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    auStack_e4 = (byte  [4])((float)auStack_e4 - afStack_98[2]);
    afStack_e0[0] = afStack_e0[0] - afStack_98[3];
    afStack_e0[1] = afStack_e0[1] - fStack_88;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
              (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
    afStack_e0[2] = -fStack_24 * fStack_f4;
    afStack_e0[4] = 0.0;
    iStack_c0 = (int)ROUND(afStack_e0[2] * _DAT_005fff94);
    iStack_bc = (int)ROUND(afStack_e0[2] * _DAT_005fff94);
    iStack_b8 = (int)ROUND(_DAT_005fff94 * 0.0);
    afStack_e0[3] = afStack_e0[2];
    fStack_20 = afStack_e0[2];
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_c0);
    afStack_e0[2] = fStack_24 * fStack_f4;
    afStack_e0[3] = fStack_20;
    afStack_e0[4] = 0.0;
    iStack_84 = (int)ROUND(afStack_e0[2] * _DAT_005fff94);
    iStack_80 = (int)ROUND(fStack_20 * _DAT_005fff94);
    iStack_7c = (int)ROUND(_DAT_005fff94 * 0.0);
    fStack_28 = afStack_e0[2];
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_84);
    afStack_e0[2] = fStack_28;
    afStack_e0[3] = fStack_28;
    afStack_e0[4] = 0.0;
    iStack_54 = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_50 = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_4c = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_54);
    afStack_e0[2] = fStack_20;
    afStack_e0[4] = 0.0;
    afStack_e0[3] = fStack_28;
    iStack_60 = (int)ROUND(fStack_20 * _DAT_005fff94);
    iStack_5c = (int)ROUND(fStack_28 * _DAT_005fff94);
    iStack_58 = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_60);
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
    lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c51cac);
    DAT_00629040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_00629034 = 0xffff;
    DAT_00629038 = 0xffff;
    DAT_0062903c = 0xffff;
    DAT_00629064 = 0xffff;
    DAT_00629068 = 0xffff;
    DAT_0062906c = 0xffff;
    DAT_00629094 = 0xffff;
    DAT_00629098 = 0xffff;
    DAT_0062909c = 0xffff;
    DAT_006290c4 = 0xffff;
    DAT_006290c8 = 0xffff;
    DAT_006290cc = 0xffff;
    DAT_00629070 = DAT_00629040;
    _DAT_006290a0 = DAT_00629040;
    _DAT_006290d0 = DAT_00629040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
              (DAT_00612560,(SMRGLHeaderPrimitive *)0x1c57090);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
    engine_matrix_c_pop_FUN_004839a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
