// Name: core_xform.cpp_multiplyMatrix3x4InPlace_FUN_0055abb0
// Address: 0055abb0
// Address Range: [[0055abb0, 0055abe1]]
// Convention: unknown
// Signature: undefined4 * core_xform_cpp_multiplyMatrix3x4InPlace_FUN_0055abb0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * core_xform_cpp_multiplyMatrix3x4InPlace_FUN_0055abb0(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_3c [12];
  
  bVar4 = 0;
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(param_1,param_2);
  puVar2 = auStack_3c;
  puVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return param_1;
}
