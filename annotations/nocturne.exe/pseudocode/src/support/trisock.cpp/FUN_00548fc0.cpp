// Name: support_trisock.cpp_FUN_00548fc0
// Address: 00548fc0
// Address Range: [[00548fc0, 00549002]]
// Convention: unknown
// Signature: bool support_trisock_cpp_FUN_00548fc0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool support_trisock_cpp_FUN_00548fc0(void)

{
  int iVar1;
  byte bVar2;
  uint *in_stack_00000004;
  uint auStackY_1804 [1524];
  uint *puVar3;
  uint uVar4;
  uint local_28;
  uint local_18;
  
  bVar2 = 0;
  support_trisock_cpp_buildSockaddrIn_FUN_00548dc0();
  puVar3 = &stack0xffffffd8;
  uVar4 = 0x10;
  local_28 = local_18;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  iVar1 = Ordinal_4(*in_stack_00000004,puVar3,uVar4);
  return iVar1 == 0;
}
