// Name: core_doc.cpp_FUN_004742a0
// Address: 004742a0
// Address Range: [[004742a0, 0047430b]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004742a0(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_004742a0(int param_1)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1006];
  CMatrix3x3f local_54;
  CVector3f local_2c;
  CVector3f local_20;
  CVector3f local_14;
  
  bVar1 = 0;
  local_20.x = *(float *)(param_1 + 0x1ffc8);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_54,&local_20);
  local_14.z = *(float *)(param_1 + 0x1ffbc);
  local_14.x = 0.0;
  local_14.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(&local_54,&local_14,&local_2c);
  *unaff_ESI = local_2c.x;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(float *)((int)&local_2c + (uint)bVar1 * -8 + 4);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_2c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  return;
}
