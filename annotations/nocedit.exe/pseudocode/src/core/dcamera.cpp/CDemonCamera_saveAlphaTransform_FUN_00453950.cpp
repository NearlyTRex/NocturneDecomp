// Name: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
// Address: 00453950
// Address Range: [[00453950, 00453a63]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera * this_ptr, int alpha_index)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
          (CDemonCamera *this_ptr,int alpha_index)

{
  uint *puVar1;
  byte bVar2;
  int aiStack_ffc [1018];
  CVector3i CStack_14;
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
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
  this_ptr->alpha_transform_matrices[9][alpha_index] = g_InverseMatrix.m[0].x;
  this_ptr->alpha_transform_matrices[10][alpha_index] = g_InverseMatrix.m[0].y;
  this_ptr->alpha_transform_matrices[0xb][alpha_index] = g_InverseMatrix.m[0].z;
  this_ptr->alpha_transform_matrices[0xc][alpha_index] = g_InverseMatrix.m[1].x;
  this_ptr->alpha_transform_matrices[0xd][alpha_index] = g_InverseMatrix.m[1].y;
  this_ptr->alpha_transform_matrices[0xe][alpha_index] = g_InverseMatrix.m[1].z;
  *(int *)((int)((this_ptr->transform_state).saved_source_matrix.m + -10) + alpha_index * 4) =
       g_InverseMatrix.m[2].x;
  *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + alpha_index * 4 + -0x58) =
       g_InverseMatrix.m[2].y;
  *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + alpha_index * 4 + -0x38) =
       g_InverseMatrix.m[2].z;
  return;
}
