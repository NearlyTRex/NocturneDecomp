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
  SRenderVertex *in_EDX;
  SRenderVertex *unaff_EBX;
  SRenderVertex *v2;
  SRenderVertex *pSVar4;
  int unaff_EDI;
  int *piVar5;
  byte bVar6;
  int unaff_retaddr;
  int iVar7;
  
  bVar6 = 0;
code_r0x00433e1d:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar5 = (int *)((int)&DAT_0076874c + unaff_EDI);
  for (uVar2 = in_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *piVar5 = (in_EDX->projected_vertex).transformed_x;
    in_EDX = (SRenderVertex *)((int)in_EDX + (uint)bVar6 * -8 + 4);
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = in_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(char *)piVar5 = (char)(in_EDX->projected_vertex).transformed_x;
    in_EDX = (SRenderVertex *)((int)in_EDX + (uint)bVar6 * -2 + 1);
    piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
  }
  DAT_00767b44 = DAT_00767b44 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 1;
    if ((int)DAT_00767b40 <= unaff_retaddr) {
      return;
    }
    uVar2 = iVar7 + 2;
    if (uVar2 == DAT_00767b40) {
      uVar2 = uVar2 ^ DAT_00767b40;
    }
    v2 = (SRenderVertex *)(&DAT_00767b4c + uVar2 * 0xc);
    bVar1 = (in_EDX->projected_vertex).transformed_x <= -unaff_EBX[1].projected_vertex.transformed_z
    ;
    if ((v2->projected_vertex).transformed_x <= (int)-(&DAT_00767b54)[uVar2 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      goto switchD_00433e10_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                (v2,in_EDX,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
      DAT_00767b44 = DAT_00767b44 + 1;
      break;
    case 2:
      pSVar4 = in_EDX;
      piVar5 = &DAT_0076874c + DAT_00767b44 * 0xc;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = (pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
        piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
        pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
        piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
      }
      DAT_00767b44 = DAT_00767b44 + 1;
      engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0
                (in_EDX,v2,(SRenderVertex *)(&DAT_0076874c + DAT_00767b44 * 0xc));
      DAT_00767b44 = DAT_00767b44 + 1;
    }
  } while( true );
switchD_00433e10_caseD_0:
  unaff_EDI = DAT_00767b44 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433e1d;
}
