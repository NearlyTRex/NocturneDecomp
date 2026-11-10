// Name: core_dcube.cpp_intersectXZCylinderWithHeight_FUN_00444f70
// Address: 00444f70
// Address Range: [[00444f70, 0044500d]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00444f70(SIntersectXZCylinder *param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectXZCylinderWithHeight_FUN_00444f70(SIntersectXZCylinder *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x3c) = *param_2;
  *(uint *)(param_1 + 0x40) = param_2[2];
  *(uint *)(param_1 + 0x44) = *param_3;
  *(uint *)(param_1 + 0x48) = param_3[2];
  iVar2 = core_dcube_cpp_intersectXZCylinder_FUN_00444c90(param_1);
  if (((iVar2 != 0) &&
      (fVar1 = ((float)param_3[1] - (float)param_2[1]) * *(float *)(param_1 + 0x50) +
               (float)param_2[1], *(float *)(param_1 + 0x28) < fVar1)) &&
     (fVar1 < *(float *)(param_1 + 0x24))) {
    *(uint *)(param_1 + 8) = 0;
    *(uint *)param_1 = *(uint *)(param_1 + 0x4c);
    *(float *)(param_1 + 0xc) =
         (*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x14)) -
         *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 4) =
         (*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x10)) -
         *(float *)(param_1 + 0x54);
    return 1;
  }
  return 0;
}
