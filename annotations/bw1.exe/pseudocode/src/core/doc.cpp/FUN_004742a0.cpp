// Name: core_doc.cpp_FUN_004742a0
// Address: 004742a0
// Address Range: [[004742a0, 0047430b]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_004742a0(int param_1)

#include "nocturne.h"

void core_doc_cpp_FUN_004742a0(int param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  float afStackY_1014 [1006];
  CMatrix3x3f local_54;
  uint local_2c;
  float afStack_28 [2];
  CVector3f local_20;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar1 = 0;
  local_20.x = *(float *)(param_1 + 0x1ffc8);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&local_54,&local_20);
  local_c = *(uint *)(param_1 + 0x1ffbc);
  local_14 = 0;
  local_10 = 0;
  core_dirmat_cpp_FUN_0045f690(&local_54,&local_14);
  *unaff_ESI = local_2c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = afStack_28[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
