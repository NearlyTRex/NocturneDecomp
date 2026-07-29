// Name: core_xform.cpp_clipPolygonStage1_FUN_0055d9c0
// Address: 0055d9c0
// Address Range: [[0055d9c0, 0055db1c]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clipPolygonStage1_FUN_0055d9c0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0055dac8) */
/* WARNING: Removing unreachable block (ram,0x0055da3d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_xform_cpp_clipPolygonStage1_FUN_0055d9c0(void)

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
  int local_14;
  
  bVar9 = 0;
  local_14 = 0;
  if (0 < (int)_DAT_02de3130) {
    vertex_a = (SRenderVertex *)&DAT_02de3740;
    do {
      uVar4 = local_14 + 1;
      if (uVar4 == _DAT_02de3130) {
        uVar4 = uVar4 ^ _DAT_02de3130;
      }
      pSVar6 = (SRenderVertex *)(&DAT_02de3740 + uVar4 * 0x30);
      bVar3 = (vertex_a->projected_vertex).transformed_z <=
              (vertex_a->projected_vertex).transformed_x;
      if (*(int *)(&DAT_02de3748 + uVar4 * 0x30) <= (pSVar6->projected_vertex).transformed_x) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        plVar8 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
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
        _DAT_02de3134 = _DAT_02de3134 + 1;
        break;
      case 1:
        core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                  (pSVar6,vertex_a,(SRenderVertex *)(&DAT_02de3140 + _DAT_02de3134 * 0x30));
        _DAT_02de3134 = _DAT_02de3134 + 1;
        break;
      case 2:
        plVar8 = (longlong *)(&DAT_02de3140 + _DAT_02de3134 * 0x30);
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
        _DAT_02de3134 = _DAT_02de3134 + 1;
        core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0
                  (vertex_a,pSVar6,(SRenderVertex *)(&DAT_02de3140 + _DAT_02de3134 * 0x30));
        _DAT_02de3134 = _DAT_02de3134 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < (int)_DAT_02de3130);
  }
  return;
}
