// Name: core_moon.cpp_FUN_00521e40
// Address: 00521e40
// Address Range: [[00521e40, 005220a1]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_00521e40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moon_cpp_FUN_00521e40(int param_1)

{
  int frame_index;
  CDemonSet *this_ptr;
  float10 fVar1;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  sound_sndmain_cpp_FUN_00575fb0();
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d33f50,0,0,0xffff);
  local_54 = 0x3ee1f6a9;
  local_50 = 0x3f290d17;
  local_4c = 0xbf1b8a5d;
  local_48 = 0xbe8f4c90;
  local_44 = 0x3f3e9ec3;
  local_40 = 0x3f1b2218;
  local_3c = 0x3f5a429e;
  local_2c._8_4_ = 0xc0e128b7;
  local_38 = 0xbdc77681;
  local_34 = 0x3f037100;
  local_2c._0_4_ = 0x404a54de;
  local_2c._4_4_ = 0x40f41b09;
  engine_drender_cpp_FUN_004834b0(DAT_00612560,&local_2c);
  engine_matrix_c_FUN_004839b0(DAT_00612560,0x422c9ce4);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560
            (DAT_00612560,(CMatrix3x3f *)&local_54);
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_20._8_4_ = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,&local_20)
  ;
  this_ptr = g_CDemonSetPtr;
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
  *(uint *)&this_ptr->field_0x15ae88 = 0xffff6f78;
  *(uint *)&this_ptr->field_0x15ae8c = 0xffff6f78;
  *(uint *)&this_ptr->field_0x15ae90 = 37000;
  core_set_cpp_FUN_00555770(this_ptr,50000,50000,0x10000);
  frame_index = DAT_0061f8ac;
  *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0x1964;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            ((CKeyFramedModel *)(param_1 + 8),frame_index,(CKeyFramedModelInstance *)0x0,0x205);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            ((CKeyFramedModel *)(param_1 + 0x3a0),DAT_0061f8b0,(CKeyFramedModelInstance *)0x0,0x205)
  ;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            ((CKeyFramedModel *)(param_1 + 0x738),DAT_0061f8b4,(CKeyFramedModelInstance *)0x0,0x205)
  ;
  DAT_0061f8b4 = DAT_0061f8b4 + 1;
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
  DAT_0061f8ac = DAT_0061f8ac + 1;
  DAT_0061f8b0 = DAT_0061f8b0 + 1;
  if (0x3c < DAT_0061f8ac) {
    DAT_0061f8ac = 0;
  }
  if (0x2d < DAT_0061f8b0) {
    DAT_0061f8b0 = 0;
  }
  if (0x4b < DAT_0061f8b4) {
    DAT_0061f8b4 = 0;
  }
  engine_3d_c_FUN_00406c20(1);
  fVar1 = (float10)_DAT_01d33f6c;
  round();
  local_14 = (int)ROUND(fVar1);
  if (0x1d < local_14) {
    local_14 = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (g_MoonAnimTextures + local_14,0,0x13b,0xffff);
  engine_3d_c_FUN_00406c20(0);
  return;
}
