// Name: FUN_0043d3c0
// Address: 0043d3c0
// Address Range: [[0043d3c0, 0043d4e7]]
// Convention: unknown
// Signature: void FUN_0043d3c0(void)

#include "nocturne.h"

void FUN_0043d3c0(void)

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
  if (0 < (int)DAT_007c8428) {
    v1 = (SRenderVertex *)&DAT_007c9030;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007c8428) {
        uVar2 = uVar2 ^ DAT_007c8428;
      }
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_y;
      if ((int)(&DAT_007c9038)[uVar2 * 0xc] <= (int)(&DAT_007c9034)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar5 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
        DAT_007c842c = DAT_007c842c + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                  ((SRenderVertex *)(&DAT_007c9030 + uVar2 * 0xc),v1,
                   (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
        DAT_007c842c = DAT_007c842c + 1;
        break;
      case 2:
        pSVar4 = v1;
        piVar5 = &DAT_007c9630 + DAT_007c842c * 0xc;
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
        DAT_007c842c = DAT_007c842c + 1;
        engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_0043ced0
                  (v1,(SRenderVertex *)(&DAT_007c9030 + uVar2 * 0xc),
                   (SRenderVertex *)(&DAT_007c9630 + DAT_007c842c * 0xc));
        DAT_007c842c = DAT_007c842c + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007c8428);
  }
  return;
}
