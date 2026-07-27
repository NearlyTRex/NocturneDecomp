// Name: support_trisock.cpp_FUN_00549170
// Address: 00549170
// Address Range: [[00549170, 005491d8]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00549170(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint support_trisock_cpp_FUN_00549170(void)

{
  int iVar1;
  uint *puVar2;
  int *unaff_EDI;
  byte bVar3;
  uint *in_stack_00000004;
  uint *in_stack_0000000c;
  uint uStack_2c;
  byte *puStack_28;
  uint *puStack_24;
  byte local_20 [4];
  byte auStack_1c [20];
  uint local_8;
  
  bVar3 = 0;
  puStack_28 = local_20;
  puStack_24 = &local_8;
  local_8 = 0x10;
  uStack_2c = *in_stack_00000004;
  iVar1 = Ordinal_1();
  *unaff_EDI = iVar1;
  if (iVar1 == -1) {
    return 0;
  }
  if (in_stack_0000000c == (uint *)0x0) {
    return 1;
  }
  puVar2 = (uint *)support_trisock_cpp_convertSockAddr_FUN_00548d50(auStack_1c,&uStack_2c);
  *in_stack_0000000c = *puVar2;
  in_stack_0000000c[(uint)bVar3 * -2 + 1] = puVar2[(uint)bVar3 * -2 + 1];
  return 1;
}
