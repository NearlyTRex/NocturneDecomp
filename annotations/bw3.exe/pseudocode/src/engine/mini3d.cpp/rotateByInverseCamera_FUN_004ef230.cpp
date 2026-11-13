// Name: engine_mini3d.cpp_rotateByInverseCamera_FUN_004ef230
// Address: 004ef230
// Address Range: [[004ef230, 004ef29a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004ef230(CVector3f *input,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_rotateByInverseCamera_FUN_004ef230(CVector3f *input,CVector3f *output)

{
  output->x = input->z * _DAT_01d76c84 + input->x * _DAT_01d76c6c + input->y * _DAT_01d76c78;
  output->y = input->z * _DAT_01d76c88 + input->x * _DAT_01d76c70 + input->y * _DAT_01d76c7c;
  output->z = input->z * _DAT_01d76c8c + input->x * _DAT_01d76c74 + input->y * _DAT_01d76c80;
  return;
}
