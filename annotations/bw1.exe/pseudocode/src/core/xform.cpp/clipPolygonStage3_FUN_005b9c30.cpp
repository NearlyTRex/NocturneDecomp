// Name: core_xform.cpp_clipPolygonStage3_FUN_005b9c30
// Address: 005b9c30
// Address Range: [[005b9c30, 005b9d8d]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005b9c30(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b9d39) */
/* WARNING: Removing unreachable block (ram,0x005b9cae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_xform_cpp_clipPolygonStage3_FUN_005b9c30(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  SRenderVertex *vertex_a;
  SRenderVertex *pSVar7;
  longlong *plVar8;
  byte bVar9;
  int iStack_14;
  
  bVar9 = 0;
  iStack_14 = 0;
  if (0 < (int)_DAT_02c9d2f0) {
    vertex_a = (SRenderVertex *)0x2c9def8;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == _DAT_02c9d2f0) {
        uVar4 = uVar4 ^ _DAT_02c9d2f0;
      }
      iVar5 = uVar4 * 0x30;
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_y;
      if (*(int *)(&DAT_02c9df00 + iVar5) <= *(int *)(&DAT_02c9defc + iVar5)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar8 = (longlong)ROUND((float10)lVar1);
          plVar8 = plVar8 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar8 = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)plVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                  ((SRenderVertex *)(iVar5 + 0x2c9def8),vertex_a,
                   (SRenderVertex *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30));
        _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30);
        iVar6 = 0x30;
        pSVar7 = vertex_a;
        while (7 < iVar6) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar8 = (longlong)ROUND((float10)lVar2);
          plVar8 = plVar8 + 1;
          iVar6 = iVar6 + -8;
        }
        if (iVar6 != 0 && -9 < iVar6 + -8) {
          *(int *)plVar8 = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar6) {
            *(uint *)((int)plVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
          }
        }
        _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
        core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0
                  (vertex_a,(SRenderVertex *)(iVar5 + 0x2c9def8),
                   (SRenderVertex *)(&DAT_02c9e4f8 + _DAT_02c9d2f4 * 0x30));
        _DAT_02c9d2f4 = _DAT_02c9d2f4 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < (int)_DAT_02c9d2f0);
  }
  return;
}
