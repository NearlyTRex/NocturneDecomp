// Name: engine_clipper.c_FUN_00433e1d
// Address: 00433e1d
// Address Range: [[00433e1d, 00433e86]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00433e1d(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433e1e) overlaps instruction at (ram,0x00433e1d)
void engine_clipper_c_FUN_00433e1d(void)

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
code_r0x00433e1d:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar5 = (int *)((int)&DAT_0076874c + unaff_EDI);
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
  DAT_00767b44 = DAT_00767b44 + 1;
  iVar8 = unaff_retaddr;
  do {
    unaff_retaddr = iVar8 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b40 <= unaff_retaddr) {
      return;
    }
    uVar2 = iVar8 + 2;
    if (uVar2 == DAT_00767b40) {
      uVar2 = uVar2 ^ DAT_00767b40;
    }
    piVar5 = &DAT_00767b4c + uVar2 * 0xc;
    bVar1 = *in_EDX <= -unaff_EBX[0xe];
    if (*piVar5 <= (int)-(&DAT_00767b54)[uVar2 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar8 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      goto switchD_00433e10_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                (piVar5,in_EDX,&DAT_0076874c + DAT_00767b44 * 0xc);
      DAT_00767b44 = DAT_00767b44 + 1;
      break;
    case 2:
      piVar4 = in_EDX;
      piVar6 = &DAT_0076874c + DAT_00767b44 * 0xc;
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
      DAT_00767b44 = DAT_00767b44 + 1;
      engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                (in_EDX,piVar5,&DAT_0076874c + DAT_00767b44 * 0xc);
      DAT_00767b44 = DAT_00767b44 + 1;
    }
  } while( true );
switchD_00433e10_caseD_0:
  unaff_EDI = DAT_00767b44 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433e1d;
}
