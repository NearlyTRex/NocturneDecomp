// Name: core_dtrace.cpp_FUN_0046bfe0
// Address: 0046bfe0
// Address Range: [[0046bfe0, 0046c0fc]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_0046bfe0(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_dtrace_cpp_FUN_0046bfe0(int param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  int aiStackY_1028 [1014];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  bVar3 = 0;
  core_dtrace_cpp_FUN_0046b650(param_1,param_2);
  local_40 = local_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if ((((-1 < local_40) && (-1 < local_3c)) && (-1 < local_38)) &&
     (((local_40 < *(int *)(param_1 + 0x40) && (local_3c < *(int *)(param_1 + 0x44))) &&
      (local_38 < *(int *)(param_1 + 0x48))))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(param_1,param_2);
    local_34 = local_1c;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_34 = local_34 % 8;
    local_30 = local_30 % 8;
    local_2c = local_2c % 8;
    piVar1 = (int *)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                              (param_1,local_40,local_3c,local_38);
    if (piVar1 == (int *)0x0) {
      PTR_01cc4800 = "..\\core\\dtrace.cpp";
      INT_01cc4804 = 0xb19;
      core_main_c_FUN_004c8440("Parity Check 999");
    }
    if (*piVar1 == 0) {
      core_dcube_cpp_FUN_0044ac30(piVar1);
    }
    pbVar2 = (byte *)(local_2c * 8 + local_30 + *piVar1);
    *pbVar2 = *pbVar2 | (&DAT_005b6d08)[local_34];
    return;
  }
  return;
}
