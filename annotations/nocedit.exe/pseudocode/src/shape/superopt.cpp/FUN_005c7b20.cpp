// Name: shape_superopt.cpp_FUN_005c7b20
// Address: 005c7b20
// Address Range: [[005c7b20, 005c7db3]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c7b20()

#include "nocturne.h"

uint shape_superopt_cpp_FUN_005c7b20(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *in_stack_00000004;
  uint local_14;
  int local_10;
  
  if ((*in_stack_00000004 != 0) && (in_stack_00000004[1] != 0)) {
    in_stack_00000004[0xb] = *in_stack_00000004 * 3;
    piVar2 = crt_memory_c_malloc_FUN_006021da(*in_stack_00000004 * 0x120);
    in_stack_00000004[0xc] = (uint)piVar2;
    if (piVar2 != (int *)0x0) {
      local_14 = 0;
      iVar3 = *(int *)(**(int **)in_stack_00000004[1] + 4);
      if (*in_stack_00000004 != 0) {
        local_10 = 0;
        do {
          iVar1 = *(int *)(in_stack_00000004[1] + local_10);
          iVar4 = *(int *)(iVar1 + 4);
          *piVar2 = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[4] = *(int *)(iVar3 + iVar4);
          piVar2[5] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[6] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[7] = *(int *)(iVar3 + 0xc + iVar4);
          piVar2[8] = *(int *)(iVar3 + 0x10 + iVar4);
          piVar2[9] = *(int *)(iVar3 + 0x14 + iVar4);
          piVar2[0x10] = *(int *)(iVar1 + 0x10);
          piVar2[0x11] = *(int *)(iVar1 + 0x14);
          piVar2[0x12] = *(int *)(iVar1 + 0x18);
          piVar2[0x13] = *(int *)(iVar1 + 0x1c);
          iVar4 = *(int *)(iVar1 + 8);
          piVar2[1] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[10] = *(int *)(iVar3 + iVar4);
          piVar2[0xb] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0xc] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0xd] = *(int *)(iVar3 + 0xc + iVar4);
          *(ulonglong *)(piVar2 + 0xe) = *(ulonglong *)(iVar3 + 0x10 + iVar4);
          piVar2[0x14] = *(int *)(iVar1 + 0x20);
          piVar2[0x15] = *(int *)(iVar1 + 0x24);
          piVar2[0x16] = *(int *)(iVar1 + 0x28);
          piVar2[0x17] = *(int *)(iVar1 + 0x2c);
          iVar4 = *(int *)(iVar1 + 8);
          piVar2[0x18] = iVar4;
          iVar4 = iVar4 * 0x38;
          *(ulonglong *)(piVar2 + 0x1c) = *(ulonglong *)(iVar3 + iVar4);
          *(ulonglong *)(piVar2 + 0x1e) = *(ulonglong *)(iVar3 + 8 + iVar4);
          *(ulonglong *)(piVar2 + 0x20) = *(ulonglong *)(iVar3 + 0x10 + iVar4);
          piVar2[0x28] = *(int *)(iVar1 + 0x20);
          piVar2[0x29] = *(int *)(iVar1 + 0x24);
          piVar2[0x2a] = *(int *)(iVar1 + 0x28);
          piVar2[0x2b] = *(int *)(iVar1 + 0x2c);
          iVar4 = *(int *)(iVar1 + 0xc);
          piVar2[0x19] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[0x22] = *(int *)(iVar3 + iVar4);
          piVar2[0x23] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0x24] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0x25] = *(int *)(iVar3 + 0xc + iVar4);
          *(ulonglong *)(piVar2 + 0x26) = *(ulonglong *)(iVar3 + 0x10 + iVar4);
          piVar2[0x2c] = *(int *)(iVar1 + 0x30);
          piVar2[0x2d] = *(int *)(iVar1 + 0x34);
          piVar2[0x2e] = *(int *)(iVar1 + 0x38);
          piVar2[0x2f] = *(int *)(iVar1 + 0x3c);
          iVar4 = *(int *)(iVar1 + 0xc);
          piVar2[0x30] = iVar4;
          iVar4 = iVar4 * 0x38;
          *(ulonglong *)(piVar2 + 0x34) = *(ulonglong *)(iVar3 + iVar4);
          *(ulonglong *)(piVar2 + 0x36) = *(ulonglong *)(iVar3 + 8 + iVar4);
          *(ulonglong *)(piVar2 + 0x38) = *(ulonglong *)(iVar3 + 0x10 + iVar4);
          piVar2[0x40] = *(int *)(iVar1 + 0x30);
          piVar2[0x41] = *(int *)(iVar1 + 0x34);
          piVar2[0x42] = *(int *)(iVar1 + 0x38);
          piVar2[0x43] = *(int *)(iVar1 + 0x3c);
          iVar4 = *(int *)(iVar1 + 4);
          piVar2[0x31] = iVar4;
          iVar4 = iVar4 * 0x38;
          piVar2[0x3a] = *(int *)(iVar3 + iVar4);
          piVar2[0x3b] = *(int *)(iVar3 + 4 + iVar4);
          piVar2[0x3c] = *(int *)(iVar3 + 8 + iVar4);
          piVar2[0x3d] = *(int *)(iVar3 + 0xc + iVar4);
          piVar2[0x3e] = *(int *)(iVar3 + 0x10 + iVar4);
          piVar2[0x3f] = *(int *)(iVar3 + 0x14 + iVar4);
          *(ulonglong *)(piVar2 + 0x44) = *(ulonglong *)(iVar1 + 0x10);
          piVar2[0x46] = *(int *)(iVar1 + 0x18);
          piVar2[0x47] = *(int *)(iVar1 + 0x1c);
          local_14 = local_14 + 1;
          local_10 = local_10 + 4;
          piVar2 = piVar2 + 0x48;
        } while (local_14 < *in_stack_00000004);
      }
      shape_superopt_cpp_FUN_005c8160();
      shape_superopt_cpp_FUN_005c7dc0();
      iVar3 = shape_superopt_cpp_FUN_005c8280();
      if (iVar3 == 0) {
        crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0xc]);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
