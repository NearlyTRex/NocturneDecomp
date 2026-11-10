// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00450700
// Address: 00450700
// Address Range: [[00450700, 00450813]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00450700(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00450700(CDemonCamera *this_ptr,int alpha_index)

{
  int *piVar1;
  byte bVar2;
  int aiStack_ffc [1021];
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004e6a90();
  piVar1 = (int *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  this_ptr->alpha_translations[alpha_index].x = aiStack_ffc[0x3fa];
  *piVar1 = aiStack_ffc[(uint)bVar2 * -2 + 0x3fb];
  piVar1[(uint)bVar2 * -2 + 1] = aiStack_ffc[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x3fc];
  this_ptr->alpha_transform_matrices[0][alpha_index] = _DAT_01c6e2fc;
  this_ptr->alpha_transform_matrices[1][alpha_index] = _DAT_01c6e300;
  this_ptr->alpha_transform_matrices[2][alpha_index] = _DAT_01c6e304;
  this_ptr->alpha_transform_matrices[3][alpha_index] = _DAT_01c6e308;
  this_ptr->alpha_transform_matrices[4][alpha_index] = _DAT_01c6e30c;
  this_ptr->alpha_transform_matrices[5][alpha_index] = _DAT_01c6e310;
  this_ptr->alpha_transform_matrices[6][alpha_index] = _DAT_01c6e314;
  this_ptr->alpha_transform_matrices[7][alpha_index] = _DAT_01c6e318;
  this_ptr->alpha_transform_matrices[8][alpha_index] = _DAT_01c6e31c;
  this_ptr->alpha_transform_matrices[9][alpha_index] = _DAT_01d72644;
  this_ptr->alpha_transform_matrices[10][alpha_index] = _DAT_01d72648;
  this_ptr->alpha_transform_matrices[0xb][alpha_index] = _DAT_01d7264c;
  this_ptr->alpha_transform_matrices[0xc][alpha_index] = _DAT_01d72650;
  this_ptr->alpha_transform_matrices[0xd][alpha_index] = _DAT_01d72654;
  this_ptr->alpha_transform_matrices[0xe][alpha_index] = _DAT_01d72658;
  this_ptr->alpha_transform_matrices[0xf][alpha_index] = _DAT_01d7265c;
  this_ptr->alpha_transform_matrices[0x10][alpha_index] = _DAT_01d72660;
  this_ptr->alpha_transform_matrices[0x11][alpha_index] = _DAT_01d72664;
  return;
}
