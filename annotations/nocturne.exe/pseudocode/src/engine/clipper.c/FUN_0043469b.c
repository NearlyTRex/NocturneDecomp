// Name: engine_clipper.c_FUN_0043469b
// Address: 0043469b
// Address Range: [[0043469b, 0043471d]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_0043469b(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0043469c) overlaps instruction at (ram,0x0043469b)
uint engine_clipper_c_FUN_0043469b(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint in_ECX;
  uint uVar5;
  SRenderVertex *in_EDX;
  int iVar6;
  int iVar7;
  SRenderVertex *unaff_EBX;
  SRenderVertex *pSVar8;
  int unaff_EDI;
  byte bVar9;
  int in_stack_00000014;
  
  bVar9 = 0;
code_r0x0043469b:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  piVar4 = (int *)((int)&DAT_00766c74 + unaff_EDI);
  for (uVar5 = in_ECX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar4 = (in_EDX->projected_vertex).transformed_x;
    in_EDX = (SRenderVertex *)((int)in_EDX + (uint)bVar9 * -8 + 4);
    piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
  }
  for (uVar5 = in_ECX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar4 = (char)(in_EDX->projected_vertex).transformed_x;
    in_EDX = (SRenderVertex *)((int)in_EDX + (uint)bVar9 * -2 + 1);
    piVar4 = (int *)((int)piVar4 + (uint)bVar9 * -2 + 1);
  }
  DAT_00766c70 = DAT_00766c70 + 1;
  do {
    iVar6 = in_stack_00000014 + 1;
    in_EDX = unaff_EBX + 1;
    if ((int)DAT_00767b48 <= iVar6) {
      if (2 < DAT_00766c70) {
        piVar4 = &DAT_00766c74;
        iVar6 = 0;
        if (0 < DAT_00766c70) {
          do {
            iVar1 = piVar4[2];
            if (iVar1 == 0) {
              piVar4[2] = 1;
              *piVar4 = 0;
              piVar4[1] = 0;
            }
            else if (iVar1 < *piVar4) {
              *piVar4 = iVar1;
            }
            else {
              iVar7 = -iVar1;
              if (-*piVar4 == iVar1 || iVar7 < *piVar4) {
                iVar2 = piVar4[1];
                if (piVar4[2] < iVar2) {
                  piVar4[1] = piVar4[2];
                }
                else if (-iVar2 != iVar1 && iVar2 <= iVar7) {
                  piVar4[1] = iVar7;
                }
              }
              else {
                *piVar4 = iVar7;
              }
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 0xc;
          } while (iVar6 < DAT_00766c70);
        }
      }
      return 0;
    }
    uVar5 = in_stack_00000014 + 2;
    if (uVar5 == DAT_00767b48) {
      uVar5 = uVar5 ^ DAT_00767b48;
    }
    bVar3 = unaff_EBX[1].projected_vertex.transformed_y <=
            -unaff_EBX[1].projected_vertex.transformed_z;
    if ((int)(&DAT_00768d50)[uVar5 * 0xc] <= (int)-(&DAT_00768d54)[uVar5 * 0xc]) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    in_stack_00000014 = iVar6;
    switch(bVar3) {
    case 0:
      goto switchD_0043468e_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                ((SRenderVertex *)(&DAT_00768d4c + uVar5 * 0xc),in_EDX,
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      pSVar8 = in_EDX;
      piVar4 = &DAT_00766c74 + DAT_00766c70 * 0xc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar4 = (pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
        piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)piVar4 = (char)(pSVar8->projected_vertex).transformed_x;
        pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar9 * -2 + 1);
        piVar4 = (int *)((int)piVar4 + (uint)bVar9 * -2 + 1);
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                (in_EDX,(SRenderVertex *)(&DAT_00768d4c + uVar5 * 0xc),
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
switchD_0043468e_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0043469b;
}
