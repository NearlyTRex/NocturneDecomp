// Name: engine_mini3d.cpp_rotateByView_FUN_004f49e0
// Address: 004f49e0
// Address Range: [[004f49e0, 004f4a53]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_rotateByView_FUN_004f49e0(CVector3f *input,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_rotateByView_FUN_004f49e0(CVector3f *input,CVector3f *output)

{
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  output->x = input->z * _DAT_01d167b4 + input->x * _DAT_01d167ac + input->y * _DAT_01d167b0;
  output->y = input->z * _DAT_01d167c4 + input->x * _DAT_01d167bc + input->y * _DAT_01d167c0;
  output->z = input->z * _DAT_01d167d4 + input->x * _DAT_01d167cc + input->y * _DAT_01d167d0;
  return;
}
