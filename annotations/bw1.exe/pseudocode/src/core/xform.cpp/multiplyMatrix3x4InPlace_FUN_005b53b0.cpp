// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_005b53b0
// Address: 005b53b0
// Address Range: [[005b53b0, 005b53e1]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005b53b0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * __cdecl core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005b53b0(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [12];
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(param_1,param_2);
  puVar2 = auStack_3c;
  puVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return param_1;
}
