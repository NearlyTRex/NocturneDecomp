// Name: core_moon.cpp_FUN_004f9670
// Address: 004f9670
// Address Range: [[004f9670, 004f99ab]]
// Convention: unknown
// Signature: void core_moon_cpp_FUN_004f9670(int param_1)

#include "nocturne.h"

void core_moon_cpp_FUN_004f9670(int param_1)

{
  CDemonSet *pCVar1;
  int iVar2;
  CMatrix3x3f local_50;
  CVector3f local_28;
  CVector3f local_1c;
  
  sound_sndmain_cpp_processAudio_FUN_00559120();
  engine_special_cpp_clearScreen_FUN_00560d70();
  local_50.m[0].x = 0.441335;
  local_50.m[0].y = 0.660356;
  local_50.m[0].z = -0.60758;
  local_50.m[1].x = -0.279881;
  local_50.m[1].y = 0.74461;
  local_50.m[1].z = 0.605989;
  local_50.m[2].x = 0.852579;
  local_28.z = -7.03622;
  local_50.m[2].y = -0.097394;
  local_50.m[2].z = 0.513443;
  local_28.x = 3.16143;
  local_28.y = 7.6283;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (DAT_005f2afc,&local_28);
  engine_matrix_c_FUN_0046d090(DAT_005f2afc,0x422c9ce4);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(DAT_005f2afc,&local_50);
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  local_1c.z = 0.0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,&local_1c)
  ;
  pCVar1 = g_CDemonSetPtr;
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar1->light_direction).x = -37000;
  (pCVar1->light_direction).y = -37000;
  (pCVar1->light_direction).z = 37000;
  core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(pCVar1,50000,50000,0x10000);
  pCVar1 = g_CDemonSetPtr;
  DAT_00600774 = DAT_00600774 + 1;
  g_CDemonSetPtr->ambient_base_quick = 0x1964;
  DAT_00600778 = DAT_00600778 + 1;
  pCVar1->rendering_mode = 0;
  DAT_0060077c = DAT_0060077c + 1;
  if (0x3c < DAT_00600774) {
    DAT_00600774 = 0;
  }
  if (0x2d < DAT_00600778) {
    DAT_00600778 = 0;
  }
  if (0x4b < DAT_0060077c) {
    DAT_0060077c = 0;
  }
  iVar2 = *(int *)(param_1 + 0xad0) + 2;
  *(int *)(param_1 + 0xad0) = iVar2;
  if (0x27f < iVar2) {
    *(uint *)(param_1 + 0xad0) = 0xfffffd80;
  }
  iVar2 = *(int *)(param_1 + 0xad4) + 2;
  *(int *)(param_1 + 0xad4) = iVar2;
  if (0x27f < iVar2) {
    *(uint *)(param_1 + 0xad4) = 0xfffffd80;
  }
  iVar2 = *(int *)(param_1 + 0xad8) + -1;
  *(int *)(param_1 + 0xad8) = iVar2;
  if (iVar2 < -0x1df) {
    *(uint *)(param_1 + 0xad8) = 0x1df;
  }
  iVar2 = *(int *)(param_1 + 0xadc) + -1;
  *(int *)(param_1 + 0xadc) = iVar2;
  if (iVar2 < -0x1df) {
    *(uint *)(param_1 + 0xadc) = 0x1df;
  }
  if (*(int *)(param_1 + 0xae4) == 0) {
    iVar2 = *(int *)(param_1 + 0xae0) + -500;
    *(int *)(param_1 + 0xae0) = iVar2;
    if (iVar2 < 5000) {
      *(uint *)(param_1 + 0xae0) = 5000;
      *(uint *)(param_1 + 0xae4) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xae0) + 500;
    *(int *)(param_1 + 0xae0) = iVar2;
    if (0xffff < iVar2) {
      *(uint *)(param_1 + 0xae0) = 0xffff;
      *(uint *)(param_1 + 0xae4) = 0;
    }
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d883a8,*(int *)(param_1 + 0xad0),*(int *)(param_1 + 0xad8),0xffff);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d883a8,*(int *)(param_1 + 0xad4),*(int *)(param_1 + 0xad8),0xffff);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d883a8,*(int *)(param_1 + 0xad0),*(int *)(param_1 + 0xadc),0xffff);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d883a8,*(int *)(param_1 + 0xad4),*(int *)(param_1 + 0xadc),0xffff);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d88628,0x40,0x40,*(int *)(param_1 + 0xae0));
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d88614,0,0,0xffff);
  return;
}
