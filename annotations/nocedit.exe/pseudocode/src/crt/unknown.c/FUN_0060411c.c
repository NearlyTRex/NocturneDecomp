// Name: crt_unknown.c_FUN_0060411c
// Address: 0060411c
// Address Range: [[0060411c, 00604266]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060411c(undefined4 param_1,undefined4 param_2,undefined1 *unaff_EBX)

#include "nocturne.h"

void FUN_0060411c(uint param_1,uint param_2,byte *unaff_EBX)

{
  int unaff_EBP;
  uint in_stack_0000000c;
  float10 *in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  char *in_stack_00000020;
  uint in_stack_00000024;
  char *in_stack_00000028;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  char *in_stack_00000034;
  
  *unaff_EBX = 0;
  *(byte **)(unaff_EBP + -0x1c) = unaff_EBX;
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
  FUN_0060403f
            (in_stack_0000000c,in_stack_00000010,in_stack_00000014,in_stack_00000018,
             in_stack_0000001c,in_stack_00000020,in_stack_00000024,in_stack_00000028,
             in_stack_0000002c,in_stack_00000030,in_stack_00000034);
  return;
}
