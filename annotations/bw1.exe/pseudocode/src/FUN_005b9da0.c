// Name: FUN_005b9da0
// Address: 005b9da0
// Address Range: [[005b9da0, 005b9e07] [005b9e4d, 005b9e92]]
// Convention: unknown
// Signature: void FUN_005b9da0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b9eaf) */
/* WARNING: Removing unreachable block (ram,0x005b9e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b9da0(void)

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
  if (0 < (int)_DAT_02c9d2f4) {
    vertex_a = (SRenderVertex *)&DAT_02c9e4f8;
    do {
      uVar4 = iStack_14 + 1;
      if (uVar4 == _DAT_02c9d2f4) {
        uVar4 = uVar4 ^ _DAT_02c9d2f4;
      }
      iVar5 = uVar4 * 0x30;
      bVar3 = (vertex_a->projected_vertex).transformed_y <=
              -(vertex_a->projected_vertex).transformed_z;
      if (*(int *)(&DAT_02c9e4fc + iVar5) <= -*(int *)(&DAT_02c9e500 + iVar5)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
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
        DAT_007c7554 = DAT_007c7554 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                  ((SRenderVertex *)(&DAT_02c9e4f8 + iVar5),vertex_a,
                   (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
        DAT_007c7554 = DAT_007c7554 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_007c7558 + DAT_007c7554 * 0xc);
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
        DAT_007c7554 = DAT_007c7554 + 1;
        core_xform_cpp_clipInterpolateBottomPlane_FUN_005b9870
                  (vertex_a,(SRenderVertex *)(&DAT_02c9e4f8 + iVar5),
                   (SRenderVertex *)(&DAT_007c7558 + DAT_007c7554 * 0xc));
        DAT_007c7554 = DAT_007c7554 + 1;
      }
      iStack_14 = iStack_14 + 1;
      vertex_a = vertex_a + 1;
    } while (iStack_14 < (int)_DAT_02c9d2f4);
  }
  return;
}
