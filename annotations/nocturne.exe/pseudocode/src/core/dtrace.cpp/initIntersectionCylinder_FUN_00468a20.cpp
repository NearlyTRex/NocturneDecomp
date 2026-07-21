// Name: core_dtrace.cpp_initIntersectionCylinder_FUN_00468a20
// Address: 00468a20
// Address Range: [[00468a20, 00468ae1]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20(undefined4 *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_initIntersectionCylinder_FUN_00468a20(uint *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,uint param_7,uint param_8)

{
  float fVar1;
  float fVar2;
  
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  param_1[9] = param_8;
  param_1[10] = param_7;
  fVar1 = SQRT(param_5 * param_5 + param_4 * param_4);
  fVar2 = param_6 / fVar1 + 1.0;
  param_1[0xb] = param_3 * param_5 + param_2 * param_4;
  *param_1 = 0x3f8147ae;
  param_1[0xc] = fVar2 * param_5 * param_5 + fVar2 * param_4 * param_4 + (float)param_1[0xb];
  if (0.0 < fVar1) {
    param_1[0xd] = param_4 * (1.0 / fVar1);
    param_1[0xe] = param_5 * (1.0 / fVar1);
    return;
  }
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return;
}
