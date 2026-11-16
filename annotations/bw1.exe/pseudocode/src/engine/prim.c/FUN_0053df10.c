// Name: engine_prim.c_FUN_0053df10
// Address: 0053df10
// Address Range: [[0053df10, 0053dffb]]
// Convention: unknown
// Signature: bool engine_prim_c_FUN_0053df10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool engine_prim_c_FUN_0053df10(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0x18);
  iVar4 = *(int *)(in_stack_00000004 + 0x24);
  iVar5 = *(int *)(in_stack_00000004 + 0x30);
  iVar3 = iVar4 * 0x30;
  if (DAT_00713a7c == 1) {
    iStack_24 = (&DAT_00629024)[iVar4 * 0xc] - (&DAT_00629024)[iVar1 * 0xc];
    iStack_20 = *(int *)(&DAT_00629028 + iVar3) - *(int *)(&DAT_00629028 + iVar1 * 0x30);
    iStack_1c = (&DAT_00629024)[iVar5 * 0xc] - (&DAT_00629024)[iVar4 * 0xc];
    iStack_18 = *(int *)(&DAT_00629028 + iVar5 * 0x30) - *(int *)(&DAT_00629028 + iVar3);
  }
  else {
    iStack_1c = (&DAT_00629024)[iVar4 * 0xc] - (&DAT_00629024)[iVar1 * 0xc];
    iStack_18 = *(int *)(&DAT_00629028 + iVar3) - *(int *)(&DAT_00629028 + iVar1 * 0x30);
    iStack_24 = (&DAT_00629024)[iVar5 * 0xc] - (&DAT_00629024)[iVar4 * 0xc];
    iStack_20 = *(int *)(&DAT_00629028 + iVar5 * 0x30) - *(int *)(&DAT_00629028 + iVar3);
  }
  iVar4 = (int)((ulonglong)((longlong)iStack_24 * (longlong)iStack_18) >> 0x20);
  iVar5 = (int)((ulonglong)((longlong)iStack_20 * (longlong)iStack_1c) >> 0x20);
  uVar2 = (uint)((uint)((longlong)iStack_20 * (longlong)iStack_1c) <
                (uint)((longlong)iStack_24 * (longlong)iStack_18));
  iVar1 = iVar5 - iVar4;
  return (SBORROW4(iVar5,iVar4) != SBORROW4(iVar1,uVar2)) != (int)(iVar1 - uVar2) < 0;
}
