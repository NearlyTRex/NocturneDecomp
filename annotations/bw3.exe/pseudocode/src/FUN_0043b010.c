// Name: FUN_0043b010
// Address: 0043b010
// Address Range: [[0043b010, 0043b071] [0043b09c, 0043b0e1]]
// Convention: unknown
// Signature: void FUN_0043b010(void)

#include "nocturne.h"

void FUN_0043b010(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  int *piVar5;
  byte bVar6;
  int iStack_14;
  
  bVar6 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007e4d5c) {
    v1 = (SRenderVertex *)&DAT_007e5964;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007e4d5c) {
        uVar2 = uVar2 ^ DAT_007e4d5c;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if ((int)(&DAT_007e596c)[uVar2 * 0xc] <= (int)(&DAT_007e5968)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar5 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_007e4d60 = DAT_007e4d60 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                  ((SRenderVertex *)(&DAT_007e5964 + uVar2 * 0xc),v1,
                   (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
        DAT_007e4d60 = DAT_007e4d60 + 1;
        break;
      case 2:
        pSVar4 = v1;
        piVar5 = &DAT_007e5f64 + DAT_007e4d60 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
          piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar5 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
          piVar5 = (int *)((int)piVar5 + (uint)bVar6 * -2 + 1);
        }
        DAT_007e4d60 = DAT_007e4d60 + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ab20
                  (v1,(SRenderVertex *)(&DAT_007e5964 + uVar2 * 0xc),
                   (SRenderVertex *)(&DAT_007e5f64 + DAT_007e4d60 * 0xc));
        DAT_007e4d60 = DAT_007e4d60 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007e4d5c);
  }
  return;
}
