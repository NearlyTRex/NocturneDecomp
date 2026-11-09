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
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  CVector3f local_28;
  CVector3f local_1c;
  
  sound_sndmain_cpp_FUN_00559120();
  engine_special_cpp_clearScreen_FUN_00560d70();
  local_50 = 0x3ee1f6a9;
  local_4c = 0x3f290d17;
  local_48 = 0xbf1b8a5d;
  local_44 = 0xbe8f4c90;
  local_40 = 0x3f3e9ec3;
  local_3c = 0x3f1b2218;
  local_38 = 0x3f5a429e;
  local_28._8_4_ = 0xc0e128b7;
  local_34 = 0xbdc77681;
  local_30 = 0x3f037100;
  local_28._0_4_ = 0x404a54de;
  local_28._4_4_ = 0x40f41b09;
  engine_drender_cpp_FUN_0046cb90(DAT_005f2afc,&local_28);
  engine_matrix_c_FUN_0046d090(DAT_005f2afc,0x422c9ce4);
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
            (DAT_005f2afc,(CMatrix3x3f *)&local_50);
  local_1c._0_4_ = 0;
  local_1c._4_4_ = 0;
  local_1c._8_4_ = 0;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(DAT_005f2afc,&local_1c)
  ;
  pCVar1 = g_CDemonSetPtr;
  *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
  *(uint *)&pCVar1->field_0x15ae88 = 0xffff6f78;
  *(uint *)&pCVar1->field_0x15ae8c = 0xffff6f78;
  *(uint *)&pCVar1->field_0x15ae90 = 37000;
  core_set_cpp_FUN_0053b100(pCVar1,50000,50000,0x10000);
  pCVar1 = g_CDemonSetPtr;
  DAT_00600774 = DAT_00600774 + 1;
  *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0x1964;
  DAT_00600778 = DAT_00600778 + 1;
  *(uint *)&pCVar1->field_0x15ae84 = 0;
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
