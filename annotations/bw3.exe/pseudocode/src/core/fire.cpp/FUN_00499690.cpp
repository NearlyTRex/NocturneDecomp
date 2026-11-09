// Name: core_fire.cpp_FUN_00499690
// Address: 00499690
// Address Range: [[00499690, 00499ea3]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00499690(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00499690(CVector3f *param_1)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)(param_1 + 7),(CVector3i *)0x0);
  if (*(int *)&param_1[6].field_0x4 == 0) {
    this_ptr = (CKeyFramedModelInstance *)0x1c73814;
  }
  else if (*(int *)&param_1[6].field_0x4 == 1) {
    this_ptr = (CKeyFramedModelInstance *)0x1c73990;
  }
  else {
    this_ptr = (CKeyFramedModelInstance *)0x1c73b0c;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr);
  puVar4 = *(uint **)&pCVar2->field_0x350;
  pCVar6 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CVector3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_FUN_0041daf0(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_005375c0
              (g_CDemonSetPtr,param_1,(UOrientationVector *)&DAT_02cfd900,&CStack_100,&CStack_f4,
               (CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(this_ptr,0.0,-1);
  }
  engine_matrix_c_pop_FUN_0046d080();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc), iVar3 == 0)
     ) {
    DAT_0060b02c = 0x80000;
    _DAT_0060b030 = 0xf80000;
    _DAT_0060b05c = 0xf80000;
    _DAT_0060b060 = 0xf80000;
    _DAT_0060b08c = 0xf80000;
    DAT_0060b090 = 0x80000;
    _DAT_0060b0bc = 0x80000;
    _DAT_0060b0c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    iStack_c4 = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
    iStack_c0 = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
    iStack_bc = (int)ROUND(_DAT_005df8e4 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    iStack_a0 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_9c = (int)ROUND(fStack_2c * _DAT_005df8e4);
    iStack_98 = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_a0);
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    iStack_7c = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_78 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_74 = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_7c);
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    iStack_88 = (int)ROUND(fStack_2c * _DAT_005df8e4);
    iStack_84 = (int)ROUND(fStack_24 * _DAT_005df8e4);
    iStack_80 = (int)ROUND(_DAT_005df8e4 * 0.0);
    engine_special_cpp_FUN_005632a3
              ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&iStack_88);
    if (*(int *)&param_1[6].field_0x4 == 1) {
      texture = (SMRGLTextureBasic *)&DAT_005fca9c;
    }
    else if (*(int *)&param_1[6].field_0x4 == 2) {
      texture = (SMRGLTextureBasic *)&DAT_005fc9dc;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_005fc9ac;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c6e24c);
    DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_0060b034 = 0xffff;
    DAT_0060b038 = 0xffff;
    DAT_0060b03c = 0xffff;
    DAT_0060b064 = 0xffff;
    DAT_0060b068 = 0xffff;
    DAT_0060b06c = 0xffff;
    _DAT_0060b094 = 0xffff;
    _DAT_0060b098 = 0xffff;
    _DAT_0060b09c = 0xffff;
    _DAT_0060b0c4 = 0xffff;
    _DAT_0060b0c8 = 0xffff;
    _DAT_0060b0cc = 0xffff;
    DAT_0060b070 = DAT_0060b040;
    _DAT_0060b0a0 = DAT_0060b040;
    _DAT_0060b0d0 = DAT_0060b040;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
    engine_matrix_c_pop_FUN_0046d080();
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
        fStack_108 = fStack_108 * (float)_DAT_005c0580;
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
        fStack_104 = fStack_104 * (float)_DAT_005c0580;
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
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,pCVar6);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                  (DAT_005f2afc,(CVector3i *)&DAT_01c73658,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        iStack_dc = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        iStack_d8 = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        iStack_d4 = (int)ROUND(_DAT_005df8e4 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_FUN_005632a3(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&iStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        iStack_40 = (int)ROUND(afStack_b4[2] * _DAT_005df8e4);
        iStack_3c = (int)ROUND(fStack_20 * _DAT_005df8e4);
        iStack_38 = (int)ROUND(_DAT_005df8e4 * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&iStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        iStack_94 = (int)ROUND(fStack_2c * _DAT_005df8e4);
        iStack_90 = (int)ROUND(fStack_2c * _DAT_005df8e4);
        iStack_8c = (int)ROUND(_DAT_005df8e4 * 0.0);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&iStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        iStack_70 = (int)ROUND(fStack_20 * _DAT_005df8e4);
        iStack_6c = (int)ROUND(fStack_2c * _DAT_005df8e4);
        iStack_68 = (int)ROUND(_DAT_005df8e4 * 0.0);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&iStack_70);
        (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
        lVar1 = (longlong)*(int *)&param_1[5].field_0x4 * (longlong)(0xffff - _DAT_01c6e24c);
        DAT_0060b040 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        DAT_0060b034 = 0xffff;
        DAT_0060b038 = 0xffff;
        DAT_0060b03c = 0xffff;
        DAT_0060b064 = 0xffff;
        DAT_0060b068 = 0xffff;
        DAT_0060b06c = 0xffff;
        _DAT_0060b094 = 0xffff;
        _DAT_0060b098 = 0xffff;
        _DAT_0060b09c = 0xffff;
        _DAT_0060b0c4 = 0xffff;
        _DAT_0060b0c8 = 0xffff;
        _DAT_0060b0cc = 0xffff;
        DAT_0060b070 = DAT_0060b040;
        _DAT_0060b0a0 = DAT_0060b040;
        _DAT_0060b0d0 = DAT_0060b040;
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
                  (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1c73670);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
        engine_matrix_c_pop_FUN_0046d080();
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 3);
    }
  }
  return;
}
