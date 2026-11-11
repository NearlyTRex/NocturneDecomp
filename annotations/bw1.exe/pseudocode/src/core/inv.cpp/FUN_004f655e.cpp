// Name: core_inv.cpp_FUN_004f655e
// Address: 004f655e
// Address Range: [[004f655e, 004f6b40]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f655e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f655e(void)

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
  float afStack_110 [5];
  CVector3f CStack_fc;
  int iStack_f0;
  float afStack_ec [4];
  uint uStack_dc;
  float fStack_d8;
  float afStack_d4 [5];
  CVector3i CStack_c0;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  int iStack_a8;
  float afStack_a4 [5];
  int iStack_90;
  float afStack_8c [4];
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
  int iStack_3c;
  float afStack_38 [5];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar3 = CAlphaBitmap_01d1ba98.width;
  bVar5 = 0;
  iVar4 = DAT_0061b49c + -2;
  y = iVar4 - CAlphaBitmap_01d1ba98.height;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1ba98,2,y,0xffff);
  uVar2 = _DAT_01c50948;
  fVar1 = (float)_DAT_005e5fc0;
  _DAT_01c50948 = 0;
  afStack_38[2] = 0.0;
  afStack_38[3] = 0.0;
  fStack_24 = (float)iVar3 * fVar1;
  fStack_1c = (float)(iVar3 + 4) * fVar1;
  fStack_14 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34) -
              g_CDemonSetPtr->altitude_reference_y;
  fStack_20 = (float)(iVar4 - y) * fVar1;
  afStack_38[4] = fStack_14;
  euler_angles = &CStack_fc;
  this_ptr = (CMatrix3x3f *)(auStack_184 + 0x48);
  fStack_18 = (float)(y + iVar4) * fVar1;
  CStack_fc.x = 0.0;
  *(float *)((int)&CStack_fc + (uint)bVar5 * -8 + 4) = afStack_38[(uint)bVar5 * -2 + 3];
  *(float *)((int)&CStack_fc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(this_ptr,euler_angles);
  engine_matrix_c_invertTransformMatrix_FUN_005073d0();
  fStack_b0 = -fStack_20;
  fStack_b4 = -fStack_24;
  uStack_ac = 0;
  fStack_14 = fStack_b0;
  core_dirmat_cpp_FUN_0045f690(auStack_184 + 0x48,&fStack_b4);
  afStack_74[2] = afStack_a4[2];
  afStack_74[(uint)bVar5 * -2 + 3] = afStack_a4[(uint)bVar5 * -2 + 3];
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_ec + 2 != afStack_74 + 2) {
    afStack_ec[2] = afStack_74[2];
    afStack_ec[3] = afStack_74[3];
    uStack_dc = uStack_64;
  }
  core_inv_cpp_FUN_004f63c0(fStack_1c + afStack_ec[2],fStack_18 + afStack_ec[3]);
  CStack_c0.x = iStack_90;
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) = afStack_8c[(uint)bVar5 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_8c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_c0);
  fStack_44 = -fStack_20;
  fStack_48 = fStack_24;
  uStack_40 = 0;
  fStack_14 = fStack_44;
  core_dirmat_cpp_FUN_0045f690(auStack_184 + 0x48,afStack_74 + 0xb);
  fStack_114 = fStack_78;
  afStack_110[(uint)bVar5 * -2] = afStack_74[(uint)bVar5 * -2];
  afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  if (afStack_ec + 2 != &fStack_114) {
    afStack_ec[2] = fStack_114;
    afStack_ec[3] = afStack_110[0];
    uStack_dc = afStack_110[1];
  }
  core_inv_cpp_FUN_004f63c0(fStack_1c + afStack_ec[2],fStack_18 + afStack_ec[3]);
  CStack_c0.x = iStack_3c;
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) = afStack_38[(uint)bVar5 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_c0);
  fStack_54 = fStack_24;
  fStack_50 = fStack_20;
  uStack_4c = 0;
  core_dirmat_cpp_FUN_0045f690(auStack_184 + 0x48,afStack_74 + 8);
  fStack_60 = afStack_110[2];
  afStack_74[(uint)bVar5 * -2 + 6] = afStack_110[(uint)bVar5 * -2 + 3];
  afStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
       afStack_110[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_ec + 2 != afStack_74 + 5) {
    afStack_ec[2] = fStack_60;
    afStack_ec[3] = fStack_5c;
    uStack_dc = uStack_58;
  }
  core_inv_cpp_FUN_004f63c0(fStack_1c + afStack_ec[2],fStack_18 + afStack_ec[3]);
  CStack_c0.x = iStack_f0;
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) = afStack_ec[(uint)bVar5 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_ec[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_c0);
  afStack_8c[3] = fStack_20;
  afStack_8c[2] = -fStack_24;
  uStack_7c = 0;
  core_dirmat_cpp_FUN_0045f690(auStack_184 + 0x48,afStack_8c + 2);
  fStack_d8 = afStack_d4[2];
  afStack_d4[(uint)bVar5 * -2] = afStack_d4[(uint)bVar5 * -2 + 3];
  afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if (afStack_ec + 2 != &fStack_d8) {
    afStack_ec[2] = fStack_d8;
    afStack_ec[3] = afStack_d4[0];
    uStack_dc = afStack_d4[1];
  }
  core_inv_cpp_FUN_004f63c0(fStack_1c + afStack_ec[2],fStack_18 + afStack_ec[3]);
  CStack_c0.x = iStack_a8;
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + 4) = afStack_a4[(uint)bVar5 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_a4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  engine_special_cpp_FUN_00580173(&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_c0);
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
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)0x1d1baac);
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
            (DAT_00612560,(SMRGLPrimitivePoly *)auStack_184,0x23);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  _DAT_01c50948 = uVar2;
  return;
}
