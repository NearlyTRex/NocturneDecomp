// Name: shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20
// Address: 005cbe20
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_CondCallDebugMallocUnknownString_FUN_005cbe20()

#include "nocturne.h"

void shape_superopt_cpp_CondCallDebugMallocUnknownString_FUN_005cbe20(void)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  uint *in_stack_00000014;
  uint in_stack_00000018;
  
  bVar6 = 0;
  shape_superopt_cpp_FUN_005cbf20();
  pvVar1 = crt_memory_c_realloc_FUN_00601df0
                     (*(void **)(in_stack_00000004 + 0xc),(*(int *)(in_stack_00000004 + 8) + 1) * 8)
  ;
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_stack_00000004 + 0xc) = pvVar1;
    puVar5 = (uint *)(*(int *)(in_stack_00000004 + 0xc) + *(int *)(in_stack_00000004 + 8) * 8)
    ;
    puVar2 = (uint *)crt_memory_c_malloc_FUN_006021da((int)in_stack_00000014 * 0x60);
    puVar5[1] = puVar2;
    if (puVar2 != (uint *)0x0) {
      uVar3 = (uint)((int)in_stack_00000014 * 0x60) >> 2;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *in_stack_00000014;
        in_stack_00000014 = in_stack_00000014 + (uint)bVar6 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(byte *)puVar2 = *(byte *)in_stack_00000014;
        in_stack_00000014 = (uint *)((int)in_stack_00000014 + (uint)bVar6 * -2 + 1);
        puVar2 = (uint *)((int)puVar2 + (uint)bVar6 * -2 + 1);
      }
      *puVar5 = in_stack_00000018;
      *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1;
      return;
    }
  }
  return;
}
