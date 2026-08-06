// Name: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0044d880
// Address: 0044d880
// Address Range: [[0044d880, 0044da32]]
// Convention: __cdecl
// Signature: void __cdecl core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(CMatrix3x3f *this_ptr)

#include "nocturne.h"

void __cdecl core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(CMatrix3x3f *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar30 = (this_ptr->m[1].x * this_ptr->m[2].y - this_ptr->m[1].y * this_ptr->m[2].x) *
           this_ptr->m[0].z +
           ((this_ptr->m[1].y * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].y) *
            this_ptr->m[0].x -
           (this_ptr->m[1].x * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].x) *
           this_ptr->m[0].y);
  if (ABS(fVar30) == 0.0) {
    g_CurrentFilename = "..\\core\\dirmat.cpp";
    g_CurrentLineNumber = 105;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMatrix::invert - Singular matrix");
  }
  fVar1 = this_ptr->m[1].x;
  fVar2 = this_ptr->m[2].z;
  fVar3 = this_ptr->m[1].x;
  fVar4 = this_ptr->m[2].y;
  fVar5 = this_ptr->m[2].z;
  fVar6 = this_ptr->m[0].z;
  fVar7 = this_ptr->m[2].x;
  fVar8 = this_ptr->m[1].z;
  fVar9 = this_ptr->m[2].x;
  fVar10 = this_ptr->m[1].y;
  fVar11 = this_ptr->m[2].x;
  fVar12 = this_ptr->m[0].y;
  fVar13 = this_ptr->m[2].x;
  fVar30 = 1.0 / fVar30;
  fVar14 = this_ptr->m[2].y;
  fVar15 = this_ptr->m[0].y;
  fVar16 = this_ptr->m[1].z;
  fVar17 = this_ptr->m[0].x;
  fVar18 = this_ptr->m[2].z;
  fVar19 = this_ptr->m[0].y;
  fVar20 = this_ptr->m[1].x;
  fVar21 = this_ptr->m[1].y;
  fVar22 = this_ptr->m[0].x;
  fVar23 = this_ptr->m[2].y;
  fVar24 = this_ptr->m[0].x;
  fVar25 = this_ptr->m[1].y;
  fVar26 = this_ptr->m[0].z;
  fVar27 = this_ptr->m[1].x;
  fVar28 = this_ptr->m[0].x;
  fVar29 = this_ptr->m[1].z;
  this_ptr->m[0].x =
       (this_ptr->m[1].y * this_ptr->m[2].z - this_ptr->m[1].z * this_ptr->m[2].y) * fVar30;
  this_ptr->m[0].y = -(this_ptr->m[0].y * fVar5 - this_ptr->m[0].z * fVar14) * fVar30;
  this_ptr->m[0].z = (fVar15 * fVar16 - this_ptr->m[0].z * fVar21) * fVar30;
  this_ptr->m[1].x = -(fVar1 * fVar2 - fVar8 * fVar9) * fVar30;
  this_ptr->m[1].y = (fVar17 * fVar18 - fVar6 * fVar7) * fVar30;
  this_ptr->m[1].z = -(fVar28 * fVar29 - fVar26 * fVar27) * fVar30;
  this_ptr->m[2].x = (fVar3 * fVar4 - fVar10 * fVar11) * fVar30;
  this_ptr->m[2].y = -(fVar22 * fVar23 - fVar12 * fVar13) * fVar30;
  this_ptr->m[2].z = (fVar24 * fVar25 - fVar19 * fVar20) * fVar30;
  return;
}
