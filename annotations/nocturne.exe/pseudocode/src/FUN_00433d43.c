// Name: FUN_00433d43
// Address: 00433d43
// Address Range: [[00433d43, 00433d92]]
// Convention: unknown
// Signature: void FUN_00433d43(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433d44) overlaps instruction at (ram,0x00433d43)
void FUN_00433d43(void)

{
  byte bVar1;
  int iVar2;
  uint in_ECX;
  uint uVar3;
  int *in_EDX;
  int *unaff_EBX;
  int *unaff_EBP;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  byte bVar6;
  int iVar7;
  int unaff_retaddr;
  
  bVar6 = 0;
code_r0x00433d43:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar4 = in_EDX;
  piVar5 = (int *)((int)&DAT_00767b4c + unaff_EDI);
  for (uVar3 = in_ECX >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  for (uVar3 = in_ECX & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar5 = (char)*piVar4;
    piVar4 = (int *)((int)piVar4 + (uint)bVar6 * -2 + 1);
    piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
  }
  DAT_00767b40 = DAT_00767b40 + 1;
  engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
            (in_EDX,unaff_EBP,&DAT_00767b4c + DAT_00767b40 * 0xc);
  DAT_00767b40 = DAT_00767b40 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b3c <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar7 + 2;
    if (uVar3 == DAT_00767b3c) {
      uVar3 = uVar3 ^ DAT_00767b3c;
    }
    unaff_EBP = &DAT_0076814c + uVar3 * 0xc;
    bVar1 = unaff_EBX[0xe] <= *in_EDX;
    if ((int)(&DAT_00768154)[uVar3 * 0xc] <= *unaff_EBP) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      piVar4 = in_EDX;
      piVar5 = &DAT_00767b4c + DAT_00767b40 * 0xc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(char *)piVar5 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + (uint)bVar6 * -2 + 1);
        piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
      }
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (unaff_EBP,in_EDX,&DAT_00767b4c + DAT_00767b40 * 0xc);
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 2:
      goto switchD_00433cca_caseD_2;
    }
  } while( true );
switchD_00433cca_caseD_2:
  unaff_EDI = DAT_00767b40 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433d43;
}
