// Name: core_gore.cpp_FUN_004c7580
// Address: 004c7580
// Address Range: [[004c7580, 004c7d91]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c7580(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c7580(CVector3f *param_1)

{
  SProjectedVertex *output;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10d4 [1000];
  CVector3f *world_position;
  float fStack_118;
  float fStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  float fStack_ec;
  float afStack_e8 [5];
  byte auStack_d4 [4];
  float afStack_d0 [4];
  float fStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  float afStack_a0 [2];
  int iStack_98;
  int iStack_94;
  int iStack_90;
  float fStack_8c;
  float afStack_88 [2];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float afStack_70 [2];
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int *piStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar6 = 0;
  output = *(SProjectedVertex **)DAT_0060b280;
  iStack_110 = (int)ROUND(*(float *)param_1 * _DAT_005f7ba8);
  iStack_10c = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005f7ba8);
  iStack_108 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005f7ba8);
  engine_special_cpp_FUN_0055d9ec(output,(CVector3i *)&iStack_110);
  if (((byte)output[0x13] & 0x80) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&DAT_01cb82b0,(CVector3i *)0x0);
  afStack_e8[2] = -0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = -0.1;
  iStack_80 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_7c = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_78 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_80);
  afStack_e8[2] = 0.1;
  afStack_e8[3] = -0.1;
  afStack_e8[4] = 0.0;
  iStack_98 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_94 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_90 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_98);
  afStack_e8[2] = 0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = 0.1;
  iStack_5c = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_58 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_54 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_5c);
  afStack_e8[2] = -0.1;
  afStack_e8[3] = 0.1;
  afStack_e8[4] = 0.0;
  iStack_f8 = (int)ROUND(_DAT_005f7ba8 * -0.1);
  iStack_f4 = (int)ROUND(_DAT_005f7ba8 * 0.1);
  iStack_f0 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_f8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006167f0);
  _DAT_0062205c = (*(uint *)&param_1[5].field_0x8 & 3) * 0x400000;
  iVar4 = (*(int *)&param_1[5].field_0x8 >> 2 & 3U) * 0x400000;
  DAT_0062202c = _DAT_0062205c + 0x80000;
  _DAT_00622030 = iVar4 + 0x80000;
  _DAT_0062205c = _DAT_0062205c + 0x380000;
  DAT_00622090 = iVar4 + 0x380000;
  iStack_b0 = (int)ROUND(*(float *)param_1 * _DAT_005f7ba8);
  iStack_ac = (int)ROUND(*(float *)&param_1->field_0x4 * _DAT_005f7ba8);
  iStack_a8 = (int)ROUND(*(float *)&param_1->field_0x8 * _DAT_005f7ba8);
  _DAT_00622060 = _DAT_00622030;
  _DAT_0062208c = _DAT_0062205c;
  _DAT_006220bc = DAT_0062202c;
  _DAT_006220c0 = DAT_00622090;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,(CVector3i *)&iStack_b0,(CVector3i *)&DAT_01cb82bc,0,4);
  piStack_24 = &iStack_30;
  uVar1 = *(uint *)&param_1[5].field_0x4;
  core_actor_cpp_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      iStack_30 = 0x9a80;
      iStack_34 = 0xb100;
      iStack_2c = 0x9000;
      goto LAB_004c787c;
    }
    if (uVar1 == 2) {
      iStack_30 = 0;
      iStack_34 = 0;
      iStack_2c = 0;
      goto LAB_004c787c;
    }
  }
  iStack_2c = 0x2000;
  *piStack_24 = 0;
  iStack_34 = 0;
LAB_004c787c:
  iVar4 = 0;
  do {
    lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
    *(uint *)((int)&DAT_00622034 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
    *(uint *)((int)&DAT_00622038 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4 + 0x30;
    lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
    *(uint *)((int)&DAT_0062203c + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3;
  } while (iVar3 != 0xc0);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff - _DAT_01c38aec)
  ;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
  engine_matrix_c_pop_FUN_0046b4a0();
  fStack_114 = 1.0;
  pfVar5 = (float *)((int)param_1 + (uint)bVar6 * -8 + 4);
  auStack_d4 = (byte  [4])*(float *)param_1;
  afStack_d0[(uint)bVar6 * -2] = *pfVar5;
  afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar5[(uint)bVar6 * -2 + 1];
  fStack_118 = 0.025;
  iStack_18 = 0;
  pCStack_1c = param_1 + 2;
  pfVar5 = (float *)((int)param_1 + (uint)bVar6 * -8 + 0x10);
  fStack_ec = *(float *)(param_1 + 1);
  afStack_e8[(uint)bVar6 * -2] = *pfVar5;
  afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar5[(uint)bVar6 * -2 + 1];
  do {
    fStack_118 = fStack_118 * (float)_DAT_005d943a;
    fStack_8c = *(float *)pCStack_1c * fStack_118;
    afStack_88[0] = *(float *)&pCStack_1c->field_0x4 * fStack_118;
    afStack_88[1] = *(float *)&pCStack_1c->field_0x8 * fStack_118;
    fStack_a4 = *(float *)pCStack_1c * fStack_118;
    afStack_a0[(uint)bVar6 * -2] = afStack_88[(uint)bVar6 * -2];
    afStack_a0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_ec = fStack_ec - fStack_a4;
    fStack_114 = fStack_114 * (float)_DAT_005d943a;
    afStack_d0[2] = fStack_ec * fStack_118;
    afStack_e8[0] = afStack_e8[0] - afStack_a0[0];
    afStack_e8[1] = afStack_e8[1] - afStack_a0[1];
    world_position = (CVector3f *)auStack_d4;
    afStack_d0[3] = afStack_e8[0] * fStack_118;
    fStack_c0 = afStack_e8[1] * fStack_118;
    fStack_74 = afStack_d0[2];
    afStack_70[(uint)bVar6 * -2] = afStack_d0[(uint)bVar6 * -2 + 3];
    afStack_70[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    auStack_d4 = (byte  [4])((float)auStack_d4 - fStack_74);
    afStack_d0[0] = afStack_d0[0] - afStack_70[0];
    afStack_d0[1] = afStack_d0[1] - afStack_70[1];
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01cb82b0,(CVector3i *)0x0);
    afStack_e8[2] = fStack_114 * (float)_DAT_005d9442;
    afStack_e8[4] = 0.0;
    iStack_50 = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_4c = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_48 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    afStack_e8[3] = afStack_e8[2];
    fStack_20 = afStack_e8[2];
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_50);
    afStack_e8[2] = fStack_114 * (float)_DAT_005d944a;
    afStack_e8[4] = 0.0;
    afStack_e8[3] = fStack_20;
    iStack_68 = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    iStack_64 = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    iStack_60 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    fStack_28 = afStack_e8[2];
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_68);
    afStack_e8[2] = fStack_28;
    afStack_e8[3] = fStack_28;
    afStack_e8[4] = 0.0;
    iStack_104 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_100 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_fc = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_104);
    afStack_e8[4] = 0.0;
    afStack_e8[2] = fStack_20;
    afStack_e8[3] = fStack_28;
    iStack_bc = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    iStack_b8 = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    iStack_b4 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_bc);
    iStack_b0 = (int)ROUND((float)auStack_d4 * _DAT_005f7ba8);
    iStack_ac = (int)ROUND(afStack_d0[0] * _DAT_005f7ba8);
    iStack_a8 = (int)ROUND(afStack_d0[1] * _DAT_005f7ba8);
    core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
              (g_CDemonSetPtr,(CVector3i *)&iStack_b0,(CVector3i *)&DAT_01cb82bc,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
      *(uint *)((int)&DAT_00622034 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
      *(uint *)((int)&DAT_00622038 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4 + 0x30;
      lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
      *(uint *)((int)&DAT_0062203c + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3;
    } while (iVar3 != 0xc0);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (DAT_0060b280,0xffff - _DAT_01c38aec);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
    engine_matrix_c_pop_FUN_0046b4a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
