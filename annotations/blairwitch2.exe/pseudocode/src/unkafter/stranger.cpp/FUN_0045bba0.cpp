// Name: unkafter_stranger.cpp_FUN_0045bba0
// Address: 0045bba0
// Address Range: [[0045bba0, 0045bc0b]]
// Convention: unknown
// Signature: void unkafter_stranger_cpp_FUN_0045bba0(int param_1)

#include "nocturne.h"

void unkafter_stranger_cpp_FUN_0045bba0(int param_1)

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
  local_20.x = *(float *)(param_1 + 0x2565c);
  local_20.z = 0.0;
  local_20.y = 0.0;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&local_54,&local_20);
  local_c = *(uint *)(param_1 + 0x25650);
  local_14 = 0;
  local_10 = 0;
  core_dirmat_cpp_FUN_00449530(&local_54,&local_14);
  *unaff_ESI = local_2c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = afStack_28[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       afStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
