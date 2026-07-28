// Name: engine_clipper.c_FUN_00432057
// Address: 00432057
// Address Range: [[00432057, 004320d5]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00432057(void)

#include "nocturne.h"

void engine_clipper_c_FUN_00432057(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
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
  
  bVar11 = 0;
code_r0x00432057:
  plVar9 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar5 = 0x30;
  pSVar7 = in_EDX;
  plVar10 = plVar9;
  if (((uint)plVar9 & 7) != 0) {
    plVar10 = (longlong *)((int)&DAT_00766c78 + (uint)bVar11 * -8 + unaff_EDI);
    pSVar7 = (SRenderVertex *)((int)in_EDX + (uint)bVar11 * -8 + 4);
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
  iVar5 = unaff_EBX;
  do {
    pSVar7 = unaff_EBP;
    unaff_EBX = iVar5 + 1;
    in_EDX = pSVar7 + 1;
    if ((int)DAT_007672f4 <= unaff_EBX) {
      return;
    }
    uVar4 = iVar5 + 2;
    if (uVar4 == DAT_007672f4) {
      uVar4 = uVar4 ^ DAT_007672f4;
    }
    bVar3 = DAT_005ad284 <= pSVar7[1].projected_vertex.transformed_z;
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar4 * 0xc]) {
      bVar3 = bVar3 | 2;
    }
    iVar5 = unaff_EBX;
    unaff_EBP = in_EDX;
    switch(bVar3) {
    case 0:
      goto switchD_00432049_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                ((SRenderVertex *)(&DAT_007672f8 + uVar4 * 0xc),in_EDX,
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar6 = 0x30;
      pSVar8 = in_EDX;
      plVar10 = plVar9;
      if (((uint)plVar9 & 7) != 0) {
        plVar10 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar11 * -2);
        pSVar8 = (SRenderVertex *)((int)pSVar7 + (uint)bVar11 * -8 + 0x34);
        *(int *)plVar9 = (in_EDX->projected_vertex).transformed_x;
        iVar6 = 0x2c;
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
      DAT_00766c70 = DAT_00766c70 + 1;
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (in_EDX,(SRenderVertex *)(&DAT_007672f8 + uVar4 * 0xc),
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
switchD_00432049_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  goto code_r0x00432057;
}
