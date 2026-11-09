// Name: core_fire.cpp_FUN_00495ca0
// Address: 00495ca0
// Address Range: [[00495ca0, 004964b3]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_00495ca0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_00495ca0(CVector3f *param_1)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)(param_1 + 7),(CVector3i *)0x0);
  if (*(int *)&param_1[6].field_0x4 == 0) {
    this_ptr = (CKeyFramedModelInstance *)0x1c3e074;
  }
  else if (*(int *)&param_1[6].field_0x4 == 1) {
    this_ptr = (CKeyFramedModelInstance *)0x1c3e1f0;
  }
  else {
    this_ptr = (CKeyFramedModelInstance *)0x1c3e36c;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(this_ptr);
  puVar4 = *(uint **)&pCVar2->field_0x350;
  pCVar6 = &CStack_100;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pCVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CVector3f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  iVar3 = core_box_cpp_FUN_0041a840(&CStack_100,0);
  if (iVar3 != 0) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
              (g_CDemonSetPtr,param_1,(UOrientationVector *)&DAT_0265370c,&CStack_100,&CStack_f4,
               (CMatrix3x3f *)0x0);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(this_ptr,0.0,-1);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  if ((iVar3 != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar3 == 0)
     ) {
    DAT_0062202c = 0x80000;
    _DAT_00622030 = 0xf80000;
    _DAT_0062205c = 0xf80000;
    _DAT_00622060 = 0xf80000;
    _DAT_0062208c = 0xf80000;
    DAT_00622090 = 0x80000;
    _DAT_006220bc = 0x80000;
    _DAT_006220c0 = 0x80000;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
    afStack_b4[2] = -fStack_24;
    uStack_a4 = 0;
    iStack_c4 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    iStack_c0 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
    iStack_bc = (int)ROUND(_DAT_005f64e4 * 0.0);
    afStack_b4[3] = afStack_b4[2];
    fStack_2c = afStack_b4[2];
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_c4);
    afStack_b4[2] = fStack_24;
    uStack_a4 = 0;
    afStack_b4[3] = fStack_2c;
    iStack_a0 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_9c = (int)ROUND(fStack_2c * _DAT_005f64e4);
    iStack_98 = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_a0);
    afStack_b4[2] = fStack_24;
    afStack_b4[3] = fStack_24;
    uStack_a4 = 0;
    iStack_7c = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_78 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_74 = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_7c);
    uStack_a4 = 0;
    afStack_b4[2] = fStack_2c;
    afStack_b4[3] = fStack_24;
    iStack_88 = (int)ROUND(fStack_2c * _DAT_005f64e4);
    iStack_84 = (int)ROUND(fStack_24 * _DAT_005f64e4);
    iStack_80 = (int)ROUND(_DAT_005f64e4 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_88);
    if (*(int *)&param_1[6].field_0x4 == 1) {
      texture = (SMRGLTextureBasic *)&DAT_006151cc;
    }
    else if (*(int *)&param_1[6].field_0x4 == 2) {
      texture = (SMRGLTextureBasic *)&DAT_0061513c;
    }
    else {
      texture = (SMRGLTextureBasic *)&DAT_0061510c;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
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
        fStack_108 = fStack_108 * (float)_DAT_005d5402;
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
        fStack_104 = fStack_104 * (float)_DAT_005d5402;
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
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,pCVar6);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                  (DAT_0060b280,(CVector3i *)&DAT_01c3deb8,(CVector3i *)0x0);
        afStack_b4[2] = -fStack_24 * fStack_104;
        uStack_a4 = 0;
        iStack_dc = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_d8 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_d4 = (int)ROUND(_DAT_005f64e4 * 0.0);
        afStack_b4[3] = afStack_b4[2];
        fStack_20 = afStack_b4[2];
        engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_dc);
        afStack_b4[2] = fStack_24 * fStack_104;
        afStack_b4[3] = fStack_20;
        uStack_a4 = 0;
        iStack_40 = (int)ROUND(afStack_b4[2] * _DAT_005f64e4);
        iStack_3c = (int)ROUND(fStack_20 * _DAT_005f64e4);
        iStack_38 = (int)ROUND(_DAT_005f64e4 * 0.0);
        fStack_2c = afStack_b4[2];
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_40);
        afStack_b4[2] = fStack_2c;
        afStack_b4[3] = fStack_2c;
        uStack_a4 = 0;
        iStack_94 = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_90 = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_8c = (int)ROUND(_DAT_005f64e4 * 0.0);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_94);
        afStack_b4[2] = fStack_20;
        uStack_a4 = 0;
        afStack_b4[3] = fStack_2c;
        iStack_70 = (int)ROUND(fStack_20 * _DAT_005f64e4);
        iStack_6c = (int)ROUND(fStack_2c * _DAT_005f64e4);
        iStack_68 = (int)ROUND(_DAT_005f64e4 * 0.0);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_70);
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
    }
  }
  return;
}
