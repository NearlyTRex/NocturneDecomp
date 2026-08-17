// Name: engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10
// Address: 00460d10
// Address Range: [[00460d10, 00460d2c]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10(CDemonRenderer *this_ptr,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00460d10(CDemonRenderer *this_ptr,CVector3i *output)

{
  uint *puVar1;
  byte bVar2;
  uint auStack_1000 [1019];
  CVector3i CStack_14;
  
  bVar2 = 0;
  engine_matrix_c_getCameraOrigin_FUN_004ce760(&CStack_14);
  puVar1 = (uint *)((int)output + (uint)bVar2 * -8 + 4);
  output->x = 0x460d20;
  *puVar1 = *(uint *)((int)&CStack_14 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)((int)&CStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 4);
  return output;
}
