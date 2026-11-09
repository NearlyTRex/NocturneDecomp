// Name: core_stranger.cpp_FUN_0056da90
// Address: 0056da90
// Address Range: [[0056da90, 0056dafb]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_0056da90(int param_1)

#include "nocturne.h"

void core_stranger_cpp_FUN_0056da90(int param_1)

{
  uint *unaff_ESI;
  byte bVar1;
  uint auStackY_1014 [1006];
  CMatrix3x3f local_54 [40];
  uint local_2c;
  uint auStack_28 [2];
  CVector3f local_20;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar1 = 0;
  local_20._0_4_ = *(uint *)(param_1 + 0x2565c);
  local_20._8_4_ = 0;
  local_20._4_4_ = 0;
  core_dirmat_cpp_FUN_00449280(local_54,&local_20);
  local_c = *(uint *)(param_1 + 0x25650);
  local_14 = 0;
  local_10 = 0;
  core_dirmat_cpp_FUN_00449530(local_54,&local_14);
  *unaff_ESI = local_2c;
  unaff_ESI[(uint)bVar1 * -2 + 1] = auStack_28[(uint)bVar1 * -2];
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       auStack_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  return;
}
