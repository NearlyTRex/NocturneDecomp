// Name: core_skeledit.cpp_FUN_00599480
// Address: 00599480
// Address Range: [[00599480, 0059954b]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00599480()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00599480(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint *in_stack_0000000c;
  uint *in_stack_00000010;
  
  bVar4 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  puVar2 = in_stack_00000010;
  puVar3 = in_stack_0000000c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(ushort *)puVar3 = *(ushort *)puVar2;
  in_stack_0000000c[8] = in_stack_00000010[8];
  in_stack_0000000c[9] = in_stack_00000010[9];
  in_stack_0000000c[10] = in_stack_00000010[10];
  in_stack_0000000c[0xb] = in_stack_00000010[0xb];
  in_stack_0000000c[0xc] = in_stack_00000010[0xc];
  in_stack_0000000c[0xd] = in_stack_00000010[0xd];
  in_stack_0000000c[0xe] = in_stack_00000010[0xe];
  in_stack_0000000c[0xf] = in_stack_00000010[0xf];
  in_stack_0000000c[0x10] = in_stack_00000010[0x10];
  in_stack_0000000c[0x11] = in_stack_00000010[0x11];
  in_stack_0000000c[0x12] = in_stack_00000010[0x12];
  in_stack_0000000c[0x13] = in_stack_00000010[0x13];
  in_stack_0000000c[0x14] = in_stack_00000010[0x14];
  in_stack_0000000c[0x15] = in_stack_00000010[0x15];
  in_stack_0000000c[0x16] = in_stack_00000010[0x16];
  in_stack_0000000c[0x17] = in_stack_00000010[0x17];
  in_stack_0000000c[0x18] = in_stack_00000010[0x18];
  in_stack_0000000c[0x19] = in_stack_00000010[0x19];
  in_stack_0000000c[0x1a] = in_stack_00000010[0x1a];
  in_stack_0000000c[0x1b] = in_stack_00000010[0x1b];
  in_stack_0000000c[0x1c] = in_stack_00000010[0x1c];
  in_stack_0000000c[0x1d] = in_stack_00000010[0x1d];
  in_stack_0000000c[0x1e] = in_stack_00000010[0x1e];
  in_stack_0000000c[0x1f] = in_stack_00000010[0x1f];
  in_stack_0000000c[0x20] = in_stack_00000010[0x20];
  return;
}
