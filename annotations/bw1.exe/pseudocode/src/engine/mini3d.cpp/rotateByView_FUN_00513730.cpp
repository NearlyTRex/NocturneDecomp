// Name: engine_mini3d.cpp_rotateByView_FUN_00513730
// Address: 00513730
// Address Range: [[00513730, 005137a3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByView_FUN_00513730(CVector3f *input,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_rotateByView_FUN_00513730(CVector3f *input,CVector3f *output)

{
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  output->x = input->z * _DAT_01d2adc4 + input->x * _DAT_01d2adbc + input->y * _DAT_01d2adc0;
  output->y = input->z * _DAT_01d2add4 + input->x * _DAT_01d2adcc + input->y * _DAT_01d2add0;
  output->z = input->z * _DAT_01d2ade4 + input->x * _DAT_01d2addc + input->y * _DAT_01d2ade0;
  return;
}
