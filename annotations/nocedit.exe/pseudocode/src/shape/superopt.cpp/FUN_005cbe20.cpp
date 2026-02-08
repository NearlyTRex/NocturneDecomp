// Name: shape_superopt.cpp_FUN_005cbe20
// Address: 005cbe20
// Address Range: [[005cbe20, 005cbeb2]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_FUN_005cbe20(void)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_FUN_005cbe20(void)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int in_stack_00000004;
  uint *in_stack_00000008;
  int in_stack_0000000c;
  
  bVar6 = 0;
  shape_superopt_cpp_FUN_005cbf20();
  pvVar1 = realloc
                     (*(void **)(in_stack_00000004 + 0xc),(*(int *)(in_stack_00000004 + 8) + 1) * 8)
  ;
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_stack_00000004 + 0xc) = pvVar1;
    piVar5 = (int *)(*(int *)(in_stack_00000004 + 0xc) + *(int *)(in_stack_00000004 + 8) * 8);
    puVar2 = shape_memdbg_cpp_malloc_FUN_006021da(in_stack_0000000c * 0x60);
    piVar5[1] = (int)puVar2;
    if (puVar2 != (uint *)0x0) {
      for (uVar3 = (uint)(in_stack_0000000c * 0x60) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *in_stack_00000008;
        in_stack_00000008 = in_stack_00000008 + (uint)bVar6 * -2 + 1;
        puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(byte *)puVar2 = *(byte *)in_stack_00000008;
        in_stack_00000008 = (uint *)((int)in_stack_00000008 + (uint)bVar6 * -2 + 1);
        puVar2 = (uint *)((int)puVar2 + (uint)bVar6 * -2 + 1);
      }
      *piVar5 = in_stack_0000000c;
      *(int *)(in_stack_00000004 + 8) = *(int *)(in_stack_00000004 + 8) + 1;
      return;
    }
  }
  return;
}
