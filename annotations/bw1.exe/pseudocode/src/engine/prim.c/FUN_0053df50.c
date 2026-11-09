// Name: engine_prim.c_FUN_0053df50
// Address: 0053df50
// Address Range: [[0053df50, 0053dffb]]
// Convention: unknown
// Signature: undefined4 engine_prim_c_FUN_0053df50(void)

#include "nocturne.h"

uint engine_prim_c_FUN_0053df50(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  
  if (DAT_00713a7c == 1) {
    *(int *)(unaff_EBP + -0x14) = *(int *)(in_EAX + 0x10) - *(int *)(in_ECX + 0x10);
    *(int *)(unaff_EBP + -0x10) = *(int *)(in_EAX + 0x14) - *(int *)(in_ECX + 0x14);
    *(int *)(unaff_EBP + -0xc) = (&DAT_00629024)[in_EDX * 4] - *(int *)(in_EAX + 0x10);
    *(int *)(unaff_EBP + -8) = *(int *)(&DAT_00629028 + in_EDX * 0x10) - *(int *)(in_EAX + 0x14);
  }
  else {
    *(int *)(unaff_EBP + -0xc) = *(int *)(in_EAX + 0x10) - *(int *)(in_ECX + 0x10);
    *(int *)(unaff_EBP + -8) = *(int *)(in_EAX + 0x14) - *(int *)(in_ECX + 0x14);
    *(int *)(unaff_EBP + -0x14) = (&DAT_00629024)[in_EDX * 4] - *(int *)(in_EAX + 0x10);
    *(int *)(unaff_EBP + -0x10) = *(int *)(&DAT_00629028 + in_EDX * 0x10) - *(int *)(in_EAX + 0x14);
  }
  lVar3 = (longlong)*(int *)(unaff_EBP + -0x14) * (longlong)*(int *)(unaff_EBP + -8);
  iVar5 = (int)((ulonglong)lVar3 >> 0x20);
  lVar4 = (longlong)*(int *)(unaff_EBP + -0x10) * (longlong)*(int *)(unaff_EBP + -0xc);
  iVar6 = (int)((ulonglong)lVar4 >> 0x20);
  uVar1 = (uint)((uint)lVar4 < (uint)lVar3);
  iVar2 = iVar6 - iVar5;
  *(uint *)(unaff_EBP + -4) =
       (uint)((SBORROW4(iVar6,iVar5) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0);
  return *(uint *)(unaff_EBP + -4);
}
