// Name: core_xform.cpp_FUN_0055de8e
// Address: 0055de8e
// Address Range: [[0055de8e, 0055df12]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055de8e(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0055de8f) overlaps instruction at (ram,0x0055de8e)
void core_xform_cpp_FUN_0055de8e(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  SRenderVertex *in_EDX;
  SRenderVertex *unaff_EBX;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  int unaff_EDI;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  int unaff_retaddr;
  
  bVar12 = 0;
code_r0x0055de8e:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar10 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar6 = in_ECX;
  pSVar8 = in_EDX;
  plVar11 = plVar10;
  if (((uint)plVar10 & 7) != 0) {
    plVar11 = (longlong *)((int)&DAT_00766c78 + (uint)bVar12 * -8 + unaff_EDI);
    pSVar8 = (SRenderVertex *)((int)in_EDX + (uint)bVar12 * -8 + 4);
    *(int *)plVar10 = (in_EDX->projected_vertex).transformed_x;
    iVar6 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_0055dec7;
  }
  while (7 < iVar6) {
    lVar1._0_4_ = (pSVar8->projected_vertex).transformed_x;
    lVar1._4_4_ = (pSVar8->projected_vertex).transformed_y;
    pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
    *plVar11 = (longlong)ROUND((float10)lVar1);
    plVar11 = plVar11 + 1;
    iVar6 = iVar6 + -8;
  }
  if (iVar6 != 0 && -9 < iVar6 + -8) {
    *(int *)plVar11 = (pSVar8->projected_vertex).transformed_x;
    if (4 < iVar6) {
      *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
           *(uint *)((int)pSVar8 + (uint)bVar12 * -8 + 4);
    }
  }
LAB_0055dec7:
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar6 = unaff_retaddr;
  do {
    pSVar8 = unaff_EBX;
    unaff_retaddr = iVar6 + 1;
    in_EDX = pSVar8 + 1;
    if ((int)_DAT_02de313c <= unaff_retaddr) {
      return;
    }
    uVar4 = iVar6 + 2;
    if (uVar4 == _DAT_02de313c) {
      uVar4 = uVar4 ^ _DAT_02de313c;
    }
    iVar5 = uVar4 * 0x30;
    bVar3 = pSVar8[1].projected_vertex.transformed_y <= -pSVar8[1].projected_vertex.transformed_z;
    if (*(int *)(&DAT_02de4344 + iVar5) <= -*(int *)(&DAT_02de4348 + iVar5)) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    iVar6 = unaff_retaddr;
    switch(bVar3) {
    case 0:
      goto switchD_0055de81_caseD_0;
    case 1:
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                ((SRenderVertex *)(&DAT_02de4340 + iVar5),in_EDX,
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      plVar10 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar7 = 0x30;
      pSVar9 = in_EDX;
      plVar11 = plVar10;
      if (((uint)plVar10 & 7) != 0) {
        plVar11 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar12 * -2);
        pSVar9 = (SRenderVertex *)((int)pSVar8 + (uint)bVar12 * -8 + 0x34);
        *(int *)plVar10 = (in_EDX->projected_vertex).transformed_x;
        iVar7 = 0x2c;
      }
      while (7 < iVar7) {
        lVar2._0_4_ = (pSVar9->projected_vertex).transformed_x;
        lVar2._4_4_ = (pSVar9->projected_vertex).transformed_y;
        pSVar9 = (SRenderVertex *)&(pSVar9->projected_vertex).transformed_z;
        *plVar11 = (longlong)ROUND((float10)lVar2);
        plVar11 = plVar11 + 1;
        iVar7 = iVar7 + -8;
      }
      if (iVar7 != 0 && -9 < iVar7 + -8) {
        *(int *)plVar11 = (pSVar9->projected_vertex).transformed_x;
        if (4 < iVar7) {
          *(uint *)((int)plVar11 + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)pSVar9 + (uint)bVar12 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                (in_EDX,(SRenderVertex *)(&DAT_02de4340 + iVar5),
                 (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
switchD_0055de81_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0055de8e;
}
