// Name: engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
// Address: 0048c7e0
// Address Range: [[0048c7e0, 0048c7fc]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0(CDemonRenderer *this_ptr,CVector3i *output)

{
  uint *puVar1;
  byte bVar2;
  uint auStack_1000 [1019];
  CVector3i CStack_14;
  
  bVar2 = 0;
  engine_matrix_c_getCameraRotation_FUN_0050e2f0(&CStack_14);
  puVar1 = (uint *)((int)output + (uint)bVar2 * -8 + 4);
  output->x = 0x48c7f0;
  *puVar1 = *(uint *)((int)&CStack_14 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4);
  return output;
}
