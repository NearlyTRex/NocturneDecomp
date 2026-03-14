// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
// Address: 0048c760
// Address Range: [[0048c760, 0048c77c]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer *this_ptr,CVector3i *output)

{
  CVector3i *extraout_EBX;
  uint *extraout_EDI;
  byte bVar1;
  uint auStack_1000 [1019];
  CVector3i CStack_14;
  
  bVar1 = 0;
  engine_matrix_c_getCameraOrigin_FUN_0050e2c0(&CStack_14);
  *extraout_EDI = 0x48c770;
  extraout_EDI[(uint)bVar1 * -2 + 1] = *(uint *)((int)&CStack_14 + (uint)bVar1 * -8);
  (extraout_EDI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 4);
  return extraout_EBX;
}
