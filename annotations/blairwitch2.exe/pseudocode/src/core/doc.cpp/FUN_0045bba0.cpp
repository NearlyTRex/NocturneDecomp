// Name: core_doc.cpp_FUN_0045bba0
// Address: 0045bba0
// Address Range: [[0045bba0, 0045bc0b]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0045bba0(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_0045bba0(int param_1)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1006];
  CMatrix3x3f local_54;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar1 = 0;
  local_20.x = *(float *)(param_1 + 0x2565c);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_54,&local_20);
  local_14.z = *(float *)(param_1 + 0x25650);
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&local_54,&local_14,&local_2c);
  *unaff_ESI = local_2c.x;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(float *)((int)&local_2c + (uint)bVar1 * -8 + 4);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  return;
}
