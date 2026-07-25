// Name: FUN_0042f260
// Address: 0042f260
// Address Range: [[0042f260, 0042f326]]
// Convention: unknown
// Signature: void FUN_0042f260(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_0042f260(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((*(int *)(in_stack_00000004 + 0x18) != 0) && (iVar7 = 0, 0 < in_stack_0000000c)) {
    do {
      sVar1 = *in_stack_00000008;
      sVar2 = in_stack_00000008[1];
      sVar3 = in_stack_00000008[2];
      iVar4 = (int)((short)(in_stack_00000008[3] * 2) >> 1);
      uVar5 = FUN_004f3fe0(in_stack_00000004,(int)sVar1,(int)sVar2);
      uVar6 = FUN_004f3fe0(in_stack_00000004,(int)sVar3,iVar4);
      FUN_0042f330(sVar1 + in_stack_00000010,sVar2 + in_stack_00000014,sVar3 + in_stack_00000010,
                   iVar4 + in_stack_00000014,uVar5,uVar6,(ushort)in_stack_00000008[3] >> 0xf);
      iVar7 = iVar7 + 1;
      in_stack_00000008 = in_stack_00000008 + 4;
    } while (iVar7 < in_stack_0000000c);
  }
  return;
}
