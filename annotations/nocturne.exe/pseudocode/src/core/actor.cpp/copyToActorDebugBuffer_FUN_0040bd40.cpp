// Name: core_actor.cpp_copyToActorDebugBuffer_FUN_0040bd40
// Address: 0040bd40
// Address Range: [[0040bd40, 0040bd83]]
// Convention: unknown
// Signature: undefined4 * core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint * core_actor_cpp_copyToActorDebugBuffer_FUN_0040bd40(void)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint *in_stack_00000004;
  
  bVar3 = 0;
  memset(&DAT_00763e10,0,0x32);
  if (in_stack_00000004 == (uint *)0x0) {
    return &DAT_00763e10;
  }
  puVar2 = &DAT_00763e10;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + (uint)bVar3 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
  }
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)puVar2 = *(byte *)in_stack_00000004;
    in_stack_00000004 = (uint *)((int)in_stack_00000004 + (uint)bVar3 * -2 + 1);
    puVar2 = (uint *)((int)puVar2 + (uint)bVar3 * -2 + 1);
  }
  return &DAT_00763e10;
}
