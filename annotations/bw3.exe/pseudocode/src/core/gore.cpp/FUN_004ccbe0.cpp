// Name: core_gore.cpp_FUN_004ccbe0
// Address: 004ccbe0
// Address Range: [[004ccbe0, 004cd3e3]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004ccbe0(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004ccbe0(CVector3f *param_1)

{
  SRenderVertex *output;
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10cc [1000];
  CVector3f *world_position;
  float fStack_110;
  float fStack_10c;
  CVector3i CStack_108;
  CVector3i CStack_fc;
  CVector3i CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3i CStack_d8;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3i CStack_a8;
  CVector3i CStack_9c;
  CVector3f CStack_90;
  CVector3i CStack_84;
  CVector3i CStack_78;
  CVector3i CStack_6c;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float afStack_50 [2];
  CVector3i aCStack_48 [2];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_18;
  CVector3f *pCStack_14;
  
  bVar6 = 0;
  output = DAT_005f2afc->vertex_buffer_ptr;
  CStack_6c.x = (int)ROUND(param_1->x * _DAT_005e0e18);
  CStack_6c.y = (int)ROUND(param_1->y * _DAT_005e0e18);
  CStack_6c.z = (int)ROUND(param_1->z * _DAT_005e0e18);
  engine_special_cpp_FUN_0056356c(&output->projected_vertex,&CStack_6c);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) == 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,param_1)
    ;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
              (DAT_005f2afc,(CVector3i *)&DAT_01d22e70,(CVector3i *)0x0);
    fStack_60 = -0.1;
    uStack_58 = 0;
    fStack_5c = -0.1;
    CStack_a8.x = (int)ROUND(_DAT_005e0e18 * -0.1);
    CStack_a8.y = (int)ROUND(_DAT_005e0e18 * -0.1);
    CStack_a8.z = (int)ROUND(_DAT_005e0e18 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_a8);
    fStack_60 = 0.1;
    fStack_5c = -0.1;
    uStack_58 = 0;
    CStack_9c.x = (int)ROUND(_DAT_005e0e18 * 0.1);
    CStack_9c.y = (int)ROUND(_DAT_005e0e18 * -0.1);
    CStack_9c.z = (int)ROUND(_DAT_005e0e18 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_9c)
    ;
    fStack_60 = 0.1;
    uStack_58 = 0;
    fStack_5c = 0.1;
    CStack_fc.x = (int)ROUND(_DAT_005e0e18 * 0.1);
    CStack_fc.y = (int)ROUND(_DAT_005e0e18 * 0.1);
    CStack_fc.z = (int)ROUND(_DAT_005e0e18 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_fc)
    ;
    fStack_60 = -0.1;
    fStack_5c = 0.1;
    uStack_58 = 0;
    aCStack_48[0].x = (int)ROUND(_DAT_005e0e18 * -0.1);
    aCStack_48[0].y = (int)ROUND(_DAT_005e0e18 * 0.1);
    aCStack_48[0].z = (int)ROUND(_DAT_005e0e18 * 0.0);
    engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,aCStack_48)
    ;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fed34);
    _DAT_0060b05c = ((uint)param_1[5].z & 3) * 0x400000;
    iVar3 = ((int)param_1[5].z >> 2 & 3U) * 0x400000;
    DAT_0060b02c = _DAT_0060b05c + 0x80000;
    _DAT_0060b030 = iVar3 + 0x80000;
    _DAT_0060b05c = _DAT_0060b05c + 0x380000;
    DAT_0060b090 = iVar3 + 0x380000;
    CStack_108.x = (int)ROUND(param_1->x * _DAT_005e0e18);
    CStack_108.y = (int)ROUND(param_1->y * _DAT_005e0e18);
    CStack_108.z = (int)ROUND(param_1->z * _DAT_005e0e18);
    _DAT_0060b060 = _DAT_0060b030;
    _DAT_0060b08c = _DAT_0060b05c;
    _DAT_0060b0bc = DAT_0060b02c;
    _DAT_0060b0c0 = DAT_0060b090;
    core_set_cpp_CDemonSet_computeLighting_FUN_00538400
              (g_CDemonSetPtr,&CStack_108,(CVector3i *)&DAT_01d22e7c,0,4);
    core_gore_cpp_FUN_004cc970(param_1[5].y,&iStack_28,&iStack_24,&iStack_2c);
    iVar3 = 0;
    do {
      lVar1 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_0060b034 + iVar3);
      *(uint *)((int)&DAT_0060b034 + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_0060b038 + iVar3);
      *(uint *)((int)&DAT_0060b038 + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar2 = iVar3 + 0x30;
      lVar1 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0060b03c + iVar3);
      *(uint *)((int)&DAT_0060b03c + iVar3) =
           (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      iVar3 = iVar2;
    } while (iVar2 != 0xc0);
    (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (DAT_005f2afc,0xffff - _DAT_01c6e24c);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
    engine_drender_cpp_pop_FUN_0046d080();
    fStack_110 = 1.0;
    puVar4 = (uint *)((int)param_1 + (uint)bVar6 * -8 + 4);
    CStack_90.x = param_1->x;
    *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + 4) = *puVar4;
    *(uint *)((int)&CStack_90 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         puVar4[(uint)bVar6 * -2 + 1];
    fStack_10c = 0.025;
    iStack_18 = 0;
    pCStack_14 = param_1 + 2;
    pfVar5 = (float *)((int)param_1 + (uint)bVar6 * -8 + 0x10);
    fStack_54 = param_1[1].x;
    afStack_50[(uint)bVar6 * -2] = *pfVar5;
    afStack_50[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = pfVar5[(uint)bVar6 * -2 + 1];
    do {
      fStack_10c = fStack_10c * (float)_DAT_005c4631;
      afStack_c8[2] = pCStack_14->x * fStack_10c;
      afStack_c8[3] = pCStack_14->y * fStack_10c;
      fStack_b8 = pCStack_14->z * fStack_10c;
      fStack_e4 = afStack_c8[2];
      afStack_e0[(uint)bVar6 * -2] = afStack_c8[(uint)bVar6 * -2 + 3];
      afStack_e0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_54 = fStack_54 - fStack_e4;
      fStack_110 = fStack_110 * (float)_DAT_005c4631;
      fStack_b4 = fStack_54 * fStack_10c;
      afStack_50[0] = afStack_50[0] - afStack_e0[0];
      afStack_50[1] = afStack_50[1] - afStack_e0[1];
      world_position = &CStack_90;
      fStack_b0 = afStack_50[0] * fStack_10c;
      fStack_ac = afStack_50[1] * fStack_10c;
      fStack_cc = fStack_b4;
      afStack_c8[(uint)bVar6 * -2] = afStack_c8[(uint)bVar6 * -2 + 6];
      afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_c8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      CStack_90.x = CStack_90.x - fStack_cc;
      CStack_90.y = CStack_90.y - afStack_c8[0];
      CStack_90.z = CStack_90.z - afStack_c8[1];
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                (DAT_005f2afc,world_position);
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
                (DAT_005f2afc,(CVector3i *)&DAT_01d22e70,(CVector3i *)0x0);
      fStack_60 = fStack_110 * (float)_DAT_005c4639;
      uStack_58 = 0;
      CStack_f0.x = (int)ROUND(fStack_60 * _DAT_005e0e18);
      CStack_f0.y = (int)ROUND(fStack_60 * _DAT_005e0e18);
      CStack_f0.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      fStack_5c = fStack_60;
      fStack_1c = fStack_60;
      engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_f0)
      ;
      fStack_60 = fStack_110 * (float)_DAT_005c4641;
      uStack_58 = 0;
      fStack_5c = fStack_1c;
      CStack_78.x = (int)ROUND(fStack_60 * _DAT_005e0e18);
      CStack_78.y = (int)ROUND(fStack_1c * _DAT_005e0e18);
      CStack_78.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      fStack_20 = fStack_60;
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_78);
      fStack_60 = fStack_20;
      fStack_5c = fStack_20;
      uStack_58 = 0;
      CStack_84.x = (int)ROUND(fStack_20 * _DAT_005e0e18);
      CStack_84.y = (int)ROUND(fStack_20 * _DAT_005e0e18);
      CStack_84.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_84);
      uStack_58 = 0;
      fStack_60 = fStack_1c;
      fStack_5c = fStack_20;
      CStack_d8.x = (int)ROUND(fStack_1c * _DAT_005e0e18);
      CStack_d8.y = (int)ROUND(fStack_20 * _DAT_005e0e18);
      CStack_d8.z = (int)ROUND(_DAT_005e0e18 * 0.0);
      engine_special_cpp_FUN_005632a3
                (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_d8);
      CStack_108.x = (int)ROUND(CStack_90.x * _DAT_005e0e18);
      CStack_108.y = (int)ROUND(CStack_90.y * _DAT_005e0e18);
      CStack_108.z = (int)ROUND(CStack_90.z * _DAT_005e0e18);
      core_set_cpp_CDemonSet_computeLighting_FUN_00538400
                (g_CDemonSetPtr,&CStack_108,(CVector3i *)&DAT_01d22e7c,0,4);
      iVar3 = 0;
      do {
        lVar1 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_0060b034 + iVar3);
        *(uint *)((int)&DAT_0060b034 + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        lVar1 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_0060b038 + iVar3);
        *(uint *)((int)&DAT_0060b038 + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        iVar2 = iVar3 + 0x30;
        lVar1 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0060b03c + iVar3);
        *(uint *)((int)&DAT_0060b03c + iVar3) =
             (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
        iVar3 = iVar2;
      } while (iVar2 != 0xc0);
      (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
                (DAT_005f2afc,0xffff - _DAT_01c6e24c);
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
                (DAT_005f2afc,(SMRGLHeaderPrimitive *)0x1d22e48);
      engine_drender_cpp_pop_FUN_0046d080();
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < 3);
  }
  return;
}
