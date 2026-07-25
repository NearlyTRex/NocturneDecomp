// Name: FUN_00518320
// Address: 00518320
// Address Range: [[00518320, 00518436]]
// Convention: unknown
// Signature: float * FUN_00518320(int param_1,float *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

float * FUN_00518320(int param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  byte local_38 [12];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  pfVar1 = (float *)(*(int *)(param_1 + param_3 * 4 + 0x40) + param_4 * 0x34);
  pfVar4 = pfVar1 + 4;
  local_14 = pfVar1;
  if (*(char *)pfVar1 == '\x01') {
    core_xform_cpp_transformVector3x4_FUN_0055a8b0
              (param_2,pfVar4,(uint)*(byte *)((int)pfVar1 + 1) * 0x30 + param_5);
  }
  else {
    iVar5 = 0;
    local_28 = 0.0;
    local_24 = 0.0;
    local_2c = 0.0;
    pfVar3 = pfVar1;
    while( true ) {
      pfVar3 = pfVar3 + 1;
      if ((int)(uint)*(byte *)local_14 <= iVar5) break;
      pfVar2 = (float *)core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (local_38,pfVar4,(uint)*(byte *)((int)pfVar1 + 1) * 0x30 + param_5
                                  );
      local_20 = *pfVar2 * *pfVar3;
      local_1c = pfVar2[1] * *pfVar3;
      local_18 = pfVar2[2] * *pfVar3;
      pfVar1 = (float *)((int)pfVar1 + 1);
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 3;
      local_2c = local_2c + local_20;
      local_28 = local_28 + local_1c;
      local_24 = local_24 + local_18;
    }
    *param_2 = local_2c;
    param_2[1] = local_28;
    param_2[2] = local_24;
  }
  return param_2;
}
