// Name: core_xform.cpp_FUN_0055df19
// Address: 0055df19
// Address Range: [[0055df19, 0055df83]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055df19(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0055df1a) overlaps instruction at (ram,0x0055df19)
void core_xform_cpp_FUN_0055df19(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  SRenderVertex *in_EDX;
  SRenderVertex *unaff_EBX;
  SRenderVertex *unaff_EBP;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  int unaff_EDI;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  int unaff_retaddr;
  
  bVar11 = 0;
code_r0x0055df19:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar9 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar5 = in_ECX;
  pSVar8 = in_EDX;
  plVar10 = plVar9;
  if (((uint)plVar9 & 7) != 0) {
    plVar10 = (longlong *)((int)&DAT_00766c78 + (uint)bVar11 * -8 + unaff_EDI);
    pSVar8 = (SRenderVertex *)((int)in_EDX + (uint)bVar11 * -8 + 4);
    *(int *)plVar9 = (in_EDX->projected_vertex).transformed_x;
    iVar5 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_0055df52;
  }
  while (7 < iVar5) {
    lVar2._0_4_ = (pSVar8->projected_vertex).transformed_x;
    lVar2._4_4_ = (pSVar8->projected_vertex).transformed_y;
    pSVar8 = (SRenderVertex *)&(pSVar8->projected_vertex).transformed_z;
    *plVar10 = (longlong)ROUND((float10)lVar2);
    plVar10 = plVar10 + 1;
    iVar5 = iVar5 + -8;
  }
  if (iVar5 != 0 && -9 < iVar5 + -8) {
    *(int *)plVar10 = (pSVar8->projected_vertex).transformed_x;
    if (4 < iVar5) {
      *(uint *)((int)plVar10 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
    }
  }
LAB_0055df52:
  DAT_00766c70 = DAT_00766c70 + 1;
  core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
            (in_EDX,unaff_EBP,(SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar5 = unaff_retaddr;
  do {
    pSVar8 = unaff_EBX;
    unaff_retaddr = iVar5 + 1;
    in_EDX = pSVar8 + 1;
    if ((int)_DAT_02de313c <= unaff_retaddr) {
      return;
    }
    uVar4 = iVar5 + 2;
    if (uVar4 == _DAT_02de313c) {
      uVar4 = uVar4 ^ _DAT_02de313c;
    }
    iVar5 = uVar4 * 0x30;
    unaff_EBP = (SRenderVertex *)(&DAT_02de4340 + iVar5);
    bVar3 = pSVar8[1].projected_vertex.transformed_y <= -pSVar8[1].projected_vertex.transformed_z;
    if (*(int *)(&DAT_02de4344 + iVar5) <= -*(int *)(&DAT_02de4348 + iVar5)) {
      bVar3 = bVar3 | 2;
    }
    unaff_EBX = in_EDX;
    iVar5 = unaff_retaddr;
    switch(bVar3) {
    case 0:
      plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar6 = 0x30;
      pSVar7 = in_EDX;
      plVar10 = plVar9;
      if (((uint)plVar9 & 7) != 0) {
        plVar10 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar11 * -2);
        pSVar7 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 0x34);
        *(int *)plVar9 = (in_EDX->projected_vertex).transformed_x;
        iVar6 = 0x2c;
      }
      while (7 < iVar6) {
        lVar1._0_4_ = (pSVar7->projected_vertex).transformed_x;
        lVar1._4_4_ = (pSVar7->projected_vertex).transformed_y;
        pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
        *plVar10 = (longlong)ROUND((float10)lVar1);
        plVar10 = plVar10 + 1;
        iVar6 = iVar6 + -8;
      }
      if (iVar6 != 0 && -9 < iVar6 + -8) {
        *(int *)plVar10 = (pSVar7->projected_vertex).transformed_x;
        if (4 < iVar6) {
          *(uint *)((int)plVar10 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)pSVar7 + (uint)bVar11 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                (unaff_EBP,in_EDX,(SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_0055de81_caseD_2;
    }
  } while( true );
switchD_0055de81_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0055df19;
}
