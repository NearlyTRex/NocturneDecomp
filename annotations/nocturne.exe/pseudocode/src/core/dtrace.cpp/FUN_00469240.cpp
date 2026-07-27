// Name: core_dtrace.cpp_FUN_00469240
// Address: 00469240
// Address Range: [[00469240, 0046938f]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00469240(int param_1,int *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_00469240(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x2c);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x30);
  local_1c = 0;
  fVar6 = *(float *)(param_1 + 0x18);
  local_28 = 0;
  do {
    iVar8 = 0;
    local_24 = local_28;
    local_20 = local_28;
    do {
      if ((*param_2 != 0) && (*(char *)(*param_2 + local_24) != '\0')) {
        iVar7 = 0;
        local_18 = local_20;
        do {
          if ((*(byte *)(*param_2 + local_18) & (&DAT_005b6d08)[iVar7]) != 0) {
            local_34 = (float)iVar7 * *(float *)(param_1 + 0x28) * _DAT_0057e1fa +
                       (float)param_3 * fVar1 + fVar2;
            local_14 = local_1c;
            local_30 = (float)iVar8 * *(float *)(param_1 + 0x2c) * _DAT_0057e1fa +
                       (float)param_4 * fVar3 + fVar4;
            local_2c = (float)local_1c * *(float *)(param_1 + 0x30) * _DAT_0057e1fa +
                       (float)param_5 * fVar5 + fVar6;
            core_dtrace_cpp_FUN_00468d00(param_1,&local_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (iVar8 < 8);
    local_1c = local_1c + 1;
    local_28 = local_28 + 8;
  } while (local_1c < 8);
  return;
}
