// Name: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_004322de
// Address: 004322de
// Address Range: [[004322de, 00432402]]
// Convention: unknown
// Signature: void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_004322de(void)

#include "nocturne.h"

void engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_004322de(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  SRenderVertex *v1;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  int *piVar6;
  byte bVar7;
  int iStack_14;
  
  bVar7 = 0;
  iStack_14 = 0;
  if (0 < (int)DAT_007bfcfc) {
    v1 = (SRenderVertex *)&DAT_007c030c;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007bfcfc) {
        uVar2 = uVar2 ^ DAT_007bfcfc;
      }
      pSVar4 = (SRenderVertex *)(&DAT_007c030c + uVar2 * 0xc);
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((int)(&DAT_007c0314)[uVar2 * 0xc] <= (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar6 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -8 + 4);
          piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar6 = (char)(pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + (uint)bVar7 * -2 + 1);
          piVar6 = (int *)((int)piVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_007bfd00 = DAT_007bfd00 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                  (pSVar4,v1,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
        DAT_007bfd00 = DAT_007bfd00 + 1;
        break;
      case 2:
        pSVar5 = v1;
        piVar6 = &DAT_007bfd0c + DAT_007bfd00 * 0xc;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -8 + 4);
          piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)piVar6 = (char)(pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar7 * -2 + 1);
          piVar6 = (int *)((int)piVar6 + (uint)bVar7 * -2 + 1);
        }
        DAT_007bfd00 = DAT_007bfd00 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_00431e10
                  (v1,pSVar4,(SRenderVertex *)(&DAT_007bfd0c + DAT_007bfd00 * 0xc));
        DAT_007bfd00 = DAT_007bfd00 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007bfcfc);
  }
  return;
}
