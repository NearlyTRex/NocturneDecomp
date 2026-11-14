// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
// Address: 0046b5c0
// Address Range: [[0046b5c0, 0046b5dc]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer *this_ptr,CVector3i *output)

{
  uint *puVar1;
  byte bVar2;
  int aiStack_ffc [1018];
  CVector3i CStack_14;
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ea3b0(&CStack_14);
  puVar1 = (uint *)((int)output + (uint)bVar2 * -8 + 4);
  output->x = CStack_14.x;
  *puVar1 = *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + 4);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  return output;
}
