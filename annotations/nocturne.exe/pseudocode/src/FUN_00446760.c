// Name: FUN_00446760
// Address: 00446760
// Address Range: [[00446760, 004467f4]]
// Convention: unknown
// Signature: float * FUN_00446760(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00446760(uint param_1,float *param_2,uint param_3,uint param_4)

{
  float fVar1;
  byte bVar2;
  int aiStackY_1028 [1015];
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_28;
  uint local_1c;
  
  bVar2 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(param_1,param_3,param_4);
  local_1c = local_34;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(param_1,&stack0xffffffe4);
  local_40 = local_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  fVar1 = (float)_DAT_0057b9f3;
  *param_2 = (float)local_40 * fVar1;
  param_2[1] = (float)local_3c * fVar1;
  param_2[2] = (float)local_38 * fVar1;
  return param_2;
}
