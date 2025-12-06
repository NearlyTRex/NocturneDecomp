// Name: core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
// Address: 005f5390
// Address Range: [[005f5390, 005f54bd]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
          (CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)euler_angles->x);
  fVar7 = (float10)fcos((float10)euler_angles->x);
  fVar8 = (float10)fsin((float10)euler_angles->z);
  fVar9 = (float10)fcos((float10)euler_angles->z);
  fVar10 = (float10)fsin((float10)euler_angles->y);
  fVar11 = (float10)fcos((float10)euler_angles->y);
  dVar1 = (double)fVar10;
  dVar2 = (double)fVar7;
  dVar3 = (double)fVar8;
  dVar4 = (double)fVar9;
  dVar5 = (double)fVar11;
  output_matrix->m[2].x = (float)-fVar6;
  output_matrix->m[2].w = (float)((float10)dVar1 * (float10)dVar2);
  output_matrix->m[0].x = (float)(fVar8 * (float10)dVar2);
  output_matrix->m[1].x = (float)(fVar9 * (float10)dVar2);
  output_matrix->m[2].y = (float)((float10)dVar5 * (float10)dVar2);
  output_matrix->m[0].w = (float)((float10)dVar5 * (float10)dVar4 + fVar10 * fVar6 * (float10)dVar3)
  ;
  output_matrix->m[1].y = (float)((float10)dVar3 * (float10)dVar1 + fVar11 * fVar6 * (float10)dVar4)
  ;
  output_matrix->m[1].w =
       (float)(-(float10)dVar5 * (float10)dVar3 + fVar10 * fVar6 * (float10)dVar4);
  output_matrix->m[0].y =
       (float)(-(float10)dVar1 * (float10)dVar4 + fVar11 * fVar6 * (float10)dVar3);
  output_matrix->m[0].z =
       -(position->z * output_matrix->m[0].y +
        position->x * output_matrix->m[0].w + position->y * output_matrix->m[0].x);
  output_matrix->m[1].z =
       -(position->z * output_matrix->m[1].y +
        position->x * output_matrix->m[1].w + position->y * output_matrix->m[1].x);
  output_matrix->m[2].z =
       -(position->z * output_matrix->m[2].y +
        position->x * output_matrix->m[2].w + position->y * output_matrix->m[2].x);
  return;
}
