// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0
// Address: 004545b0
// Address Range: [[004545b0, 004546c3]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0(CDemonCamera *this_ptr,int alpha_index)

{
  int *piVar1;
  byte bVar2;
  int aiStack_ffc [1021];
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_00509050();
  piVar1 = (int *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  this_ptr->alpha_translations[alpha_index].x = aiStack_ffc[0x3fa];
  *piVar1 = aiStack_ffc[(uint)bVar2 * -2 + 0x3fb];
  piVar1[(uint)bVar2 * -2 + 1] = aiStack_ffc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  this_ptr->alpha_transform_matrices[0][alpha_index] = _DAT_01c51d5c;
  this_ptr->alpha_transform_matrices[1][alpha_index] = _DAT_01c51d60;
  this_ptr->alpha_transform_matrices[2][alpha_index] = _DAT_01c51d64;
  this_ptr->alpha_transform_matrices[3][alpha_index] = _DAT_01c51d68;
  this_ptr->alpha_transform_matrices[4][alpha_index] = _DAT_01c51d6c;
  this_ptr->alpha_transform_matrices[5][alpha_index] = _DAT_01c51d70;
  this_ptr->alpha_transform_matrices[6][alpha_index] = _DAT_01c51d74;
  this_ptr->alpha_transform_matrices[7][alpha_index] = _DAT_01c51d78;
  this_ptr->alpha_transform_matrices[8][alpha_index] = _DAT_01c51d7c;
  this_ptr->alpha_transform_matrices[9][alpha_index] = _DAT_01d1dd18;
  this_ptr->alpha_transform_matrices[10][alpha_index] = _DAT_01d1dd1c;
  this_ptr->alpha_transform_matrices[0xb][alpha_index] = _DAT_01d1dd20;
  this_ptr->alpha_transform_matrices[0xc][alpha_index] = _DAT_01d1dd24;
  this_ptr->alpha_transform_matrices[0xd][alpha_index] = _DAT_01d1dd28;
  this_ptr->alpha_transform_matrices[0xe][alpha_index] = _DAT_01d1dd2c;
  this_ptr->alpha_transform_matrices[0xf][alpha_index] = _DAT_01d1dd30;
  this_ptr->alpha_transform_matrices[0x10][alpha_index] = _DAT_01d1dd34;
  this_ptr->alpha_transform_matrices[0x11][alpha_index] = _DAT_01d1dd38;
  return;
}
