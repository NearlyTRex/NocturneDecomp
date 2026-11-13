// Name: engine_clipper.c_FUN_0043ad90
// Address: 0043ad90
// Address Range: [[0043ad90, 0043adf0] [0043ae1b, 0043ae36]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_0043ad90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_clipper_c_FUN_0043ad90(void)

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
  if (0 < (int)DAT_007e4d54) {
    v1 = (SRenderVertex *)&DAT_007e5364;
    do {
      uVar2 = iStack_14 + 1;
      if (uVar2 == DAT_007e4d54) {
        uVar2 = uVar2 ^ DAT_007e4d54;
      }
      pSVar4 = (SRenderVertex *)(&DAT_007e5364 + uVar2 * 0xc);
      bVar1 = (v1->projected_vertex).transformed_z <= (v1->projected_vertex).transformed_x;
      if ((int)(&DAT_007e536c)[uVar2 * 0xc] <= (pSVar4->projected_vertex).transformed_x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pSVar4 = v1;
        piVar6 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
        DAT_007e4d58 = DAT_007e4d58 + 1;
        break;
      case 1:
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (pSVar4,v1,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
        DAT_007e4d58 = DAT_007e4d58 + 1;
        break;
      case 2:
        pSVar5 = v1;
        piVar6 = &DAT_007e4d64 + DAT_007e4d58 * 0xc;
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
        DAT_007e4d58 = DAT_007e4d58 + 1;
        engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
                  (v1,pSVar4,(SRenderVertex *)(&DAT_007e4d64 + DAT_007e4d58 * 0xc));
        DAT_007e4d58 = DAT_007e4d58 + 1;
      }
      iStack_14 = iStack_14 + 1;
      v1 = v1 + 1;
    } while (iStack_14 < (int)DAT_007e4d54);
  }
  return;
}
