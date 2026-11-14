// Name: engine_mini3d.cpp_unprojectPoint_FUN_00513ad0
// Address: 00513ad0
// Address Range: [[00513ad0, 00513b8e]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_00513ad0(float *screen_point,CVector3f *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_unprojectPoint_FUN_00513ad0(float *screen_point,CVector3f *output)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ((*screen_point - _DAT_01d224e4) * screen_point[2]) / _DAT_01d224dc;
  fVar4 = ((screen_point[1] - _DAT_01d224e8) * screen_point[2]) / _DAT_01d224e0;
  fVar1 = screen_point[2];
  fVar5 = _DAT_01d22514 + fVar1 * _DAT_01d22508 + fVar4 * _DAT_01d224fc + fVar2 * _DAT_01d224f0;
  fVar3 = _DAT_01d22518 + fVar1 * _DAT_01d2250c + fVar4 * _DAT_01d22500 + fVar2 * _DAT_01d224f4;
  output->x = _DAT_01d22510 + fVar1 * _DAT_01d22504 + fVar4 * _DAT_01d224f8 + fVar2 * _DAT_01d224ec;
  output->y = fVar5;
  output->z = fVar3;
  return;
}
