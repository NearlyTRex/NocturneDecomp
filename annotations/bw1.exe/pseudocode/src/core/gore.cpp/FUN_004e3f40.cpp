// Name: core_gore.cpp_FUN_004e3f40
// Address: 004e3f40
// Address Range: [[004e3f40, 004e472c]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004e3f40(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004e3f40(CVector3f *param_1)

{
  SRenderVertex *output;
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10cc [1000];
  CVector3f *world_position;
  float fStack_110;
  float fStack_10c;
  CVector3i CStack_108;
  CVector3i CStack_fc;
  CVector3i CStack_f0;
  float fStack_e4;
  float afStack_e0 [5];
  CVector3f CStack_cc;
  float fStack_c0;
  float afStack_bc [2];
  CVector3i CStack_b4;
  CVector3i CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3i CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3i CStack_78;
  float fStack_6c;
  float afStack_68 [2];
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i aCStack_48 [2];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  CVector3f *pCStack_18;
  int iStack_14;
  
  bVar7 = 0;
  output = DAT_00612560->vertex_buffer_ptr;
  CStack_108.x = (int)ROUND(param_1->x * _DAT_006016a8);
  CStack_108.y = (int)ROUND(param_1->y * _DAT_006016a8);
  CStack_108.z = (int)ROUND(param_1->z * _DAT_006016a8);
  engine_special_cpp_FUN_0058043c(&output->projected_vertex,&CStack_108);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,(CVector3i *)&DAT_01cd0e68,(CVector3i *)0x0);
  afStack_e0[2] = -0.1;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = -0.1;
  CStack_78.x = (int)ROUND(_DAT_006016a8 * -0.1);
  CStack_78.y = (int)ROUND(_DAT_006016a8 * -0.1);
  CStack_78.z = (int)ROUND(_DAT_006016a8 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_78);
  afStack_e0[2] = 0.1;
  afStack_e0[3] = -0.1;
  afStack_e0[4] = 0.0;
  CStack_90.x = (int)ROUND(_DAT_006016a8 * 0.1);
  CStack_90.y = (int)ROUND(_DAT_006016a8 * -0.1);
  CStack_90.z = (int)ROUND(_DAT_006016a8 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_90);
  afStack_e0[2] = 0.1;
  afStack_e0[4] = 0.0;
  afStack_e0[3] = 0.1;
  CStack_54.x = (int)ROUND(_DAT_006016a8 * 0.1);
  CStack_54.y = (int)ROUND(_DAT_006016a8 * 0.1);
  CStack_54.z = (int)ROUND(_DAT_006016a8 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_54);
  afStack_e0[2] = -0.1;
  afStack_e0[3] = 0.1;
  afStack_e0[4] = 0.0;
  CStack_f0.x = (int)ROUND(_DAT_006016a8 * -0.1);
  CStack_f0.y = (int)ROUND(_DAT_006016a8 * 0.1);
  CStack_f0.z = (int)ROUND(_DAT_006016a8 * 0.0);
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_f0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061dcb4);
  _DAT_0062905c = ((uint)param_1[5].z & 3) * 0x400000;
  iVar4 = ((int)param_1[5].z >> 2 & 3U) * 0x400000;
  DAT_0062902c = _DAT_0062905c + 0x80000;
  _DAT_00629030 = iVar4 + 0x80000;
  _DAT_0062905c = _DAT_0062905c + 0x380000;
  DAT_00629090 = iVar4 + 0x380000;
  CStack_a8.x = (int)ROUND(param_1->x * _DAT_006016a8);
  CStack_a8.y = (int)ROUND(param_1->y * _DAT_006016a8);
  CStack_a8.z = (int)ROUND(param_1->z * _DAT_006016a8);
  _DAT_00629060 = _DAT_00629030;
  _DAT_0062908c = _DAT_0062905c;
  _DAT_006290bc = DAT_0062902c;
  _DAT_006290c0 = DAT_00629090;
  core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
            (g_CDemonSetPtr,&CStack_a8,(CVector3i *)&DAT_01cd0e74,0,4);
  fVar1 = param_1[5].y;
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      iStack_28 = 0x7f80;
      iStack_24 = 0;
      goto LAB_004e421f;
    }
    if (fVar1 == 2.8026e-45) {
      iStack_28 = 0;
      iStack_24 = 0;
      goto LAB_004e421f;
    }
  }
  iStack_24 = 0x2000;
  iStack_28 = 0;
LAB_004e421f:
  iStack_2c = 0;
  iVar4 = 0;
  do {
    lVar2 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_00629034 + iVar4);
    *(uint *)((int)&DAT_00629034 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_00629038 + iVar4);
    *(uint *)((int)&DAT_00629038 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4 + 0x30;
    *(uint *)((int)&DAT_0062903c + iVar4) = 0;
    iVar4 = iVar3;
  } while (iVar3 != 0xc0);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff - _DAT_01c51cac)
  ;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
  engine_matrix_c_pop_FUN_004839a0();
  fStack_10c = 1.0;
  puVar5 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 4);
  CStack_cc.x = param_1->x;
  *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 4) = *puVar5;
  *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       puVar5[(uint)bVar7 * -2 + 1];
  fStack_110 = 0.025;
  iStack_14 = 0;
  pCStack_18 = param_1 + 2;
  pfVar6 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x10);
  fStack_e4 = param_1[1].x;
  afStack_e0[(uint)bVar7 * -2] = *pfVar6;
  afStack_e0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  do {
    fStack_110 = fStack_110 * (float)_DAT_005e401d;
    fStack_84 = pCStack_18->x * fStack_110;
    afStack_80[0] = pCStack_18->y * fStack_110;
    afStack_80[1] = pCStack_18->z * fStack_110;
    fStack_9c = fStack_84;
    afStack_98[(uint)bVar7 * -2] = afStack_80[(uint)bVar7 * -2];
    afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_e4 = fStack_e4 - fStack_9c;
    fStack_10c = fStack_10c * (float)_DAT_005e401d;
    fStack_c0 = fStack_e4 * fStack_110;
    afStack_e0[0] = afStack_e0[0] - afStack_98[0];
    afStack_e0[1] = afStack_e0[1] - afStack_98[1];
    world_position = &CStack_cc;
    afStack_bc[0] = afStack_e0[0] * fStack_110;
    afStack_bc[1] = afStack_e0[1] * fStack_110;
    fStack_6c = fStack_c0;
    afStack_68[(uint)bVar7 * -2] = afStack_bc[(uint)bVar7 * -2];
    afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    CStack_cc.x = CStack_cc.x - fStack_6c;
    CStack_cc.y = CStack_cc.y - afStack_68[0];
    CStack_cc.z = CStack_cc.z - afStack_68[1];
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
              (DAT_00612560,(CVector3i *)&DAT_01cd0e68,(CVector3i *)0x0);
    afStack_e0[2] = fStack_10c * (float)_DAT_005e4025;
    afStack_e0[4] = 0.0;
    aCStack_48[0].x = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    aCStack_48[0].y = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    aCStack_48[0].z = (int)ROUND(_DAT_006016a8 * 0.0);
    afStack_e0[3] = afStack_e0[2];
    fStack_1c = afStack_e0[2];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,aCStack_48);
    afStack_e0[2] = fStack_10c * (float)_DAT_005e402d;
    afStack_e0[4] = 0.0;
    afStack_e0[3] = fStack_1c;
    CStack_60.x = (int)ROUND(afStack_e0[2] * _DAT_006016a8);
    CStack_60.y = (int)ROUND(fStack_1c * _DAT_006016a8);
    CStack_60.z = (int)ROUND(_DAT_006016a8 * 0.0);
    fStack_20 = afStack_e0[2];
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_60)
    ;
    afStack_e0[2] = fStack_20;
    afStack_e0[3] = fStack_20;
    afStack_e0[4] = 0.0;
    CStack_fc.x = (int)ROUND(fStack_20 * _DAT_006016a8);
    CStack_fc.y = (int)ROUND(fStack_20 * _DAT_006016a8);
    CStack_fc.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_fc)
    ;
    afStack_e0[4] = 0.0;
    afStack_e0[2] = fStack_1c;
    afStack_e0[3] = fStack_20;
    CStack_b4.x = (int)ROUND(fStack_1c * _DAT_006016a8);
    CStack_b4.y = (int)ROUND(fStack_20 * _DAT_006016a8);
    CStack_b4.z = (int)ROUND(_DAT_006016a8 * 0.0);
    engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_b4)
    ;
    CStack_a8.x = (int)ROUND(CStack_cc.x * _DAT_006016a8);
    CStack_a8.y = (int)ROUND(CStack_cc.y * _DAT_006016a8);
    CStack_a8.z = (int)ROUND(CStack_cc.z * _DAT_006016a8);
    core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
              (g_CDemonSetPtr,&CStack_a8,(CVector3i *)&DAT_01cd0e74,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)iStack_24 * (longlong)*(int *)((int)&DAT_00629034 + iVar4);
      *(uint *)((int)&DAT_00629034 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_28 * (longlong)*(int *)((int)&DAT_00629038 + iVar4);
      *(uint *)((int)&DAT_00629038 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4 + 0x30;
      lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_0062903c + iVar4);
      *(uint *)((int)&DAT_0062903c + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3;
    } while (iVar3 != 0xc0);
    (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
              (DAT_00612560,0xffff - _DAT_01c51cac);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
              (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e40);
    engine_matrix_c_pop_FUN_004839a0();
    iStack_14 = iStack_14 + 1;
  } while (iStack_14 < 3);
  return;
}
