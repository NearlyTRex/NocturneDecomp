// Name: shape_spotview.cpp_FUN_005680b0
// Address: 005680b0
// Address Range: [[005680b0, 005681a7]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_005680b0(int param_1)

#include "nocturne.h"

void shape_spotview_cpp_FUN_005680b0(int param_1)

{
  byte bVar1;
  float afStackY_1048 [1006];
  CDemonRenderer *this_ptr;
  CVector3f *point_ptr;
  CMatrix3x3f aCStack_88 [40];
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [5];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  engine_matrix_c_FUN_0046d090(DAT_005f2afc,0x41e00000);
  CStack_54._0_4_ = *(uint *)(param_1 + 0x24);
  CStack_54._8_4_ = 0;
  CStack_54._4_4_ = *(uint *)(param_1 + 0x28);
  core_dirmat_cpp_FUN_0045b550(aCStack_88,&CStack_54);
  uStack_48 = *(uint *)(param_1 + 0x30);
  uStack_44 = *(uint *)(param_1 + 0x34);
  fStack_40 = -*(float *)(param_1 + 0x2c);
  fStack_18 = fStack_40;
  uStack_14 = uStack_48;
  uStack_10 = uStack_44;
  core_dirmat_cpp_FUN_0045b800(aCStack_88,&uStack_48);
  point_ptr = (CVector3f *)&fStack_60;
  fStack_3c = afStack_38[2];
  afStack_38[(uint)bVar1 * -2] = afStack_38[(uint)bVar1 * -2 + 3];
  afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  fStack_24 = *(float *)(param_1 + 0x18) + fStack_3c;
  fStack_20 = *(float *)(param_1 + 0x1c) + afStack_38[0];
  fStack_1c = *(float *)(param_1 + 0x20) + afStack_38[1];
  fStack_60 = fStack_24;
  afStack_5c[(uint)bVar1 * -2] = afStack_38[(uint)bVar1 * -2 + 6];
  this_ptr = DAT_005f2afc;
  afStack_5c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_38[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  engine_drender_cpp_FUN_0046cb90(this_ptr,point_ptr);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10(DAT_005f2afc,&CStack_54);
  return;
}
