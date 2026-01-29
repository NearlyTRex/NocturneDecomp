// Name: core_skeledit.cpp_FUN_00599480
// Address: 00599480
// Address Range: [[00599480, 0059954b]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00599480(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00599480(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  
  bVar4 = 0;
  __STK(0x10);
  puVar2 = in_stack_00000008;
  puVar3 = in_stack_00000004;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(ushort *)puVar3 = *(ushort *)puVar2;
  in_stack_00000004[8] = in_stack_00000008[8];
  in_stack_00000004[9] = in_stack_00000008[9];
  in_stack_00000004[10] = in_stack_00000008[10];
  in_stack_00000004[0xb] = in_stack_00000008[0xb];
  in_stack_00000004[0xc] = in_stack_00000008[0xc];
  in_stack_00000004[0xd] = in_stack_00000008[0xd];
  in_stack_00000004[0xe] = in_stack_00000008[0xe];
  in_stack_00000004[0xf] = in_stack_00000008[0xf];
  in_stack_00000004[0x10] = in_stack_00000008[0x10];
  in_stack_00000004[0x11] = in_stack_00000008[0x11];
  in_stack_00000004[0x12] = in_stack_00000008[0x12];
  in_stack_00000004[0x13] = in_stack_00000008[0x13];
  in_stack_00000004[0x14] = in_stack_00000008[0x14];
  in_stack_00000004[0x15] = in_stack_00000008[0x15];
  in_stack_00000004[0x16] = in_stack_00000008[0x16];
  in_stack_00000004[0x17] = in_stack_00000008[0x17];
  in_stack_00000004[0x18] = in_stack_00000008[0x18];
  in_stack_00000004[0x19] = in_stack_00000008[0x19];
  in_stack_00000004[0x1a] = in_stack_00000008[0x1a];
  in_stack_00000004[0x1b] = in_stack_00000008[0x1b];
  in_stack_00000004[0x1c] = in_stack_00000008[0x1c];
  in_stack_00000004[0x1d] = in_stack_00000008[0x1d];
  in_stack_00000004[0x1e] = in_stack_00000008[0x1e];
  in_stack_00000004[0x1f] = in_stack_00000008[0x1f];
  in_stack_00000004[0x20] = in_stack_00000008[0x20];
  return;
}
