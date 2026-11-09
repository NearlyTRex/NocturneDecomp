// Name: core_fire.cpp_FUN_004ae640
// Address: 004ae640
// Address Range: [[004ae640, 004aee53]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004ae640(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004ae640(CVector3f *param_1)

{
  longlong lVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  CKeyFramedModelInstance *this_ptr;
  uint *puVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  byte bVar7;
  float afStackY_10d0 [1004];
  SMRGLTextureBasic *texture;
  float fStack_108;
  float fStack_104;
  CVector3f CStack_100;
  CVector3f CStack_f4;
  float fStack_e8;
  float afStack_e4 [2];
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  float fStack_d0;
  float afStack_cc [2];
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  float fStack_b8;
  float afStack_b4 [4];
  uint uStack_a4;
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
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  float fStack_2c;
  float fStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  fStack_24 = 0.5;
  if (*(int *)&param_1[6].field_0x4 == 0) {
    fStack_24 = 4.0;
  }
  if (*(int *)&param_1[6].field_0x4 == 2) {
    fStack_24 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,(CVector3i *)(param_1 + 7),(CVector3i *)0x0);
  if (*(int *)&param_1[6].field_0x4 == 0) {
    this_ptr = (CKeyFramedModelInstance *)0x1c57234;
  }
  else if (*(int *)&param_1[6].field_0x4 == 1) {
    this_ptr = (CKeyFramedModelInstance *)0x1c573b0;
  }
  else {
    this_ptr = (CKeyFramedModelInstance *)0x1c5752c;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
  puVar4 = *(uint **)&pCVar2->field_0x350;
  pCVar6 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CVector3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_FUN_004207b0(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00551c30
              (g_CDemonSetPtr,param_1,(UOrientationVector *)&DAT_02c8af28,&CStack_100,&CStack_f4,
               (CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(this_ptr,0.0,-1);
  }
  engine_matrix_c_pop_FUN_004839a0();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar3 == 0)
     ) {
    DAT_0062902c = 0x80000;
    _DAT_00629030 = 0xf80000;
    _DAT_0062905c = 0xf80000;
    _DAT_00629060 = 0xf80000;
    _DAT_0062908c = 0xf80000;
    DAT_00629090 = 0x80000;
    _DAT_006290bc = 0x80000;
    _DAT_006290c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
              (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    iStack_c4 = (int)ROUND(afStack_b4[2] * _DAT_005fff94);
    iStack_c0 = (int)ROUND(afStack_b4[2] * _DAT_005fff94);
    iStack_bc = (int)ROUND(_DAT_005fff94 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    iStack_a0 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_9c = (int)ROUND(fStack_2c * _DAT_005fff94);
    iStack_98 = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_a0);
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    iStack_7c = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_78 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_74 = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_7c);
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    iStack_88 = (int)ROUND(fStack_2c * _DAT_005fff94);
    iStack_84 = (int)ROUND(fStack_24 * _DAT_005fff94);
    iStack_80 = (int)ROUND(_DAT_005fff94 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_88);
    if (*(int *)&param_1[6].field_0x4 == 1) {
      texture = (SMRGLTextureBasic *)&DAT_0061c4ac;
    }
    else if (*(int *)&param_1[6].field_0x4 == 2) {
      texture = (SMRGLTextureBasic *)&DAT_0061c41c;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_0061c3ec;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
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
    if ((*(int *)&param_1[6].field_0x4 != 1) && (*(int *)&param_1[6].field_0x4 != 2)) {
      pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 4);
      fStack_d0 = *(float *)param_1;
      afStack_cc[(uint)bVar7 * -2] = *pfVar5;
      afStack_cc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
      pfVar5 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x10);
      fStack_e8 = *(float *)(param_1 + 1);
      afStack_e4[(uint)bVar7 * -2] = *pfVar5;
      afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
      iStack_18 = 0;
      fStack_104 = 1.0;
      fStack_108 = 0.1;
      pCStack_1c = param_1 + 2;
      do {
        fStack_108 = fStack_108 * (float)_DAT_005df244;
        fStack_64 = *(float *)pCStack_1c * fStack_108;
        afStack_60[0] = *(float *)&pCStack_1c->field_0x4 * fStack_108;
        afStack_60[1] = *(float *)&pCStack_1c->field_0x8 * fStack_108;
        afStack_60[2] = *(float *)pCStack_1c * fStack_108;
        afStack_60[(uint)bVar7 * -2 + 3] = afStack_60[(uint)bVar7 * -2];
        afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        fStack_e8 = fStack_e8 - afStack_60[2];
        fStack_4c = fStack_e8 * fStack_108;
        afStack_e4[0] = afStack_e4[0] - afStack_60[3];
        afStack_e4[1] = afStack_e4[1] - fStack_50;
        fStack_104 = fStack_104 * (float)_DAT_005df244;
        pCVar6 = (CVector3f *)&fStack_d0;
        fStack_48 = afStack_e4[0] * fStack_108;
        fStack_44 = afStack_e4[1] * fStack_108;
        fStack_b8 = fStack_4c;
        afStack_b4[(uint)bVar7 * -2] = afStack_60[(uint)bVar7 * -2 + 6];
        afStack_b4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_60[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        fStack_d0 = fStack_d0 - fStack_b8;
        afStack_cc[0] = afStack_cc[0] - afStack_b4[0];
        afStack_cc[1] = afStack_cc[1] - afStack_b4[1];
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,pCVar6);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
                  (DAT_00612560,(CVector3i *)&DAT_01c57078,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        iStack_dc = (int)ROUND(afStack_b4[2] * _DAT_005fff94);
        iStack_d8 = (int)ROUND(afStack_b4[2] * _DAT_005fff94);
        iStack_d4 = (int)ROUND(_DAT_005fff94 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        iStack_40 = (int)ROUND(afStack_b4[2] * _DAT_005fff94);
        iStack_3c = (int)ROUND(fStack_20 * _DAT_005fff94);
        iStack_38 = (int)ROUND(_DAT_005fff94 * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        iStack_94 = (int)ROUND(fStack_2c * _DAT_005fff94);
        iStack_90 = (int)ROUND(fStack_2c * _DAT_005fff94);
        iStack_8c = (int)ROUND(_DAT_005fff94 * 0.0);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        iStack_70 = (int)ROUND(fStack_20 * _DAT_005fff94);
        iStack_6c = (int)ROUND(fStack_2c * _DAT_005fff94);
        iStack_68 = (int)ROUND(_DAT_005fff94 * 0.0);
        engine_special_cpp_FUN_00580173
                  ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_70);
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
    }
  }
  return;
}
