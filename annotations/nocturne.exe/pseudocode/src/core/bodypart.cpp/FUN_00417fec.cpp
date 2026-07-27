// Name: core_bodypart.cpp_FUN_00417fec
// Address: 00417fec
// Address Range: [[00417fec, 00418008]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00417fec(void)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00417fec(void)

{
  uint in_EAX;
  uint *puVar1;
  char in_CL;
  uint *in_EDX;
  int unaff_EBX;
  
  *(char *)(unaff_EBX + 0x24448bdb) = *(char *)(unaff_EBX + 0x24448bdb) + in_CL;
  puVar1 = (uint *)(CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + -0x75) & 0xffffff08);
  *puVar1 = *in_EDX;
  puVar1[1] = in_EDX[1];
  puVar1[2] = in_EDX[2];
  return;
}
