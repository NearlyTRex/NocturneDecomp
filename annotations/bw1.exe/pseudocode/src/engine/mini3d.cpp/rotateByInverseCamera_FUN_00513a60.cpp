// Name: engine_mini3d.cpp_rotateByInverseCamera_FUN_00513a60
// Address: 00513a60
// Address Range: [[00513a60, 00513aca]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_00513a60(CVector3f *input,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_00513a60(CVector3f *input,CVector3f *output)

{
  output->x = input->z * g_FLOAT_01d22504 +
              input->x * g_FLOAT_01d224ec + input->y * g_FLOAT_01d224f8;
  output->y = input->z * g_FLOAT_01d22508 +
              input->x * g_FLOAT_01d224f0 + input->y * g_FLOAT_01d224fc;
  output->z = input->z * g_FLOAT_01d2250c +
              input->x * g_FLOAT_01d224f4 + input->y * g_FLOAT_01d22500;
  return;
}
