// Name: core_fire.cpp_FUN_00495150
// Address: 00495150
// Address Range: [[00495150, 004958fe]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00495150(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00495150(CVector3f *param_1)

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
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_6c;
  float afStack_68 [2];
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar4 = 0;
  fStack_20 = *(float *)&param_1[6].field_0x8;
  output = *(SProjectedVertex **)DAT_0060b280;
  iStack_3c = (int)ROUND(*(float *)param_1 * _DAT_005f64e4);
  iStack_38 = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005f64e4);
  iStack_34 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(output,(CVector3i *)&iStack_3c);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                    (DAT_0060b280,(SRenderVertex *)output);
  if (iVar2 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
  fStack_78 = -fStack_20;
  uStack_70 = 0;
  iStack_a8 = (int)ROUND(fStack_78 * _DAT_005f64e4);
  iStack_a4 = (int)ROUND(fStack_78 * _DAT_005f64e4);
  iStack_a0 = (int)ROUND(_DAT_005f64e4 * 0.0);
  fStack_74 = fStack_78;
  fStack_24 = fStack_78;
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_a8);
  fStack_78 = fStack_20;
  fStack_74 = fStack_24;
  uStack_70 = 0;
  iStack_b4 = (int)ROUND(fStack_20 * _DAT_005f64e4);
  iStack_b0 = (int)ROUND(fStack_24 * _DAT_005f64e4);
  iStack_ac = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_b4);
  fStack_78 = fStack_20;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_90 = (int)ROUND(fStack_20 * _DAT_005f64e4);
  iStack_8c = (int)ROUND(fStack_20 * _DAT_005f64e4);
  iStack_88 = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_90);
  fStack_78 = fStack_24;
  fStack_74 = fStack_20;
  uStack_70 = 0;
  iStack_60 = (int)ROUND(fStack_24 * _DAT_005f64e4);
  iStack_5c = (int)ROUND(fStack_20 * _DAT_005f64e4);
  iStack_58 = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_60);
  switch(*(uint *)(param_1 + 7)) {
  case 0:
    texture = (SMRGLTextureBasic *)&DAT_0061516c;
    break;
  case 1:
    texture = (SMRGLTextureBasic *)&DAT_00615184;
    break;
  case 2:
    texture = (SMRGLTextureBasic *)&DAT_0061519c;
    break;
  case 3:
    texture = (SMRGLTextureBasic *)&DAT_006151b4;
    break;
  default:
    goto switchD_004958f8_default;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
switchD_004958f8_default:
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c38aec);
  DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  DAT_00622034 = 0xffff;
  DAT_00622038 = 0xffff;
  DAT_0062203c = 0xffff;
  DAT_00622064 = 0xffff;
  DAT_00622068 = 0xffff;
  DAT_0062206c = 0xffff;
  DAT_00622094 = 0xffff;
  DAT_00622098 = 0xffff;
  DAT_0062209c = 0xffff;
  DAT_006220c4 = 0xffff;
  DAT_006220c8 = 0xffff;
  DAT_006220cc = 0xffff;
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220d0 = DAT_00622040;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  pfVar3 = (float *)((int)param_1 + (uint)bVar4 * -8 + 4);
  fStack_54 = *(float *)param_1;
  afStack_50[(uint)bVar4 * -2] = *pfVar3;
  afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  fStack_f8 = 1.0;
  fStack_f4 = 0.025;
  pfVar3 = (float *)((int)param_1 + (uint)bVar4 * -8 + 0x10);
  fStack_d8 = *(float *)(param_1 + 1);
  afStack_d4[(uint)bVar4 * -2] = *pfVar3;
  afStack_d4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] = pfVar3[(uint)bVar4 * -2 + 1];
  pCStack_14 = param_1 + 2;
  iStack_18 = 0;
  do {
    fStack_f4 = fStack_f4 * (float)_DAT_005d53ca;
    afStack_50[2] = *(float *)pCStack_14 * fStack_f4;
    afStack_50[3] = *(float *)&pCStack_14->field_0x4 * fStack_f4;
    fStack_40 = *(float *)&pCStack_14->field_0x8 * fStack_f4;
    fStack_f0 = *(float *)pCStack_14 * fStack_f4;
    *(float *)((int)&stack0xffffff14 + (uint)bVar4 * -8) = afStack_50[(uint)bVar4 * -2 + 3];
    *(float *)((int)&stack0xffffff18 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_d8 = fStack_d8 - fStack_f0;
    fStack_6c = fStack_d8 * fStack_f4;
    afStack_d4[0] = afStack_d4[0] - fStack_ec;
    afStack_d4[1] = afStack_d4[1] - fStack_e8;
    world_position = (CVector3f *)&fStack_54;
    afStack_68[0] = afStack_d4[0] * fStack_f4;
    afStack_68[1] = afStack_d4[1] * fStack_f4;
    afStack_d4[2] = fStack_6c;
    afStack_d4[(uint)bVar4 * -2 + 3] = afStack_68[(uint)bVar4 * -2];
    afStack_d4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    fStack_54 = fStack_54 - afStack_d4[2];
    afStack_50[0] = afStack_50[0] - afStack_d4[3];
    afStack_50[1] = afStack_50[1] - fStack_c4;
    fStack_f8 = fStack_f8 * (float)_DAT_005d53ca;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
    fStack_78 = -fStack_20 * fStack_f8;
    uStack_70 = 0;
    iStack_c0 = (int)ROUND(fStack_78 * _DAT_005f64e4);
    iStack_bc = (int)ROUND(fStack_78 * _DAT_005f64e4);
    iStack_b8 = (int)ROUND(_DAT_005f64e4 * 0.0);
    fStack_74 = fStack_78;
    fStack_1c = fStack_78;
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_c0);
    fStack_78 = fStack_20 * fStack_f8;
    fStack_74 = fStack_1c;
    uStack_70 = 0;
    iStack_9c = (int)ROUND(fStack_78 * _DAT_005f64e4);
    iStack_98 = (int)ROUND(fStack_1c * _DAT_005f64e4);
    iStack_94 = (int)ROUND(_DAT_005f64e4 * 0.0);
    fStack_24 = fStack_78;
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_9c);
    uStack_70 = 0;
    fStack_78 = fStack_24;
    fStack_74 = fStack_24;
    iStack_e4 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_e0 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_dc = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_e4);
    fStack_78 = fStack_1c;
    uStack_70 = 0;
    fStack_74 = fStack_24;
    iStack_84 = (int)ROUND(fStack_1c * _DAT_005f64e4);
    iStack_80 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_7c = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_84);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
    lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c38aec);
    DAT_00622040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_00622034 = 0xffff;
    DAT_00622038 = 0xffff;
    DAT_0062203c = 0xffff;
    DAT_00622064 = 0xffff;
    DAT_00622068 = 0xffff;
    DAT_0062206c = 0xffff;
    DAT_00622094 = 0xffff;
    DAT_00622098 = 0xffff;
    DAT_0062209c = 0xffff;
    DAT_006220c4 = 0xffff;
    DAT_006220c8 = 0xffff;
    DAT_006220cc = 0xffff;
    DAT_00622070 = DAT_00622040;
    _DAT_006220a0 = DAT_00622040;
    _DAT_006220d0 = DAT_00622040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
              (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1c3ded0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
    engine_matrix_c_pop_FUN_0046b4a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
