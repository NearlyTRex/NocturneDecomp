// Name: engine_clipper.c_clipPolygonBottomPlaneGlobal_FUN_0043269e
// Address: 0043269e
// Address Range: [[0043269e, 004327cd]]
// Convention: unknown
// Signature: void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043269e(void)

#include "nocturne.h"

void engine_clipper_c_clipPolygonBottomPlaneGlobal_FUN_0043269e(void)

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
  if (0 < (int)DAT_007bfd08) {
    v1 = (SRenderVertex *)&DAT_007c0f0c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007bfd08) {
        uVar2 = uVar2 ^ DAT_007bfd08;
      }
      bVar1 = (v1->projected_vertex).transformed_y <= -(v1->projected_vertex).transformed_z;
      if (*(int *)(&DAT_007c0f10 + uVar2 * 0x30) <= (int)-(&DAT_007c0f14)[uVar2 * 0xc]) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar5 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
        DAT_007bee30 = DAT_007bee30 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                  ((SRenderVertex *)(&DAT_007c0f0c + uVar2 * 0xc),v1,
                   (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
        DAT_007bee30 = DAT_007bee30 + 1;
        break;
      case 2:
        pSVar4 = v1;
        piVar5 = &DAT_007bee34 + DAT_007bee30 * 0xc;
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
        DAT_007bee30 = DAT_007bee30 + 1;
        engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_004321a0
                  (v1,(SRenderVertex *)(&DAT_007c0f0c + uVar2 * 0xc),
                   (SRenderVertex *)(&DAT_007bee34 + DAT_007bee30 * 0xc));
        DAT_007bee30 = DAT_007bee30 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007bfd08);
  }
  return;
}
