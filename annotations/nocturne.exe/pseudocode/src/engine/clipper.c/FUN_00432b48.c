// Name: engine_clipper.c_FUN_00432b48
// Address: 00432b48
// Address Range: [[00432b48, 00432bd1]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_00432b48(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00432b49) overlaps instruction at (ram,0x00432b48)
uint engine_clipper_c_FUN_00432b48(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  SRenderVertex *unaff_EBX;
  int iVar8;
  SRenderVertex *unaff_EBP;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  int unaff_EDI;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  byte bVar14;
  int in_stack_00000138;
  
  bVar14 = 0;
code_r0x00432b48:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar11 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar13 = in_ECX;
  pSVar9 = unaff_EBX;
  plVar12 = plVar11;
  if (((uint)plVar11 & 7) != 0) {
    plVar12 = (longlong *)((int)&DAT_00766c78 + (uint)bVar14 * -8 + unaff_EDI);
    pSVar9 = (SRenderVertex *)((int)unaff_EBX + (uint)bVar14 * -8 + 4);
    *(int *)plVar11 = (unaff_EBX->projected_vertex).transformed_x;
    iVar13 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_00432b81;
  }
  while (7 < iVar13) {
    lVar1._0_4_ = (pSVar9->projected_vertex).transformed_x;
    lVar1._4_4_ = (pSVar9->projected_vertex).transformed_y;
    pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
    *plVar12 = (longlong)ROUND((float10)lVar1);
    plVar12 = plVar12 + 1;
    iVar13 = iVar13 + -8;
  }
  if (iVar13 != 0 && -9 < iVar13 + -8) {
    *(int *)plVar12 = (pSVar9->projected_vertex).transformed_x;
    if (4 < iVar13) {
      *(uint *)((int)plVar12 + (uint)bVar14 * -8 + 4) =
           *(uint *)((int)pSVar9 + (uint)bVar14 * -8 + 4);
    }
  }
LAB_00432b81:
  DAT_00766c70 = DAT_00766c70 + 1;
  do {
    pSVar9 = unaff_EBP;
    iVar13 = in_stack_00000138 + 1;
    unaff_EBX = pSVar9 + 1;
    if ((int)DAT_007672f4 <= iVar13) {
      if (DAT_00766c70 < 3) {
        return 1;
      }
      iVar13 = 0;
      if (DAT_00766c70 < 1) {
        return 0;
      }
      piVar6 = &DAT_00766c74;
      break;
    }
    uVar7 = in_stack_00000138 + 2;
    if (uVar7 == DAT_007672f4) {
      uVar7 = uVar7 ^ DAT_007672f4;
    }
    bVar5 = DAT_005ad284 <= pSVar9[1].projected_vertex.transformed_z;
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar7 * 0xc]) {
      bVar5 = bVar5 | 2;
    }
    unaff_EBP = unaff_EBX;
    in_stack_00000138 = iVar13;
    switch(bVar5) {
    case 0:
      goto switchD_00432b3b_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                ((SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),unaff_EBX,
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      plVar11 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar13 = 0x30;
      pSVar10 = unaff_EBX;
      plVar12 = plVar11;
      if (((uint)plVar11 & 7) != 0) {
        plVar12 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar14 * -2);
        pSVar10 = (SRenderVertex *)((int)pSVar9 + (uint)bVar14 * -8 + 0x34);
        *(int *)plVar11 = (unaff_EBX->projected_vertex).transformed_x;
        iVar13 = 0x2c;
      }
      while (7 < iVar13) {
        lVar2._0_4_ = (pSVar10->projected_vertex).transformed_x;
        lVar2._4_4_ = (pSVar10->projected_vertex).transformed_y;
        pSVar10 = (SRenderVertex *)&(pSVar10->projected_vertex).transformed_z;
        *plVar12 = (longlong)ROUND((float10)lVar2);
        plVar12 = plVar12 + 1;
        iVar13 = iVar13 + -8;
      }
      if (iVar13 != 0 && -9 < iVar13 + -8) {
        *(int *)plVar12 = (pSVar10->projected_vertex).transformed_x;
        if (4 < iVar13) {
          *(uint *)((int)plVar12 + (uint)bVar14 * -8 + 4) =
               *(uint *)((int)pSVar10 + (uint)bVar14 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (unaff_EBX,(SRenderVertex *)(&DAT_007672f8 + uVar7 * 0xc),
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
LAB_0043273a:
  iVar3 = piVar6[2];
  if (iVar3 == 0) {
    piVar6[2] = 1;
    *piVar6 = 0;
    iVar8 = 0;
LAB_0043274e:
    piVar6[1] = iVar8;
  }
  else {
    iVar4 = *piVar6;
    if (iVar3 < iVar4) {
      *piVar6 = iVar3;
    }
    else {
      iVar8 = -iVar3;
      if (-iVar4 == iVar3 || iVar8 < iVar4) {
        iVar4 = piVar6[1];
        if (piVar6[2] < iVar4) {
          piVar6[1] = piVar6[2];
        }
        else if (-iVar4 != iVar3 && iVar4 <= iVar8) goto LAB_0043274e;
      }
      else {
        *piVar6 = iVar8;
      }
    }
  }
  iVar13 = iVar13 + 1;
  piVar6 = piVar6 + 0xc;
  if (DAT_00766c70 <= iVar13) {
    return 0;
  }
  goto LAB_0043273a;
switchD_00432b3b_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00432b48;
}
