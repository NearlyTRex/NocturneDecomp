// Name: engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
// Address: 00460700
// Address Range: [[00460700, 00460756]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(undefined4 param_1,float *param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700(uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  
  fVar3 = (float10)256;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar4 = (float10)round((float10)param_2[2] * fVar3);
  fVar5 = (float10)round((float10)fVar1 * fVar3);
  iVar7 = (int)ROUND(fVar4);
  uVar6 = 0x460740;
  fVar3 = (float10)round((float10)fVar2 * fVar3);
  engine_matrix_c_setCameraOrigin_FUN_004ce710((int)ROUND(fVar3),(int)ROUND(fVar5),uVar6,iVar7);
  return;
}
