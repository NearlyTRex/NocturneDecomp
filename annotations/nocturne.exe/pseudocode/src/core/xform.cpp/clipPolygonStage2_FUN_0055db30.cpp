// Name: core_xform.cpp_clipPolygonStage2_FUN_0055db30
// Address: 0055db30
// Address Range: [[0055db30, 0055dc92]]
// Convention: unknown
// Signature: void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055dc3e) */
/* WARNING: Removing unreachable block (ram,0x0055dbb3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_clipPolygonStage2_FUN_0055db30(void)

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
  byte bVar9;
  int iStack_14;
  
  bVar9 = 0;
  iStack_14 = 0;
  if (0 < (int)_DAT_02de3134) {
    vertex_a = (SRenderVertex *)&DAT_02de3140;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == _DAT_02de3134) {
        uVar4 = uVar4 ^ _DAT_02de3134;
      }
      pSVar6 = (SRenderVertex *)(&DAT_02de3140 + uVar4 * 0x30);
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <= -*(int *)(&DAT_02de3148 + uVar4 * 0x30)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
        iVar5 = 0x30;
        pSVar6 = vertex_a;
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar6->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar6->projected_vertex).transformed_y;
          pSVar6 = (SRenderVertex *)&(pSVar6->projected_vertex).transformed_z;
          *plVar8 = (longlong)ROUND((float10)lVar1);
          plVar8 = plVar8 + 1;
          iVar5 = iVar5 + -8;
        }
        if (iVar5 != 0 && -9 < iVar5 + -8) {
          *(int *)plVar8 = (pSVar6->projected_vertex).transformed_x;
          if (4 < iVar5) {
            *(uint *)((int)plVar8 + (uint)bVar9 * -8 + 4) =
                 *(uint *)((int)pSVar6 + (uint)bVar9 * -8 + 4);
          }
        }
        _DAT_02de3138 = _DAT_02de3138 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                  (pSVar6,vertex_a,(SRenderVertex *)(_DAT_02de3138 * 0x30 + 0x2de3d40));
        _DAT_02de3138 = _DAT_02de3138 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(_DAT_02de3138 * 0x30 + 0x2de3d40);
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        while (7 < iVar5) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar8 = (longlong)ROUND((float10)lVar2);
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
        _DAT_02de3138 = _DAT_02de3138 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_0055d770
                  (vertex_a,pSVar6,(SRenderVertex *)(_DAT_02de3138 * 0x30 + 0x2de3d40));
        _DAT_02de3138 = _DAT_02de3138 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < (int)_DAT_02de3134);
  }
  return;
}
