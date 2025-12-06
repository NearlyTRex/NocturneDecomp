// Name: engine_colquant.c_FUN_00441110
// Address: 00441110
// Address Range: [[00441110, 00441257]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00441110()

#include "nocturne.h"

void engine_colquant_c_FUN_00441110(void)

{
  uint uVar1;
  uint *puVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint uStack_1c;
  int local_14;
  
  iVar4 = *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008 * 0x40);
  iVar3 = *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008 * 0x40) + iVar4 + -1;
  if (iVar4 < iVar3) {
    local_14 = iVar4 * 4;
    do {
      engine_colquant_c_FUN_00441040();
      dVar5 = (double)engine_colquant_c_FUN_00441040();
      if (dVar5 < (double)CONCAT44 /* combine 2-byte values */(uStack_1c,extraout_EDX)) {
        for (; iVar4 < iVar3; iVar3 = iVar3 + -1) {
          engine_colquant_c_FUN_00441040();
          dVar6 = (double)engine_colquant_c_FUN_00441040();
          uStack_1c = (uint)((ulonglong)dVar6 >> 0x20);
          if ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),extraout_EDX_00) <= dVar6) break;
        }
        puVar2 = (uint *)(local_14 + *(int *)(in_stack_00000004 + 0x2004));
        uVar1 = *puVar2;
        *puVar2 = *(uint *)(*(int *)(in_stack_00000004 + 0x2004) + iVar3 * 4);
        *(uint *)(iVar3 * 4 + *(int *)(in_stack_00000004 + 0x2004)) = uVar1;
      }
      local_14 = local_14 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  in_stack_00000008 = in_stack_00000008 * 0x40;
  *(int *)(in_stack_0000000c * 0x40 + 0x4040 + in_stack_00000004) = iVar3;
  *(int *)(in_stack_0000000c * 0x40 + 0x4044 + in_stack_00000004) =
       *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) -
       (iVar3 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008));
  *(int *)(in_stack_00000004 + 0x4044 + in_stack_00000008) =
       iVar3 - *(int *)(in_stack_00000004 + 0x4040 + in_stack_00000008);
  engine_colquant_c_FUN_00441260();
  engine_colquant_c_FUN_00441260();
  return;
}
