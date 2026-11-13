// Name: core_charactr.cpp_FUN_00434b30
// Address: 00434b30
// Address Range: [[00434b30, 00434c19]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_00434b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_charactr_cpp_FUN_00434b30(void)

{
  byte *pbVar1;
  byte bVar2;
  uint in_EAX;
  uint *in_stack_00000004;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  
  if (_DAT_005fba34 < 6) {
    if (((uint)in_stack_00000004 & 2) != 0) {
      *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c6ad74);
      in_stack_00000004 = (uint *)((int)in_stack_00000004 + 2);
      in_stack_00000008 = in_stack_00000008 + 1;
      in_stack_0000000c = in_stack_0000000c + -1;
    }
    while( true ) {
      if (in_stack_0000000c < 2) break;
      *in_stack_00000004 =
           CONCAT22(*(ushort *)((uint)in_stack_00000008[1] * 2 + 0x1c6ad74),
                    *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c6ad74));
      in_stack_00000008 = in_stack_00000008 + 2;
      in_stack_00000004 = in_stack_00000004 + 1;
      in_stack_0000000c = in_stack_0000000c + -2;
    }
    if (in_stack_0000000c + -2 == -1) {
      *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c6ad74);
    }
    return in_EAX;
  }
  if (((uint)in_stack_00000004 & 2) != 0) {
    *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c6ad74);
    in_stack_00000004 = (uint *)((int)in_stack_00000004 + 2);
    in_stack_00000008 = in_stack_00000008 + 1;
    in_stack_0000000c = in_stack_0000000c + -1;
  }
  while (1 < in_stack_0000000c) {
    pbVar1 = in_stack_00000008 + 1;
    bVar2 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 2;
    *in_stack_00000004 =
         CONCAT22(*(ushort *)((uint)*pbVar1 * 2 + 0x1c6ad74),
                  *(ushort *)((uint)bVar2 * 2 + 0x1c6ad74));
    in_stack_00000004 = in_stack_00000004 + 1;
    in_stack_0000000c = in_stack_0000000c + -2;
  }
  if (in_stack_0000000c + -2 == -1) {
    *(ushort *)in_stack_00000004 = *(ushort *)((uint)*in_stack_00000008 * 2 + 0x1c6ad74);
  }
  return in_EAX;
}
