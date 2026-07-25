// Name: FUN_00433cd7
// Address: 00433cd7
// Address Range: [[00433cd7, 00433d3c]]
// Convention: unknown
// Signature: void FUN_00433cd7(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433cd8) overlaps instruction at (ram,0x00433cd7)
void FUN_00433cd7(void)

{
  byte bVar1;
  uint in_ECX;
  uint uVar2;
  int iVar3;
  int *in_EDX;
  int *unaff_EBX;
  int *piVar4;
  int unaff_EDI;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int unaff_retaddr;
  int iVar8;
  
  bVar7 = 0;
code_r0x00433cd7:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar5 = (int *)((int)&DAT_00767b4c + unaff_EDI);
  for (uVar2 = in_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *piVar5 = *in_EDX;
    in_EDX = in_EDX + (uint)bVar7 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
  }
  for (uVar2 = in_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)piVar5 = (char)*in_EDX;
    in_EDX = (int *)((int)in_EDX + (uint)bVar7 * -2 + 1);
    piVar5 = (int *)((int)piVar5 + (uint)bVar7 * -2 + 1);
  }
  DAT_00767b40 = DAT_00767b40 + 1;
  iVar8 = unaff_retaddr;
  do {
    unaff_retaddr = iVar8 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b3c <= unaff_retaddr) {
      return;
    }
    uVar2 = iVar8 + 2;
    if (uVar2 == DAT_00767b3c) {
      uVar2 = uVar2 ^ DAT_00767b3c;
    }
    piVar5 = &DAT_0076814c + uVar2 * 0xc;
    bVar1 = unaff_EBX[0xe] <= *in_EDX;
    if ((int)(&DAT_00768154)[uVar2 * 0xc] <= *piVar5) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar8 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      goto switchD_00433cca_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (piVar5,in_EDX,&DAT_00767b4c + DAT_00767b40 * 0xc);
      DAT_00767b40 = DAT_00767b40 + 1;
      break;
    case 2:
      piVar4 = in_EDX;
      piVar6 = &DAT_00767b4c + DAT_00767b40 * 0xc;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar6 = (char)*piVar4;
        piVar4 = (int *)((int)piVar4 + (uint)bVar7 * -2 + 1);
        piVar6 = (int *)((int)piVar6 + (uint)bVar7 * -2 + 1);
      }
      DAT_00767b40 = DAT_00767b40 + 1;
      engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0
                (in_EDX,piVar5,&DAT_00767b4c + DAT_00767b40 * 0xc);
      DAT_00767b40 = DAT_00767b40 + 1;
    }
  } while( true );
switchD_00433cca_caseD_0:
  unaff_EDI = DAT_00767b40 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433cd7;
}
