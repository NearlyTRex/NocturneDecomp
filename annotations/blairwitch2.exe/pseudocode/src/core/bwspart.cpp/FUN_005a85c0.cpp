// Name: core_bwspart.cpp_FUN_005a85c0
// Address: 005a85c0
// Address Range: [[005a85c0, 005a8691]]
// Convention: unknown
// Signature: void core_bwspart_cpp_FUN_005a85c0(int *param_1,float param_2)

#include "nocturne.h"

void core_bwspart_cpp_FUN_005a85c0(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_1 != 0) {
    fVar1 = (float)param_1[2];
    param_1[2] = (int)(fVar1 - param_2);
    if (fVar1 - param_2 <= 0.0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    fVar3 = (float)param_1[0xc] + (float)param_1[0xf] * param_2;
    param_1[0xc] = (int)fVar3;
    fVar2 = (float)param_1[0xd] + (float)param_1[0x10] * param_2;
    fVar1 = (float)param_1[0xe] + (float)param_1[0x11] * param_2;
    param_1[0xd] = (int)fVar2;
    param_1[0xe] = (int)fVar1;
    param_1[9] = (int)((float)param_1[9] + fVar3 * param_2);
    param_1[10] = (int)((float)param_1[10] + fVar2 * param_2);
    param_1[0xb] = (int)((float)param_1[0xb] + fVar1 * param_2);
  }
  return;
}
