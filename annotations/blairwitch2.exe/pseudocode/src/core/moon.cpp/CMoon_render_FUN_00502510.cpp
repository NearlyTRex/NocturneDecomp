// Name: core_moon.cpp_CMoon_render_FUN_00502510
// Address: 00502510
// Address Range: [[00502510, 005026fb]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_00502510(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_render_FUN_00502510(CMoon *this_ptr)

{
  CDemonSet *pCVar1;
  float10 fVar2;
  CMatrix3x3f local_54;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  sound_sndmain_cpp_processAudio_FUN_00553580();
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  local_54.m[0].x = 0.441335;
  local_54.m[0].y = 0.660356;
  local_54.m[0].z = -0.60758;
  local_54.m[1].x = -0.279881;
  local_54.m[1].y = 0.74461;
  local_54.m[1].z = 0.605989;
  local_54.m[2].x = 0.852579;
  local_54.m[2].y = -0.097394;
  local_54.m[2].z = 0.513443;
  local_2c.x = 3.16143;
  local_2c.y = 7.6283;
  local_2c.z = -7.03622;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (DAT_0060b280,&local_2c);
  engine_matrix_c_FUN_0046b4b0(DAT_0060b280,0x422c9ce4);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(DAT_0060b280,&local_54);
  local_20.x = 0.0;
  local_20.y = 0.0;
  local_20.z = 0.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,&local_20)
  ;
  pCVar1 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar1->light_direction).x = -37000;
  (pCVar1->light_direction).y = -37000;
  (pCVar1->light_direction).z = 37000;
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(pCVar1,50000,50000,0x10000);
  pCVar1 = g_CDemonSetPtr;
  DAT_0061846c = DAT_0061846c + 1;
  g_CDemonSetPtr->ambient_base_quick = 0x1964;
  DAT_00618474 = DAT_00618474 + 1;
  pCVar1->rendering_mode = 0;
  DAT_00618470 = DAT_00618470 + 1;
  if (0x3c < DAT_0061846c) {
    DAT_0061846c = 0;
  }
  if (0x2d < DAT_00618470) {
    DAT_00618470 = 0;
  }
  if (0x4b < DAT_00618474) {
    DAT_00618474 = 0;
  }
  engine_3d_c_setBlendMode_FUN_00406df0(1);
  fVar2 = (float10)_DAT_01d1cdc4;
  round();
  local_14 = (int)ROUND(fVar2);
  if (0x4a < local_14) {
    local_14 = 0;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (CAlphaBitmap_ARRAY_01d1c7cc + local_14,0,0,0xffff);
  engine_3d_c_setBlendMode_FUN_00406df0(0);
  return;
}
