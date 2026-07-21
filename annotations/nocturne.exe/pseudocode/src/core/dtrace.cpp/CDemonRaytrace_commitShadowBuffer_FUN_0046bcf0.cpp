// Name: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0
// Address: 0046bcf0
// Address Range: [[0046bcf0, 0046bd86]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0(int param_1)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_0046bcf0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      local_14 = 0;
      if (0 < *(int *)(param_1 + 0x44)) {
        do {
          iVar3 = 0;
          if (0 < *(int *)(param_1 + 0x48)) {
            do {
              puVar1 = (uint *)
                       core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                                 (param_1,local_18,local_14,iVar3);
              if (((puVar1 != (uint *)0x0) && ((uint *)*puVar1 != (uint *)0x0)) &&
                 ((uint *)puVar1[1] != (uint *)0x0)) {
                puVar4 = (uint *)puVar1[1];
                puVar1 = (uint *)*puVar1;
                for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *puVar1 = *puVar4;
                  puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
                  puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(byte *)puVar1 = *(byte *)puVar4;
                  puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
                  puVar1 = (uint *)((int)puVar1 + (uint)bVar5 * -2 + 1);
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x48));
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(int *)(param_1 + 0x44));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x40));
  }
  return;
}
