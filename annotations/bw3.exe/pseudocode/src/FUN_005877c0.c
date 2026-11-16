// Name: FUN_005877c0
// Address: 005877c0
// Address Range: [[005877c0, 00587922]]
// Convention: unknown
// Signature: void FUN_005877c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005878ce) */
/* WARNING: Removing unreachable block (ram,0x00587843) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005877c0(void)

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
  if (0 < (int)_DAT_02d22ffc) {
    vertex_a = (SRenderVertex *)&DAT_02d23008;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == _DAT_02d22ffc) {
        uVar4 = uVar4 ^ _DAT_02d22ffc;
      }
      pSVar6 = (SRenderVertex *)(&DAT_02d23008 + uVar4 * 0x30);
      bVar3 = (vertex_a->projected_vertex).transformed_x <=
              -(vertex_a->projected_vertex).transformed_z;
      if ((pSVar6->projected_vertex).transformed_x <= -*(int *)(&DAT_02d23010 + uVar4 * 0x30)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
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
        _DAT_02d23000 = _DAT_02d23000 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                  (pSVar6,vertex_a,(SRenderVertex *)(_DAT_02d23000 * 0x30 + 0x2d23c08));
        _DAT_02d23000 = _DAT_02d23000 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(_DAT_02d23000 * 0x30 + 0x2d23c08);
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
        _DAT_02d23000 = _DAT_02d23000 + 1;
        core_xform_cpp_clipInterpolateLeftPlane_FUN_00587400
                  (vertex_a,pSVar6,(SRenderVertex *)(_DAT_02d23000 * 0x30 + 0x2d23c08));
        _DAT_02d23000 = _DAT_02d23000 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < (int)_DAT_02d22ffc);
  }
  return;
}
