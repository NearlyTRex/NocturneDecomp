// Name: core_spline.cpp_FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005677bd]]
// Convention: __cdecl
// Signature: void __cdecl core_spline_cpp_FUN_00567630(float *out_basis,float t,float tension)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spline_cpp_FUN_00567630(float *out_basis,float t,float tension)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = t * t;
  fVar3 = (1.0 - tension) * _DAT_005d5bf6;
  fVar2 = fVar1 * t;
  fVar4 = fVar3 * _DAT_005d5bfa;
  fVar7 = fVar3 * _DAT_005d5bfe;
  fVar6 = _DAT_005d5bfa - fVar3;
  fVar5 = fVar3 + _DAT_005d5bfe;
  fVar9 = _DAT_005d5c02 - fVar4;
  out_basis[1] = fVar5 * fVar1 + fVar6 * fVar2 + 1.0;
  fVar8 = fVar3 * _DAT_005d5c0a;
  fVar10 = fVar3 + _DAT_005d5c06;
  out_basis[3] = fVar3 * fVar2 - fVar3 * fVar1;
  fVar11 = fVar3 * _DAT_005d5c02;
  fVar6 = fVar6 * _DAT_005d5c02;
  out_basis[4] = (fVar8 * t + fVar7 * fVar1) - fVar3;
  fVar7 = fVar9 * _DAT_005d5bfa;
  out_basis[5] = fVar5 * _DAT_005d5bfa * t + fVar6 * fVar1;
  fVar5 = fVar10 * _DAT_005d5c02;
  out_basis[7] = fVar11 * fVar1 - fVar4 * t;
  *out_basis = (-fVar3 * fVar2 + fVar4 * fVar1) - fVar3 * t;
  out_basis[2] = fVar9 * fVar1 + fVar10 * fVar2 + fVar3 * t;
  out_basis[6] = fVar5 * fVar1 + fVar7 * t + fVar3;
  return;
}
