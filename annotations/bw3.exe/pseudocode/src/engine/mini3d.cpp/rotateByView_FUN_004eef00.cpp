// Name: engine_mini3d.cpp_rotateByView_FUN_004eef00
// Address: 004eef00
// Address Range: [[004eef00, 004eef73]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByView_FUN_004eef00(CVector3f *input,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_rotateByView_FUN_004eef00(CVector3f *input,CVector3f *output)

{
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  output->x = input->z * g_FLOAT_01d7f544 +
              input->x * g_FLOAT_01d7f53c + input->y * g_FLOAT_01d7f540;
  output->y = input->z * g_FLOAT_01d7f554 +
              input->x * g_FLOAT_01d7f54c + input->y * g_FLOAT_01d7f550;
  output->z = input->z * g_FLOAT_01d7f564 +
              input->x * g_FLOAT_01d7f55c + input->y * g_FLOAT_01d7f560;
  return;
}
