// Name: core_inv.cpp_renderCompass_FUN_004da130
// Address: 004da130
// Address Range: [[004da130, 004da710]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_renderCompass_FUN_004da130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_renderCompass_FUN_004da130(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int y;
  int iVar4;
  byte bVar5;
  float afStackY_10fc [986];
  CMatrix3x3f *this_ptr;
  CVector3f *euler_angles;
  byte auStack_184 [112];
  float fStack_114;
  float afStack_110 [2];
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3i CStack_f0;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float afStack_d4 [2];
  CVector3f CStack_cc;
  CVector3i CStack_c0;
  CVector3f CStack_b4;
  CVector3i CStack_a8;
  CVector3f CStack_9c;
  CVector3i CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  uint uStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3i CStack_3c;
  uint uStack_30;
  float afStack_2c [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar3 = CAlphaBitmap_01d02ed0.width;
  bVar5 = 0;
  iVar4 = DAT_006141bc + -2;
  y = iVar4 - CAlphaBitmap_01d02ed0.height;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02ed0,2,y,0xffff);
  uVar2 = _DAT_01c37788;
  fVar1 = (float)_DAT_005db3f2;
  _DAT_01c37788 = 0;
  uStack_30 = 0;
  afStack_2c[0] = 0.0;
  afStack_2c[2] = (float)iVar3 * fVar1;
  fStack_1c = (float)(iVar3 + 4) * fVar1;
  fStack_14 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34) -
              g_CDemonSetPtr->altitude_reference_y;
  afStack_2c[3] = (float)(iVar4 - y) * fVar1;
  afStack_2c[1] = fStack_14;
  euler_angles = &CStack_fc;
  this_ptr = (CMatrix3x3f *)(auStack_184 + 0x48);
  fStack_18 = (float)(y + iVar4) * fVar1;
  CStack_fc.x = 0.0;
  *(float *)((int)&CStack_fc + (uint)bVar5 * -8 + 4) = afStack_2c[(uint)bVar5 * -2];
  *(float *)((int)&CStack_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(this_ptr,euler_angles);
  engine_matrix_c_invertTransformMatrix_FUN_004e8730();
  CStack_b4.y = -afStack_2c[3];
  CStack_b4.x = -afStack_2c[2];
  CStack_b4.z = 0.0;
  fStack_14 = CStack_b4.y;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)(auStack_184 + 0x48),&CStack_b4,&CStack_9c);
  fStack_6c = CStack_9c.x;
  afStack_68[(uint)bVar5 * -2] = *(float *)((int)&CStack_9c + (uint)bVar5 * -8 + 4);
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_9c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&fStack_e4 != &fStack_6c) {
    fStack_e4 = fStack_6c;
    fStack_e0 = afStack_68[0];
    uStack_dc = afStack_68[1];
  }
  core_inv_cpp_screenToWorldPoint_FUN_004d9ff0
            (fStack_1c + fStack_e4,fStack_18 + fStack_e0,&CStack_90);
  CStack_c0.x = CStack_90.x;
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_90 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_c0);
  CStack_48.y = -afStack_2c[3];
  CStack_48.x = afStack_2c[2];
  CStack_48.z = 0.0;
  fStack_14 = CStack_48.y;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)(auStack_184 + 0x48),&CStack_48,&CStack_78);
  fStack_114 = CStack_78.x;
  afStack_110[(uint)bVar5 * -2] = *(float *)((int)&CStack_78 + (uint)bVar5 * -8 + 4);
  afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_78 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&fStack_e4 != &fStack_114) {
    fStack_e4 = fStack_114;
    fStack_e0 = afStack_110[0];
    uStack_dc = afStack_110[1];
  }
  core_inv_cpp_screenToWorldPoint_FUN_004d9ff0
            (fStack_1c + fStack_e4,fStack_18 + fStack_e0,&CStack_3c);
  CStack_c0.x = CStack_3c.x;
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_c0);
  CStack_54.x = afStack_2c[2];
  CStack_54.y = afStack_2c[3];
  CStack_54.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)(auStack_184 + 0x48),&CStack_54,&CStack_108);
  afStack_68[2] = CStack_108.x;
  afStack_68[(uint)bVar5 * -2 + 3] = *(float *)((int)&CStack_108 + (uint)bVar5 * -8 + 4);
  afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       *(float *)((int)&CStack_108 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&fStack_e4 != afStack_68 + 2) {
    fStack_e4 = afStack_68[2];
    fStack_e0 = afStack_68[3];
    uStack_dc = uStack_58;
  }
  core_inv_cpp_screenToWorldPoint_FUN_004d9ff0
            (fStack_1c + fStack_e4,fStack_18 + fStack_e0,&CStack_f0);
  CStack_c0.x = CStack_f0.x;
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_f0 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_f0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_c0);
  CStack_84.y = afStack_2c[3];
  CStack_84.x = -afStack_2c[2];
  CStack_84.z = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)(auStack_184 + 0x48),&CStack_84,&CStack_cc);
  fStack_d8 = CStack_cc.x;
  afStack_d4[(uint)bVar5 * -2] = *(float *)((int)&CStack_cc + (uint)bVar5 * -8 + 4);
  afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_cc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (&fStack_e4 != &fStack_d8) {
    fStack_e4 = fStack_d8;
    fStack_e0 = afStack_d4[0];
    uStack_dc = afStack_d4[1];
  }
  core_inv_cpp_screenToWorldPoint_FUN_004d9ff0
            (fStack_1c + fStack_e4,fStack_18 + fStack_e0,&CStack_a8);
  CStack_c0.x = CStack_a8.x;
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_a8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_c0);
  auStack_184._4_4_ = 4;
  auStack_184._24_4_ = 0;
  auStack_184._28_4_ = 0;
  auStack_184._32_4_ = 0;
  auStack_184._36_4_ = 1;
  auStack_184._40_4_ = 0x1000000;
  auStack_184._44_4_ = 0;
  auStack_184._52_4_ = 0x1000000;
  auStack_184._56_4_ = 0x1000000;
  auStack_184._48_4_ = 2;
  auStack_184._68_4_ = 0x1000000;
  auStack_184._60_4_ = 3;
  auStack_184._64_4_ = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)0x1d02ee4);
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
            (DAT_0060b280,(SMRGLPrimitivePoly *)auStack_184,0x23);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  _DAT_01c37788 = uVar2;
  return;
}
