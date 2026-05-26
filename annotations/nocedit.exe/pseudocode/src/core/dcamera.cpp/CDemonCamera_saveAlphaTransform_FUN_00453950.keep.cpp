// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
// MANUAL RECONSTRUCTION
// Address Range: [[00453950, 00453a63] [0060c7ab, 0060c7cb]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera *this_ptr,int alpha_index)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera *this_ptr,int alpha_index)

{
  CVector3i CStack_14;

  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  this_ptr->alpha_translations[alpha_index] = CStack_14;
  this_ptr->alpha_transform_matrices[0][alpha_index] = g_TransformMatrix.m[0].x;
  this_ptr->alpha_transform_matrices[1][alpha_index] = g_TransformMatrix.m[0].y;
  this_ptr->alpha_transform_matrices[2][alpha_index] = g_TransformMatrix.m[0].z;
  this_ptr->alpha_transform_matrices[3][alpha_index] = g_TransformMatrix.m[1].x;
  this_ptr->alpha_transform_matrices[4][alpha_index] = g_TransformMatrix.m[1].y;
  this_ptr->alpha_transform_matrices[5][alpha_index] = g_TransformMatrix.m[1].z;
  this_ptr->alpha_transform_matrices[6][alpha_index] = g_TransformMatrix.m[2].x;
  this_ptr->alpha_transform_matrices[7][alpha_index] = g_TransformMatrix.m[2].y;
  this_ptr->alpha_transform_matrices[8][alpha_index] = g_TransformMatrix.m[2].z;
  this_ptr->alpha_transform_matrices[9][alpha_index] = g_InverseMatrix.m[0].x;
  this_ptr->alpha_transform_matrices[10][alpha_index] = g_InverseMatrix.m[0].y;
  this_ptr->alpha_transform_matrices[11][alpha_index] = g_InverseMatrix.m[0].z;
  this_ptr->alpha_transform_matrices[12][alpha_index] = g_InverseMatrix.m[1].x;
  this_ptr->alpha_transform_matrices[13][alpha_index] = g_InverseMatrix.m[1].y;
  this_ptr->alpha_transform_matrices[14][alpha_index] = g_InverseMatrix.m[1].z;
  this_ptr->alpha_transform_matrices[15][alpha_index] = g_InverseMatrix.m[2].x;
  this_ptr->alpha_transform_matrices[16][alpha_index] = g_InverseMatrix.m[2].y;
  this_ptr->alpha_transform_matrices[17][alpha_index] = g_InverseMatrix.m[2].z;
  return;
}
