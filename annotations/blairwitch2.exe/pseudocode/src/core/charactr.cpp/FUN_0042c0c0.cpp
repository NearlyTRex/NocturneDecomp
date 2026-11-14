// Name: core_charactr.cpp_FUN_0042c0c0
// Address: 0042c0c0
// Address Range: [[0042c0c0, 0042c1a9]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_0042c0c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_charactr_cpp_FUN_0042c0c0(void)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint *in_stack_00000004;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  
  if (_DAT_006141d4 < 6) {
    if (((uint)in_stack_00000004 & 2) != 0) {
      *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c35614);
      in_stack_00000004 = (uint *)((int)in_stack_00000004 + 2);
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_0000000c = in_stack_0000000c + -1;
    }
    while( true ) {
      if (in_stack_0000000c < 2) break;
      *in_stack_00000004 =
           CONCAT22(*(ushort *)((uint)in_stack_00000008[1] * 2 + 0x1c35614),
                    *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c35614));
      in_stack_00000008 = in_stack_00000008 + 2;
      in_stack_00000004 = in_stack_00000004 + 1;
      in_stack_0000000c = in_stack_0000000c + -2;
    }
    if (in_stack_0000000c + -2 == -1) {
      *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c35614);
    }
    return in_EAX;
  }
  if (((uint)in_stack_00000004 & 2) != 0) {
    *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c35614);
    in_stack_00000004 = (uint *)((int)in_stack_00000004 + 2);
    in_stack_00000008 = in_stack_00000008 + 1;
    in_stack_0000000c = in_stack_0000000c + -1;
  }
  while (1 < in_stack_0000000c) {
    pbVar1 = in_stack_00000008 + 1;
    bVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 2;
    *in_stack_00000004 =
         CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c35614),
                  *(ushort *)((uint)bVar2 * 2 + 0x1c35614));
    in_stack_00000004 = in_stack_00000004 + 1;
    in_stack_0000000c = in_stack_0000000c + -2;
  }
  if (in_stack_0000000c + -2 == -1) {
    *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c35614);
  }
  return in_EAX;
}
