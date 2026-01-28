// Name: engine_colquant.c_FUN_00440c80
// Address: 00440c80
// Address Range: [[00440c80, 00440db3]]
// Convention: unknown
// Signature: void engine_colquant_c_FUN_00440c80(void)

#include "nocturne.h"

void engine_colquant_c_FUN_00440c80(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint local_18;
  uint local_14;
  
  iVar5 = in_stack_00000008 * 0x40;
  local_14 = *(int *)(iVar5 + 0x4040 + in_stack_00000004);
  iVar4 = local_14 + *(int *)(iVar5 + 0x4044 + in_stack_00000004) + -1;
  iVar5 = *(int *)(iVar5 + 0x4008 + in_stack_00000004) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + local_18 + 1)) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 &&
            (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + 1 + iVar2)));
            iVar2 = iVar2 + -4) {
          iVar4 = iVar4 + -1;
        }
        puVar3 = (uint *)(local_18 + *(int *)(in_stack_00000004 + 0x2004));
        uVar1 = *puVar3;
        *puVar3 = *(uint *)(*(int *)(in_stack_00000004 + 0x2004) + iVar4 * 4);
        *(uint *)(*(int *)(in_stack_00000004 + 0x2004) + iVar4 * 4) = uVar1;
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  in_stack_00000008 = in_stack_00000008 * 0x40;
  *(int *)(in_stack_00000004 + 0x4040 + in_stack_0000000c * 0x40) = iVar4;
  iVar5 = *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004);
  *(int *)(in_stack_00000004 + 0x4044 + in_stack_0000000c * 0x40) =
       iVar5 - (iVar4 - *(int *)(in_stack_00000008 + 0x4040 + in_stack_00000004));
  *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004) =
       iVar4 - *(int *)(in_stack_00000008 + 0x4040 + in_stack_00000004);
  engine_colquant_c_FUN_00441260();
  engine_colquant_c_FUN_00441260();
  *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004) = iVar5;
  engine_colquant_c_FUN_00441110();
  return;
}
