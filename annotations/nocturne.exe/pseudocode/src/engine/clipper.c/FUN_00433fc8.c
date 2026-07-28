// Name: engine_clipper.c_FUN_00433fc8
// Address: 00433fc8
// Address Range: [[00433fc8, 00434017]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00433fc8(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433fc9) overlaps instruction at (ram,0x00433fc8)
void engine_clipper_c_FUN_00433fc8(void)

{
  byte bVar1;
  int iVar2;
  uint in_ECX;
  uint uVar3;
  SRenderVertex *in_EDX;
  SRenderVertex *unaff_EBX;
  SRenderVertex *unaff_EBP;
  SRenderVertex *pSVar4;
  int *piVar5;
  int unaff_EDI;
  byte bVar6;
  int iVar7;
  int unaff_retaddr;
  
  bVar6 = 0;
code_r0x00433fc8:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  pSVar4 = in_EDX;
  piVar5 = (int *)((int)&DAT_00768d4c + unaff_EDI);
  for (uVar3 = in_ECX >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar5 = (pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  for (uVar3 = in_ECX & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
    pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
    piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
  }
  DAT_00767b48 = DAT_00767b48 + 1;
  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
            (in_EDX,unaff_EBP,(SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
  DAT_00767b48 = DAT_00767b48 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 1;
    if ((int)DAT_00767b44 <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar7 + 2;
    if (uVar3 == DAT_00767b44) {
      uVar3 = uVar3 ^ DAT_00767b44;
    }
    unaff_EBP = (SRenderVertex *)(&DAT_0076874c + uVar3 * 0xc);
    bVar1 = unaff_EBX[1].projected_vertex.transformed_z <=
            unaff_EBX[1].projected_vertex.transformed_y;
    if ((int)(&DAT_00768754)[uVar3 * 0xc] <= (int)(&DAT_00768750)[uVar3 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      pSVar4 = in_EDX;
      piVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
        piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
      }
      DAT_00767b48 = DAT_00767b48 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                (unaff_EBP,in_EDX,(SRenderVertex *)(&DAT_00768d4c + DAT_00767b48 * 0xc));
      DAT_00767b48 = DAT_00767b48 + 1;
      break;
    case 2:
      goto switchD_00433f4b_caseD_2;
    }
  } while( true );
switchD_00433f4b_caseD_2:
  unaff_EDI = DAT_00767b48 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433fc8;
}
