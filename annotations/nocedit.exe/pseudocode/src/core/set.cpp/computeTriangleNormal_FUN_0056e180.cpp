// Name: core_set.cpp_computeTriangleNormal_FUN_0056e180
// Address: 0056e180
// Address Range: [[0056e180, 0056e2a3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(int *vertex_array,void *param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_computeTriangleNormal_FUN_0056e180(int *vertex_array,void *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = vertex_array + *(int *)((int)param_2 + 0x24) * 3;
  piVar1 = vertex_array + *(int *)((int)param_2 + 0x18) * 3;
  piVar7 = vertex_array + *(int *)((int)param_2 + 0x30) * 3;
  fVar2 = (float)(piVar6[1] - piVar1[1]) * (float)(piVar7[2] - piVar6[2]) -
          (float)(piVar7[1] - piVar6[1]) * (float)(piVar6[2] - piVar1[2]);
  fVar5 = (float)(*piVar7 - *piVar6) * (float)(piVar6[2] - piVar1[2]) -
          (float)(*piVar6 - *piVar1) * (float)(piVar7[2] - piVar6[2]);
  fVar4 = (float)(*piVar6 - *piVar1) * (float)(piVar7[1] - piVar6[1]) -
          (float)(*piVar7 - *piVar6) * (float)(piVar6[1] - piVar1[1]);
  fVar3 = (float)(g_LightAttenuationMax -
                 ((int)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) >> 1)) *
          (float)65535;
  *(float *)((int)param_2 + 8) = fVar2 * fVar3;
  *(float *)((int)param_2 + 0xc) = fVar5 * fVar3;
  *(float *)((int)param_2 + 0x10) = fVar4 * fVar3;
  return;
}
