// Name: FUN_00476eb0
// Address: 00476eb0
// Address Range: [[00476eb0, 00476eec]]
// Convention: unknown
// Signature: void FUN_00476eb0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_00476eb0(void)

{
  int iVar1;
  int iVar2;
  uint in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  iVar1 = FUN_00477100();
  iVar1 = iVar1 + in_stack_0000000c + -1;
  iVar2 = FUN_00477080();
  FUN_00476ef0(in_stack_00000004,in_stack_00000008,in_stack_0000000c,iVar2 + in_stack_00000008 + -1,
               iVar1);
  return;
}
