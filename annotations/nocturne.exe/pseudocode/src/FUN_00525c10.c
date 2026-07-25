// Name: FUN_00525c10
// Address: 00525c10
// Address Range: [[00525c10, 00525c39]]
// Convention: unknown
// Signature: int FUN_00525c10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_00525c10(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x104) * *(int *)(in_stack_00000004 + 0x108);
  iVar2 = iVar1 >> 0x1f;
  return ((int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3) *
         *(int *)(in_stack_00000004 + 0x110);
}
