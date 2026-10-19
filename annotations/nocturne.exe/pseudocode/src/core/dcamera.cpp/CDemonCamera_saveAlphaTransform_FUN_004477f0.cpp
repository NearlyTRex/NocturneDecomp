// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0
// Address: 004477f0
// Address Range: [[004477f0, 00447903]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004477f0(CDemonCamera *this_ptr,int alpha_index)

{
  uint *puVar1;
  byte bVar2;
  int aiStack_ffc [1018];
  CVector3i CStack_14;
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&CStack_14);
  puVar1 = (uint *)((int)this_ptr + (uint)bVar2 * -8 + alpha_index * 0xc + 0x11f0);
  this_ptr->alpha_translations[alpha_index].x = CStack_14.x;
  *puVar1 = *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  this_ptr->alpha_transform_matrices[0][alpha_index] = g_TransformMatrix.m[0].x;
  this_ptr->alpha_transform_matrices[1][alpha_index] = g_TransformMatrix.m[0].y;
  this_ptr->alpha_transform_matrices[2][alpha_index] = g_TransformMatrix.m[0].z;
  this_ptr->alpha_transform_matrices[3][alpha_index] = g_TransformMatrix.m[1].x;
  this_ptr->alpha_transform_matrices[4][alpha_index] = g_TransformMatrix.m[1].y;
  this_ptr->alpha_transform_matrices[5][alpha_index] = g_TransformMatrix.m[1].z;
  this_ptr->alpha_transform_matrices[6][alpha_index] = g_TransformMatrix.m[2].x;
  this_ptr->alpha_transform_matrices[7][alpha_index] = g_TransformMatrix.m[2].y;
  this_ptr->alpha_transform_matrices[8][alpha_index] = g_TransformMatrix.m[2].z;
  this_ptr->alpha_transform_matrices[9][alpha_index] = _DAT_01cc5118;
  this_ptr->alpha_transform_matrices[10][alpha_index] = _DAT_01cc511c;
  this_ptr->alpha_transform_matrices[0xb][alpha_index] = _DAT_01cc5120;
  this_ptr->alpha_transform_matrices[0xc][alpha_index] = _DAT_01cc5124;
  this_ptr->alpha_transform_matrices[0xd][alpha_index] = _DAT_01cc5128;
  this_ptr->alpha_transform_matrices[0xe][alpha_index] = _DAT_01cc512c;
  this_ptr->alpha_transform_matrices[0xf][alpha_index] = _DAT_01cc5130;
  this_ptr->alpha_transform_matrices[0x10][alpha_index] = _DAT_01cc5134;
  this_ptr->alpha_transform_matrices[0x11][alpha_index] = _DAT_01cc5138;
  return;
}
