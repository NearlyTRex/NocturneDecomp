// Name: engine_mini3d.cpp_rotateByInverseCamera_FUN_004f4d10
// Address: 004f4d10
// Address Range: [[004f4d10, 004f4d7a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004f4d10(CVector3f *input,CVector3f *output)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004f4d10(CVector3f *input,CVector3f *output)

{
  output->x = input->z * g_FLOAT_01d098a4 +
              input->x * g_FLOAT_01d0988c + input->y * g_FLOAT_01d09898;
  output->y = input->z * g_FLOAT_01d098a8 +
              input->x * g_FLOAT_01d09890 + input->y * g_FLOAT_01d0989c;
  output->z = input->z * g_FLOAT_01d098ac +
              input->x * g_FLOAT_01d09894 + input->y * g_FLOAT_01d098a0;
  return;
}
