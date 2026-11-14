// Name: core_moon.cpp_CMoon_render_FUN_00521e40
// Address: 00521e40
// Address Range: [[00521e40, 005220a1]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_00521e40(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_render_FUN_00521e40(CMoon *this_ptr)

{
  int frame_index;
  CDemonSet *this_ptr_00;
  float10 fVar1;
  CMatrix3x3f local_54;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  sound_sndmain_cpp_processAudio_FUN_00575fb0();
  engine_special_cpp_clearScreen_FUN_0057dc40();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d33f50,0,0,0xffff);
  local_54.m[0].x = 0.441335;
  local_54.m[0].y = 0.660356;
  local_54.m[0].z = -0.60758;
  local_54.m[1].x = -0.279881;
  local_54.m[1].y = 0.74461;
  local_54.m[1].z = 0.605989;
  local_54.m[2].x = 0.852579;
  local_2c.z = -7.03622;
  local_54.m[2].y = -0.097394;
  local_54.m[2].z = 0.513443;
  local_2c.x = 3.16143;
  local_2c.y = 7.6283;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_004834b0
            (DAT_00612560,&local_2c);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_004839b0(DAT_00612560,43.153214);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_00483560(DAT_00612560,&local_54);
  local_20.x = 0.0;
  local_20.y = 0.0;
  local_20.z = 0.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(DAT_00612560,&local_20)
  ;
  this_ptr_00 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (this_ptr_00->light_direction).x = -37000;
  (this_ptr_00->light_direction).y = -37000;
  (this_ptr_00->light_direction).z = 37000;
  core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr_00,50000,50000,0x10000);
  frame_index = DAT_0061f8ac;
  g_CDemonSetPtr->ambient_base_quick = 0x1964;
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            (this_ptr->models,frame_index,(CKeyFramedModelInstance *)0x0,0x205);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            (this_ptr->models + 1,DAT_0061f8b0,(CKeyFramedModelInstance *)0x0,0x205);
  core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00467270
            (this_ptr->models + 2,DAT_0061f8b4,(CKeyFramedModelInstance *)0x0,0x205);
  DAT_0061f8b4 = DAT_0061f8b4 + 1;
  g_CDemonSetPtr->rendering_mode = 0;
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
  engine_3d_c_setBlendMode_FUN_00406c20(1);
  fVar1 = (float10)_DAT_01d33f6c;
  round();
  local_14 = (int)ROUND(fVar1);
  if (0x1d < local_14) {
    local_14 = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (g_MoonAnimTextures + local_14,0,0x13b,0xffff);
  engine_3d_c_setBlendMode_FUN_00406c20(0);
  return;
}
