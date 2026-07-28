// Name: core_xform.cpp_FUN_0055de20
// Address: 0055de20
// Address Range: [[0055de20, 0055de87]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_0055de20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_xform_cpp_FUN_0055de20(void)

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
  longlong *plVar9;
  byte bVar10;
  int local_14;
  
  bVar10 = 0;
  local_14 = 0;
  if (0 < (int)_DAT_02de313c) {
    vertex_a = (SRenderVertex *)&DAT_02de4340;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == _DAT_02de313c) {
        uVar4 = uVar4 ^ _DAT_02de313c;
      }
      iVar5 = uVar4 * 0x30;
      bVar3 = (vertex_a->projected_vertex).transformed_y <=
              -(vertex_a->projected_vertex).transformed_z;
      if (*(int *)(&DAT_02de4344 + iVar5) <= -*(int *)(&DAT_02de4348 + iVar5)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
        iVar5 = 0x30;
        pSVar7 = vertex_a;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
          pSVar7 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (vertex_a->projected_vertex).transformed_x;
          iVar5 = 0x2c;
        }
        while (7 < iVar5) {
          lVar1._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar1._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar9 = (longlong)ROUND((float10)lVar1);
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
        DAT_00766c70 = DAT_00766c70 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                  ((SRenderVertex *)(&DAT_02de4340 + iVar5),vertex_a,
                   (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
        DAT_00766c70 = DAT_00766c70 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
        iVar6 = 0x30;
        pSVar7 = vertex_a;
        plVar9 = plVar8;
        if (((uint)plVar8 & 7) != 0) {
          plVar9 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
          pSVar7 = (SRenderVertex *)((int)vertex_a + (uint)bVar10 * -8 + 4);
          *(int *)plVar8 = (vertex_a->projected_vertex).transformed_x;
          iVar6 = 0x2c;
        }
        while (7 < iVar6) {
          lVar2._0_4_ = (pSVar7->projected_vertex).transformed_x;
          lVar2._4_4_ = (pSVar7->projected_vertex).transformed_y;
          pSVar7 = (SRenderVertex *)&(pSVar7->projected_vertex).transformed_z;
          *plVar9 = (longlong)ROUND((float10)lVar2);
          plVar9 = plVar9 + 1;
          iVar6 = iVar6 + -8;
        }
        if (iVar6 != 0 && -9 < iVar6 + -8) {
          *(int *)plVar9 = (pSVar7->projected_vertex).transformed_x;
          if (4 < iVar6) {
            *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
          }
        }
        DAT_00766c70 = DAT_00766c70 + 1;
        core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                  (vertex_a,(SRenderVertex *)(&DAT_02de4340 + iVar5),
                   (SRenderVertex *)(&DAT_00766c74 + DAT_00766c70 * 0xc));
        DAT_00766c70 = DAT_00766c70 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < (int)_DAT_02de313c);
  }
  return;
}
