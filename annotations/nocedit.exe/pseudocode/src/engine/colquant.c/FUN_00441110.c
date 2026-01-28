// Name: engine_colquant.c_FUN_00441110
// Address: 00441110
// Address Range: [[00441110, 00441257]]
// Convention: unknown
// Signature: void engine_colquant_c_FUN_00441110(void)

#include "nocturne.h"

void engine_colquant_c_FUN_00441110(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_14;
  
  iVar6 = *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008 * 0x40);
  iVar5 = *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008 * 0x40) + iVar6 + -1;
  if (iVar6 < iVar5) {
    local_14 = iVar6 * 4;
    do {
      dVar3 = (double)engine_colquant_c_FUN_00441040();
      dVar2 = (double)engine_colquant_c_FUN_00441040();
      if (dVar2 < dVar3) {
        for (; iVar6 < iVar5; iVar5 = iVar5 + -1) {
          dVar2 = (double)engine_colquant_c_FUN_00441040();
          dVar3 = (double)engine_colquant_c_FUN_00441040();
          if (dVar2 <= dVar3) break;
        }
        puVar4 = (uint *)(local_14 + *(int *)(in_stack_00000004 + 0x2004));
        uVar1 = *puVar4;
        *puVar4 = *(uint *)(*(int *)(in_stack_00000004 + 0x2004) + iVar5 * 4);
        *(uint *)(iVar5 * 4 + *(int *)(in_stack_00000004 + 0x2004)) = uVar1;
      }
      local_14 = local_14 + 4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  in_stack_00000008 = in_stack_00000008 * 0x40;
  *(int *)(in_stack_0000000c * 0x40 + 0x4040 + in_stack_00000004) = iVar5;
  *(int *)(in_stack_0000000c * 0x40 + 0x4044 + in_stack_00000004) =
       *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) -
       (iVar5 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008));
  *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) =
       iVar5 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008);
  engine_colquant_c_FUN_00441260();
  engine_colquant_c_FUN_00441260();
  return;
}
