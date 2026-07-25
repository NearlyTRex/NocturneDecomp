// Name: FUN_0045c400
// Address: 0045c400
// Address Range: [[0045c400, 0045c431]]
// Convention: unknown
// Signature: byte FUN_0045c400(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte FUN_0045c400(void)

{
  byte bVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
  bVar1 = in_stack_00000018 < in_stack_00000008;
  if (in_stack_00000008 < in_stack_00000010) {
    bVar1 = bVar1 | 2;
  }
  if (in_stack_00000014 < in_stack_00000004) {
    bVar1 = bVar1 | 4;
  }
  if (in_stack_00000004 < in_stack_0000000c) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}
