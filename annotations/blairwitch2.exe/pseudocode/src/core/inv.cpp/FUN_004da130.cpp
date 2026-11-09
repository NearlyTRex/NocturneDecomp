// Name: core_inv.cpp_FUN_004da130
// Address: 004da130
// Address Range: [[004da130, 004da710]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004da130(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004da130(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int y;
  int iVar4;
  byte bVar5;
  float afStackY_10fc [986];
  CMatrix3x3f *this_ptr;
  CVector3f *euler_angles;
  SMRGLPrimitivePoly aSStack_184 [4];
  uint uStack_180;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  CMatrix3x3f aCStack_13c [40];
  float fStack_114;
  float afStack_110 [5];
  byte auStack_fc [8];
  float afStack_f4 [4];
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float afStack_d4 [5];
  uint uStack_c0;
  float afStack_bc [4];
  uint uStack_ac;
  uint uStack_a8;
  float afStack_a4 [5];
  uint uStack_90;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_74 [4];
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  float afStack_38 [5];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar3 = CAlphaBitmap_01d02ed0._12_4_;
  bVar5 = 0;
  iVar4 = DAT_006141bc + -2;
  y = iVar4 - CAlphaBitmap_01d02ed0._16_4_;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02ed0,2,y,0xffff);
  uVar2 = _DAT_01c37788;
  fVar1 = (float)_DAT_005db3f2;
  _DAT_01c37788 = 0;
  afStack_38[2] = 0.0;
  afStack_38[3] = 0.0;
  fStack_24 = (float)(int)uVar3 * fVar1;
  fStack_1c = (float)(uVar3 + 4) * fVar1;
  fStack_14 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34) -
              *(float *)&g_CDemonSetPtr->field_0x15acbc;
  fStack_20 = (float)(iVar4 - y) * fVar1;
  afStack_38[4] = fStack_14;
  euler_angles = (CVector3f *)auStack_fc;
  this_ptr = aCStack_13c;
  fStack_18 = (float)(y + iVar4) * fVar1;
  auStack_fc._0_4_ = 0;
  *(float *)(auStack_fc + (uint)bVar5 * -8 + 4) = afStack_38[(uint)bVar5 * -2 + 3];
  *(float *)(auStack_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_dirmat_cpp_FUN_00449280(this_ptr,euler_angles);
  engine_matrix_c_invertTransformMatrix_FUN_004e8730();
  afStack_bc[3] = -fStack_20;
  afStack_bc[2] = -fStack_24;
  uStack_ac = 0;
  fStack_14 = afStack_bc[3];
  core_dirmat_cpp_FUN_00449530(aCStack_13c,afStack_bc + 2);
  afStack_74[2] = afStack_a4[2];
  afStack_74[(uint)bVar5 * -2 + 3] = afStack_a4[(uint)bVar5 * -2 + 3];
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_f4 + 4 != afStack_74 + 2) {
    fStack_e4 = afStack_74[2];
    fStack_e0 = afStack_74[3];
    uStack_dc = uStack_64;
  }
  core_inv_cpp_FUN_004d9ff0(fStack_1c + fStack_e4,fStack_18 + fStack_e0);
  uStack_c0 = uStack_90;
  afStack_bc[(uint)bVar5 * -2] = afStack_a4[(uint)bVar5 * -2 + 6];
  afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&uStack_c0);
  fStack_44 = -fStack_20;
  fStack_48 = fStack_24;
  uStack_40 = 0;
  fStack_14 = fStack_44;
  core_dirmat_cpp_FUN_00449530(aCStack_13c,afStack_74 + 0xb);
  fStack_114 = fStack_78;
  afStack_110[(uint)bVar5 * -2] = afStack_74[(uint)bVar5 * -2];
  afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (afStack_f4 + 4 != &fStack_114) {
    fStack_e4 = fStack_114;
    fStack_e0 = afStack_110[0];
    uStack_dc = afStack_110[1];
  }
  core_inv_cpp_FUN_004d9ff0(fStack_1c + fStack_e4,fStack_18 + fStack_e0);
  uStack_c0 = uStack_3c;
  afStack_bc[(uint)bVar5 * -2] = afStack_38[(uint)bVar5 * -2];
  afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&uStack_c0);
  fStack_54 = fStack_24;
  fStack_50 = fStack_20;
  uStack_4c = 0;
  core_dirmat_cpp_FUN_00449530(aCStack_13c,afStack_74 + 8);
  fStack_60 = afStack_110[2];
  afStack_74[(uint)bVar5 * -2 + 6] = afStack_110[(uint)bVar5 * -2 + 3];
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_f4 + 4 != afStack_74 + 5) {
    fStack_e4 = fStack_60;
    fStack_e0 = fStack_5c;
    uStack_dc = uStack_58;
  }
  core_inv_cpp_FUN_004d9ff0(fStack_1c + fStack_e4,fStack_18 + fStack_e0);
  uStack_c0 = afStack_f4[1];
  afStack_bc[(uint)bVar5 * -2] = afStack_f4[(uint)bVar5 * -2 + 2];
  afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 3];
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&uStack_c0);
  fStack_80 = fStack_20;
  fStack_84 = -fStack_24;
  uStack_7c = 0;
  core_dirmat_cpp_FUN_00449530(aCStack_13c,afStack_a4 + 8);
  fStack_d8 = afStack_d4[2];
  afStack_d4[(uint)bVar5 * -2] = afStack_d4[(uint)bVar5 * -2 + 3];
  afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_f4 + 4 != &fStack_d8) {
    fStack_e4 = fStack_d8;
    fStack_e0 = afStack_d4[0];
    uStack_dc = afStack_d4[1];
  }
  core_inv_cpp_FUN_004d9ff0(fStack_1c + fStack_e4,fStack_18 + fStack_e0);
  uStack_c0 = uStack_a8;
  afStack_bc[(uint)bVar5 * -2] = afStack_a4[(uint)bVar5 * -2];
  afStack_bc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&uStack_c0);
  uStack_180 = 4;
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_164 = 0;
  uStack_160 = 1;
  uStack_15c = 0x1000000;
  uStack_158 = 0;
  uStack_150 = 0x1000000;
  uStack_14c = 0x1000000;
  uStack_154 = 2;
  uStack_140 = 0x1000000;
  uStack_148 = 3;
  uStack_144 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)0x1d02ee4);
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(DAT_0060b280,aSStack_184,0x23);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  _DAT_01c37788 = uVar2;
  return;
}
