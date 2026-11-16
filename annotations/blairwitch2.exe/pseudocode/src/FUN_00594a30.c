// Name: FUN_00594a30
// Address: 00594a30
// Address Range: [[00594a30, 00594b92]]
// Convention: unknown
// Signature: void FUN_00594a30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00594a30(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int iStack_14;
  
  bVar10 = 0;
  iStack_14 = 0;
  if (0 < (int)_DAT_02665a60) {
    vertex_a = (SRenderVertex *)&DAT_02665a6c;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == _DAT_02665a60) {
        uVar4 = uVar4 ^ _DAT_02665a60;
      }
      pSVar6 = (SRenderVertex *)(&DAT_02665a6c + uVar4 * 0x30);
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <= -*(int *)(&DAT_02665a74 + uVar4 * 0x30)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_02666670 + (uint)bVar10 * -8 + _DAT_02665a64 * 0x30);
          pSVar6 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          *plVar9 = (longlong)ROUND((float10)lVar1);
          plVar9 = plVar9 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar9 = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar10 * -8 + 4);
          }
        }
        _DAT_02665a64 = _DAT_02665a64 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                  (pSVar6,vertex_a,(SRenderVertex *)(_DAT_02665a64 * 0x30 + 0x266666c));
        _DAT_02665a64 = _DAT_02665a64 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(_DAT_02665a64 * 0x30 + 0x266666c);
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_02666670 + (uint)bVar10 * -8 + _DAT_02665a64 * 0x30);
          pSVar7 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar9 = (longlong)ROUND((float10)lVar2);
          plVar9 = plVar9 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar9 = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
          }
        }
        _DAT_02665a64 = _DAT_02665a64 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670
                  (vertex_a,pSVar6,(SRenderVertex *)(_DAT_02665a64 * 0x30 + 0x266666c));
        _DAT_02665a64 = _DAT_02665a64 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < (int)_DAT_02665a60);
  }
  return;
}
