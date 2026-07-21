// Name: FUN_0046c100
// Address: 0046c100
// Address Range: [[0046c100, 0046c22d]]
// Convention: unknown
// Signature: void FUN_0046c100(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c100(int param_1,uint param_2)

{
  int *piVar1;
  byte bVar2;
  int aiStackY_1028 [1014];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  bVar2 = 0;
  FUN_0046b650(param_1,param_2);
  local_34 = local_28;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < local_34) && (-1 < local_30)) && (-1 < local_2c)) &&
     (((local_34 < *(int *)(param_1 + 0x40) && (local_30 < *(int *)(param_1 + 0x44))) &&
      (local_2c < *(int *)(param_1 + 0x48))))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700(param_1,param_2);
    local_40 = local_1c;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_40 = local_40 % 8;
    local_3c = local_3c % 8;
    local_38 = local_38 % 8;
    piVar1 = (int *)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                              (param_1,local_34,local_30,local_2c);
    if (piVar1 == (int *)0x0) {
      _DAT_01cc4800 = "..\\core\\dtrace.cpp";
      _DAT_01cc4804 = 0xb55;
      FUN_004c8440("Parity Check 999");
    }
    if (*piVar1 == 0) {
      FUN_0044ac30(piVar1);
    }
    local_3c = local_38 * 8 + local_3c;
    *(byte *)(*piVar1 + local_3c) =
         *(byte *)(*piVar1 + local_3c) & ((&DAT_005b6d08)[local_40] ^ 0xff);
    *(byte *)(*piVar1 + local_3c) =
         *(byte *)(*piVar1 + local_3c) | *(byte *)(piVar1[1] + local_3c) & (&DAT_005b6d08)[local_40]
    ;
    return;
  }
  return;
}
