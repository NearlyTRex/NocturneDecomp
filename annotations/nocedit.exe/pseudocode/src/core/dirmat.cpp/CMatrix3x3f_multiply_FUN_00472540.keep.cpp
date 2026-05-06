// Name: core_dirmat.cpp_CMatrix3x3f_multiply_FUN_00472540
// Address: 00472540
// MANUAL RECONSTRUCTION
// Address Range: [[00472540, 00472674]]
// Convention: __stack2_esi
// Signature: CMatrix3x3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b,CMatrix3x3f *matrix_out)

#include "nocturne.h"

CMatrix3x3f * __stack2_esi core_dirmat_cpp_CMatrix3x3f_multiply_FUN_00472540(CMatrix3x3f *matrix_a,CMatrix3x3f *matrix_b,CMatrix3x3f *matrix_out)

{
  // Scratch lets matrix_out alias matrix_a or matrix_b safely (in-place mul).
  // The original .cpp dropped 5 of the 9 multiply-add expressions; the asm has
  // all nine FSTPs. The asm also issues `REP MOVSD ECX=10` after only 9 stores,
  // copying one uninit dword past the end of matrix_out — fixed here by using a
  // typed struct assignment.
  CMatrix3x3f scratch;

  scratch.m[0].x = matrix_a->m[0].x * matrix_b->m[0].x +
                   matrix_a->m[0].y * matrix_b->m[1].x +
                   matrix_a->m[0].z * matrix_b->m[2].x;
  scratch.m[0].y = matrix_a->m[0].x * matrix_b->m[0].y +
                   matrix_a->m[0].y * matrix_b->m[1].y +
                   matrix_a->m[0].z * matrix_b->m[2].y;
  scratch.m[0].z = matrix_a->m[0].x * matrix_b->m[0].z +
                   matrix_a->m[0].y * matrix_b->m[1].z +
                   matrix_a->m[0].z * matrix_b->m[2].z;
  scratch.m[1].x = matrix_a->m[1].x * matrix_b->m[0].x +
                   matrix_a->m[1].y * matrix_b->m[1].x +
                   matrix_a->m[1].z * matrix_b->m[2].x;
  scratch.m[1].y = matrix_a->m[1].x * matrix_b->m[0].y +
                   matrix_a->m[1].y * matrix_b->m[1].y +
                   matrix_a->m[1].z * matrix_b->m[2].y;
  scratch.m[1].z = matrix_a->m[1].x * matrix_b->m[0].z +
                   matrix_a->m[1].y * matrix_b->m[1].z +
                   matrix_a->m[1].z * matrix_b->m[2].z;
  scratch.m[2].x = matrix_a->m[2].x * matrix_b->m[0].x +
                   matrix_a->m[2].y * matrix_b->m[1].x +
                   matrix_a->m[2].z * matrix_b->m[2].x;
  scratch.m[2].y = matrix_a->m[2].x * matrix_b->m[0].y +
                   matrix_a->m[2].y * matrix_b->m[1].y +
                   matrix_a->m[2].z * matrix_b->m[2].y;
  scratch.m[2].z = matrix_a->m[2].x * matrix_b->m[0].z +
                   matrix_a->m[2].y * matrix_b->m[1].z +
                   matrix_a->m[2].z * matrix_b->m[2].z;

  *matrix_out = scratch;
  return matrix_out;
}
