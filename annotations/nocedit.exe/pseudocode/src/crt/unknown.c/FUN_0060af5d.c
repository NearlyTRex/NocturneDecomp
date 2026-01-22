// Name: crt_unknown.c_FUN_0060af5d
// Address: 0060af5d
// Address Range: [[0060af5d, 0060b079]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060af5d()

#include "nocturne.h"

ulonglong crt_unknown_c_FUN_0060af5d(void)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  ushort in_DS;
  int in_stack_00000004;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  *in_stack_00000008 = *in_stack_00000008 + 8;
  crt_unknown_c_FUN_00603dc8();
  *(uint *)(in_stack_0000000c + 0x28) = local_34;
  *(uint *)(in_stack_0000000c + 0x2c) = local_30;
  *(uint *)(in_stack_0000000c + 0x30) = local_2c;
  *(uint *)(in_stack_0000000c + 0x34) = local_28;
  if (local_3c < 0) {
    iVar1 = *(int *)(in_stack_0000000c + 0x20);
    iVar2 = iVar1 + 1;
    *(int *)(in_stack_0000000c + 0x20) = iVar2;
    *(byte *)(in_stack_00000004 + iVar1) = 0x2d;
  }
  else if ((*(byte *)(in_stack_0000000c + 0x1e) & 4) == 0) {
    iVar2 = extraout_EDX;
    if ((*(byte *)(in_stack_0000000c + 0x1e) & 2) != 0) {
      iVar1 = *(int *)(in_stack_0000000c + 0x20);
      iVar2 = iVar1 + 1;
      *(int *)(in_stack_0000000c + 0x20) = iVar2;
      *(byte *)(in_stack_00000004 + iVar1) = 0x20;
    }
  }
  else {
    iVar1 = *(int *)(in_stack_0000000c + 0x20);
    iVar2 = iVar1 + 1;
    *(int *)(in_stack_0000000c + 0x20) = iVar2;
    *(byte *)(in_stack_00000004 + iVar1) = 0x2b;
  }
  return CONCAT44(CONCAT22((short)((uint)iVar2 >> 0x10),in_DS),in_stack_00000004);
}
