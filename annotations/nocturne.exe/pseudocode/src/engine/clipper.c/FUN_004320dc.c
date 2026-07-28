// Name: engine_clipper.c_FUN_004320dc
// Address: 004320dc
// Address Range: [[004320dc, 00432148]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_004320dc(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x004320dd) overlaps instruction at (ram,0x004320dc)
void engine_clipper_c_FUN_004320dc(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  SRenderVertex *in_EDX;
  int unaff_EBX;
  SRenderVertex *unaff_EBP;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  int unaff_EDI;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  SRenderVertex *unaff_retaddr;
  
  bVar11 = 0;
code_r0x004320dc:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar9 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar6 = in_ECX;
  pSVar8 = in_EDX;
  plVar10 = plVar9;
  if (((uint)plVar9 & 7) != 0) {
    plVar10 = (longlong *)((int)&DAT_00766c78 + (uint)bVar11 * -8 + unaff_EDI);
    pSVar8 = (SRenderVertex *)((int)in_EDX + (uint)bVar11 * -8 + 4);
    *(int *)plVar9 = (in_EDX->projected_vertex).transformed_x;
    iVar6 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_00432115;
  }
  while (7 < iVar6) {
    lVar2._0_4_ = (pSVar8->projected_vertex).transformed_x;
    lVar2._4_4_ = (pSVar8->projected_vertex).transformed_y;
    pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
    *plVar10 = (longlong)ROUND((float10)lVar2);
    plVar10 = plVar10 + 1;
    iVar6 = iVar6 + -8;
  }
  if (iVar6 != 0 && -9 < iVar6 + -8) {
    *(int *)plVar10 = (pSVar8->projected_vertex).transformed_x;
    if (4 < iVar6) {
      *(uint *)((int)plVar10 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
    }
  }
LAB_00432115:
  DAT_00766c70 = DAT_00766c70 + 1;
  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
            (in_EDX,unaff_retaddr,(SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar6 = unaff_EBX;
  do {
    pSVar8 = unaff_EBP;
    unaff_EBX = iVar6 + 1;
    in_EDX = pSVar8 + 1;
    if ((int)DAT_007672f4 <= unaff_EBX) {
      return;
    }
    uVar4 = iVar6 + 2;
    if (uVar4 == DAT_007672f4) {
      uVar4 = uVar4 ^ DAT_007672f4;
    }
    unaff_retaddr = (SRenderVertex *)(&DAT_007672f8 + uVar4 * 0xc);
    bVar3 = DAT_005ad284 <= pSVar8[1].projected_vertex.transformed_z;
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar4 * 0xc]) {
      bVar3 = bVar3 | 2;
    }
    iVar6 = unaff_EBX;
    unaff_EBP = in_EDX;
    switch(bVar3) {
    case 0:
      plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar5 = 0x30;
      pSVar7 = in_EDX;
      plVar10 = plVar9;
      if (((uint)plVar9 & 7) != 0) {
        plVar10 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar11 * -2);
        pSVar7 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 0x34);
        *(int *)plVar9 = (in_EDX->projected_vertex).transformed_x;
        iVar5 = 0x2c;
      }
      while (7 < iVar5) {
        lVar1._0_4_ = (pSVar7->projected_vertex).transformed_x;
        lVar1._4_4_ = (pSVar7->projected_vertex).transformed_y;
        pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
        *plVar10 = (longlong)ROUND((float10)lVar1);
        plVar10 = plVar10 + 1;
        iVar5 = iVar5 + -8;
      }
      if (iVar5 != 0 && -9 < iVar5 + -8) {
        *(int *)plVar10 = (pSVar7->projected_vertex).transformed_x;
        if (4 < iVar5) {
          *(uint *)((int)plVar10 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)pSVar7 + (uint)bVar11 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (unaff_retaddr,in_EDX,(SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_00432049_caseD_2;
    }
  } while( true );
switchD_00432049_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x004320dc;
}
